#include<iostream>
using namespace std;
int main()
{
    //using while loop
    int n;
    cin>>n;
    int i = n;
    while(i>0)
    {
        int j = n;
        while( j>0)
        {
            cout<<j;
            j--;
        }cout<<endl;
        i--;
    }

// 4321
// 4321
// 4321
// 4321

    return 0;
}