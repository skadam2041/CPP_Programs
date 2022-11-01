#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    cout<<"size "<<s.size()<<endl;
    for(auto i: s)
    {
        cout<<i<<endl;
    }cout<<endl;

    auto it = s.begin(); //asign begin function with variiablr and incremment it to erase next elements in set after  begin element
    it++;
    s.erase(it);
    cout<<s.size()<<endl;
    cout<<endl;
    for(auto i: s)
    {
        cout<<i<<endl;
    }cout<<endl;
    // cout<<s.find(2)<<endl;
    cout<<s.count(3)<<endl; //present or not
    return  0;


}