#include<iostream>
using namespace std;
int counting(int n)
{
    if (n>0)
    {
        cout<<n<<" ";
        counting(n-1);
    }
    return 0;

}
int main()
{
    int n;
    int i=0;
    cout<<"enter the number: "<<endl;
    cin>>n;
    counting(n);
}