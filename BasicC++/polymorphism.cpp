//operator overloading
#include<iostream>
using namespace std;
class opr 
{
   public:
   int a;
   int b;
   
   opr(int a=0,int b=0)
   {
      a = a;
      b = b;
   }
   friend opr operator*( opr x,opr y);
}; 
opr operator*( opr x, opr y)
   {
      opr temp;
      temp.a = x.a - y.a;
      // temp.b = b + x.b;
      cout<<temp.a;

   }
int main()
{
   opr s;
   s.a = 10;

   opr t;
   t.a = 5;
   opr r;
   r = s * t;
   cout<<r.a<<" "<<endl;
   

     return 0;
}
