#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n=8;
    int k = 3;
    vector<int > narr;
    for(int i = 0; i < n; i+k)
    {
        for(int j =i + k-1; j >= i ; j-- )
        {
            narr.push_back(arr[j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
         cout<<narr[i]<<" ";
    }
        return 0;
}