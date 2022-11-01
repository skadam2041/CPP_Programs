#include<iostream>
using namespace std;
bool check(string s,int i)
{
    if (i >= s.size()/2) return true;
    if (s[i] != s[s.size()-i-1]) return false;
    else return check(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    cout<<check(s,0);
    return 0;
}
