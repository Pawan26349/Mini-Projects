#include<iostream>
using namespace std;
main()
{
    string str;
    string arr[5];
    cout<<"enter the array : ";
    for(int i=0;i<5;i++)
    {
        getline(cin,str);
        arr[i]=str;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"the value of "<<i+1<<" : "<<arr[i]<<endl;
    }
    return main();
}