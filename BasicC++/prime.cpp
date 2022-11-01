#include<iostream>
using namespace std;
int main()
{
    int n,count = 0;
    cout<<"enter number to check prime or not :"<<endl;
    cin>>n;
    if (n>1 )
    {
        for (int i = 2;i <n; i++)
        {
            if (n%i == 0)
            {
               count++;
            }
        }
    }
    if (count >= 1)
    {
        cout<<"notprime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;

    }
}