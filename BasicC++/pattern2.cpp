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
        while( j<n)
        {
            cout<<i;
            j++;
        }cout<<endl;
        i++;
    }
   //0000
   //1111
   //2222
   //3333


    return 0;
}