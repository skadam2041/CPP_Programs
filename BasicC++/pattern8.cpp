#include<iostream>
using namespace std;
int main()
{
    //using while loop
    int n;
    cin>>n;
    int i = 0;
    while(i<n)
    {
        int j = 0;
        while( j<i+1)
        {
            cout<<"*";
            j++;
        }cout<<endl;
        i++;
    }


// *
// **
// ***
// ****
    return 0;
}