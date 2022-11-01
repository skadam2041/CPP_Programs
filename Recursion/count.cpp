#include<iostream>
using namespace std;
int counting(int n)
{
    if (n>0)
    {
        counting(n-1);
        cout<<n<<" ";
    }
    return 0;

}
int main()
{
    int n;
    int i=0;
    cout<<"enter the number: "<<endl;
    n=5;
    counting(n);
}