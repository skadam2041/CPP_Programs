#include<iostream>
using namespace std;
    // mid = (high +low)/2;
    
int search(int A[],int high,int low,int key)
{
    int mid = (high +low)/2;

    if(A[mid] == key)
    {
        return mid;
    }
    if (key>A[mid])
    {
        low = mid+1;  
    }
    else
    {
        high = mid-1;
    }
    mid = (high +low)/2;
    return search(A,high,low,key );


}
int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int key;
    int low = 0;
    int high = 9; 
    int mid ;
    cout<<"enter key"<<endl;
    cin>>key;
    int ans =search(a,high,low,key);
    cout<<ans<<endl;
}
