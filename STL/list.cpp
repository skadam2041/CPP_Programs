#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> l;
    
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);
    l.push_back(5);
    l.push_front(6);
    cout<<"list l"<<endl;

    for(auto i : l)
    {
        cout<<i<<" ";
    }cout<<endl;

    list <int> l2(l); // copy list
    
    cout<<"list l2"<<endl;

    for(auto i : l2)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.pop_back();
    l.pop_front();

    cout<<"after pop"<<endl;
    for(auto i : l)
    {
        cout<<i<<" ";
    }

    //deleting only specific element
    l.erase(l.begin());

    cout<<"after erase"<<endl;
    for(auto i : l)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"canot use 'at' operator here in list "<<endl;
    return 0;

}


    

