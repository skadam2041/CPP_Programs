#include<iostream>
using namespace std;

int search(int A[],int key,int i)
{
    if(A[i] == key)
    {
        return i;
    }
    else
    {
        return search(A,key,i+1);
    }
}
int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int key,i = 0;
    cout<<"enter key"<<endl;
    cin>>key;
    int ans =search(a,key,i);
    cout<<ans<<endl;
}
