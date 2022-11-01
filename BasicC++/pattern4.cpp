#include<iostream>
using namespace std;
int main()
{
    //using while loop
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while( j<=n)
        {
            cout<<j;
            j++;
        }cout<<endl;
        i++;
    }

// 1234
// 1234
// 1234
// 1234

    return 0;
}