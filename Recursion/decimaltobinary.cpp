#include<iostream>
using namespace std;
void  fun(int n)
{
    // int ans =0;
    while(n>0)
    {
        int a = n%2;
        cout<<a;
        n = n/2;
    }
    

}

int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}