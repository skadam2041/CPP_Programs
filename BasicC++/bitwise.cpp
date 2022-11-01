#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout<<"a&b" << (a&b) <<endl ; 
    // 100
    // 110
    // =
    // 100 -> 4

    cout<<"a|b" << (a|b) <<endl ;
    // 100
    // 110
    // =
    // 110 -> 6
    cout<<"~a" << (~a) <<endl ;
    // a =             0000000000000..000100 --> 32 bits
    //                 1111111111111..111011 --> taking inverse
    // 2s compliment   1000000000000..000100 --> 1st bit remains unchanged
    //                                    +1
    // ~a =            1000000000000..000101 --> 5
    cout<<"a^b" << (a^b) <<endl ;
    // 100
    // 110
    // =
    // 010 -> 2
    
    return 0;
       
    
}