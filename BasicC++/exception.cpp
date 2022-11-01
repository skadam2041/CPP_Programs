# include<iostream>
using namespace std;

int main()
{
int a =0;
int b = 12;
try
{
    if (a==0)
    {
        throw 101;
    }
    int c = a/b;
    cout<<c;
}
catch(int e)
{
    cout<<"101"<<e<<endl;
}
return 0;
}
