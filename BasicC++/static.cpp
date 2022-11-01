#include<iostream>
using namespace std;
 class student 
 {
    public:
    static int roll_no ;

    static int get()
    {
        return roll_no;  //can be accessed in static function only
        
    }
 };

 int student  :: roll_no = 15;  // can be initialized outside classs

 int main ()
 {
    cout<<student :: get()<<endl; //no need to craete object to access
    return 0;
 }