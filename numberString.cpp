#include<iostream>
using namespace std;
int main()
{
    cout<<"Which year was your house built"<<endl;
    int year;
    (cin>>year).get();
    cout<<"Enter your address"<<endl;
    char address[80];
    //cin.get();
    cin.getline(address,80);
    cout<<"Year built:"<<year<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Done!"<<endl;
    return 0;

}