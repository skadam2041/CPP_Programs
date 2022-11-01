#include<iostream>
using namespace std;
int main()
{
    //using while loop
    int n,count = 0;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while( j<=n)
        {
            count++;
            cout<<count<<" ";
            j++;
        }cout<<endl;
        i++;
    }

// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
    return 0;
}