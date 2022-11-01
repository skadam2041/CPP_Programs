#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>=1)
    {
        return sum(n-1)+n;
    }
    else{
        return 0;
    }
}
int main()
{
    int n ;
    cin>> n;
    int ans  = sum(n);
    cout<<ans;
}