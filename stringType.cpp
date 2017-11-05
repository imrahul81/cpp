#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char charr[20];
    string str;
    cout<<"Lenght of string in charr before input:"<<strlen(charr)<<endl;
    cout<<"Lenght of string in str before input  :"<<str.size()<<endl;

    cout<<"Enter a line of text: ";
    cin.getline(charr,20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another line of text: ";
    getline(cin,str);
    cout<<"You entered: "<<str<<endl;

    cout<<"Length of charr after input:"<<strlen(charr)<<endl;
    cout<<"Length of str after input:"<<str.size()<<endl;

    return 0;


}