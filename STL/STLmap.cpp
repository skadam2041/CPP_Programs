#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string> s;
    // mapping with key and value pairs
    s[1] = "sk";
    s[2] = "pk";
    s[12] = "dk";
    s[5] = "nk";
    //it will get mappeed in ordered format
    //inserting seperately use { key,vaalue} iside bracket function
    s.insert({7,"jk"});
    // use for loop to print
    for (auto i : s)
    {
       cout<< i.first <<" "<<i.second <<endl;
    }

    //to erase
    s.erase(2);
    cout<<"after erase "<<endl;
    for (auto i : s)
    {
       cout<< i.first <<" "<<i.second <<endl;
    }
    cout<<"present or not "<<s.count(5)<<endl;





}