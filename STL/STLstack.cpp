#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <string> s;
    s.push("sk");
    s.push("dk");
    s.push("ak");
    s.push("pk");
    s.push("lk");
//last in first out 
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl; // shows last element
    s.pop(); // delete last element
    cout<<s.top();


    return 0;
}