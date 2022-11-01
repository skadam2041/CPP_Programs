#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque < int > d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);

    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<"first size"<<d.size()<<endl;
    // cout<<"capacity"<<d.capacity()<<endl;

    d.pop_back();
    d.pop_front();

    cout<<"after pop"<<endl;
    for(auto i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    //coping deque
    deque<int>  e(d);
    cout<<"new deque e"<<endl;
    for(auto i:e)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"functions"<<endl;
    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;

    cout<<"deleting deque"<<endl; // mention start and end point tp delete ..it will erase till endpoint but not end
    d.erase(d.begin(),d.begin()+1);

    cout<<"after erase"<<endl;
    for(auto i:d)
    {
        cout<<i<<" ";
    }


    

}