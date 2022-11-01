#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector is dynamic array
    //initializing empty array
    vector<int> v;
    //adding elements in it;
    cout<<v.size()<<"size "<<v.capacity() << " capacity"<<endl;
    v.push_back(1);
    cout<<v.size()<<"size "<<v.capacity() << " capacity"<<endl;

    v.push_back(2);
    cout<<v.size()<<"size "<<v.capacity() << " capacity"<<endl;
    
    v.push_back(3);
    cout<<v.size()<<"size "<<v.capacity() << " capacity"<<endl;

   //use for loop to cin or couut elements;
   cout<<"vector"<<endl;
    for (int i = 0; i< v.size(); i ++)
    {
        cout<<v[i]<<endl;
    }

    cout<<"functions"<<endl;
    cout<<v.size()<<endl;  // gives number of element
    cout<<v.capacity()<<endl; /// gives capacity
    cout<<v.front()<<endl; // gives first element
    cout<<v.back()<<endl; // gives last element
    cout<<v.at(2)<<endl; // gives value at index 2
    cout<<v.empty()<<endl; //true or false 0 or1
    v.pop_back(); // delets last element // canot ptint it 
    cout<<"after delete lasts element"<<endl;

    for (int i = 0; i< v.size(); i ++)
    {
        cout<<v[i]<<endl;
    }

    v.clear();// size becomes zero// cannot cout / print it
    cout<<"after clear -size"<<v.size()<<endl;
    cout<<"after clear- capacity"<<v.capacity()<<endl;  // capacity remains same


}

    



