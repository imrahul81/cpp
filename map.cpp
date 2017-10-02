#include<bits/stdc++.h>
using namespace std;
int main()
{

  int q;
  cin>>q;
  map <string,int> m;
  for(int i=0;i<q;i++)
  {
    int type;
    cin>>type;
    switch(type)
    {
      case 1:
      {
        string x;
        int y;
        cin>>x>>y;
        m[x] = y;
        break;
      }
      case 2:
      {
        string x;
        cin>>x;
        m.erase(x);
        break;
      }
      case 3:
      {
        string x;
        cin>>x;
        cout<<m[x]<<endl;
        break;
      }
    }
  }
  return 0;
}
