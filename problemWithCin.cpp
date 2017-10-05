#include<iostream>
using namespace std;
int main()
{
    char name[15];
    char dessert[15];
    cout<<"Whats your name"<<endl;
    cin.getline(name,15);
    cout<<"Enter your favorite dessert"<<endl;
    cin.clear();
    cin.getline(dessert,15);
    cout<<"I have some "<<dessert<<" for you Mr."<<name<<endl;
    return 0;
}