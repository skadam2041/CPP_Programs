#include<iostream>
using namespace std;
int  fact(int n)
{
    if (n == 0)
    {
        return 1;  //if it return 0 then whole multiplication willbe zero
    }
    else
    {
        // facto = facto * n;
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int a = fact(n);
    cout<<a;
}