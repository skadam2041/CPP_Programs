#include<iostream>
using namespace std;
int rev(int arr[],int n)
{
    
    for(int i = n-1; i >=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int revSWAP(int arr[],int l,int s)
{
    if (s>=l)
    {
        for(int i =0; i< 10; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }
    else{
        swap(arr[s],arr[l]);
        revSWAP(arr,l-1,s+1);
    }
    return 0;
}
int main()
{
    int array[10]= { 0,1,2,3,4,5,6,7,8,9};
    rev(array,10);
    cout<<endl;
    revSWAP(array,9,0);
}