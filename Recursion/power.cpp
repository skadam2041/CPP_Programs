#include<iostream>
using namespace std;
int  power(int num,int p)
{
    if (p == 0)
    {
        return 1; 
    }
    else
    {
        // facto = facto * n;
        return num*(power(num,p-1));    
        }
}
int main()
{
    int p;
    int num;
    cout<<"power"<<endl;
    cin>>p;
    cout<<"number"<<endl;
    cin>>num;
    int a = power(num,p);
    cout<<a;
}