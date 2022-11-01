#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //max heap -> gives max element
    priority_queue<int> mx;
    mx.push(1);
    mx.push(3);
    mx.push(2);
    mx.push(7);
    mx.push(5);
    mx.push(4);
    cout<<"max element is "<< mx.top()<<endl;
    cout<<"is it empty"<<mx.empty()<<endl;
    cout<<"mx size is"<<mx.size()<<endl;
// min heap -> gives min element
    priority_queue<int , vector<int>, greater<int>> mn;
    mn.push(3);
    mn.push(1);
    mn.push(2);
    mn.push(7);
    mn.push(5);
    mn.push(4);
    cout<<"min element is "<< mn.top()<<endl;
    cout<<"is it empty"<<mn.empty()<<endl;
    cout<<"mn size is"<<mn.size()<<endl;


    return 0;

}