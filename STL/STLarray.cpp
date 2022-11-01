#include<iostream>
#include<array> // include array library
using namespace std;
int main()
{
    int arr[5] = { 1,2,3,4,5}; ///basic arry

    array<int,5> a = { 6,7,8,9,10}; // STL array

    for (int i = 0; i< 5; i ++)
    {
        cout<<a[i]<<endl;
    }
    cout<<a.size()<<endl;  // gives number of element
   // cout<<a.capacity()<<endl; /// gives capacity
    cout<<a.front()<<endl; // gives first element
    cout<<a.back()<<endl; // gives last element
    cout<<a.at(4)<<endl; // gives value at index 4
    cout<<a.empty()<<endl; //true or false 0 or1
}
