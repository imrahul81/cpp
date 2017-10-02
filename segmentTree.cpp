#include<bits/stdc++.h>
using namespace std;
int Tree[1000];
int A[1000];
void build(int node,int start,int end)
{
	if(start==end)                         //O(1)
	{
		Tree[node]=A[start];
		return;
	}
	int mid=(start+end)/2;
	build(2*node+1,start,mid);         //O(n/2)
	build(2*node+2,mid+1,end);          //O(n/2)
	Tree[node]=Tree[2*node+1]+Tree[2*node+2];     //time complexity T(n/2)+T(n/2) + O(1) - O(n)
	return;
}

void update(int node,int start,int end,int id,int key)
{
	if(start==end)   //Base case
	{
		A[id]=key;
		Tree[node]=A[id];
		return ;
	}
	int mid=(start+end)/2;
	if(id>=start && id<=mid)
	{
		update(2*node+1,start,mid,id,key);    //T(n)=T(n/2)+O(1)     so,O(logn)
	}
	else
	{
		update(2*node+2,mid+1,end,id,key);
	}
	Tree[node]=Tree[2*node+1] + Tree[2*node+2];
}

int query(int node,int start,int end,int l,int r)
{
	if(start>r || end<l)     //Base case
	{
		return 0;
	}
	if(l<=start && end<=r)
	{
		return Tree[node];
	}
	int mid=(start+end)/2;
	return query(2*node+1,start,mid,l,r) + query(2*node+2,mid+1,end,l,r);
}

int main()
{
  int n,t;
  cin>>n>>t;
   for(int i=0;i<n;i++)
   {
   	cin>>A[i];
   }
	build(0,0,n-1);
  /*for(int i=0;i<n;i++)
    cout<<Tree[i]<<" ";*/
    char c;
	int sum;
  while(t--){
    int i,j;
    cin>>c>>i>>j;
    if(c=='q')cout<<query(0,0,n-1,i,j)<<endl;
    else update(0,0,n-1,i,j);
  }
}
