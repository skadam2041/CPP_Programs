#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <string> q;
    q.push("sk");
    q.push("dk");
    q.push("ak");
    q.push("pk");
    q.push("lk");

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    return 0;
}