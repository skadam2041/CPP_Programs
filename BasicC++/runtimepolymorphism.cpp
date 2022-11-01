//method override ->  precedence to method
#include<iostream>
using namespace std;

class collage
{
    public:
    void display()
    {
        cout<<"inside the collage"<<endl;
    }
};

class mech : public collage
{
    public:
    void display()
    {
        cout<<"inside the mech"<<endl;
    }

};
int main()
{
    mech m;
    m.display();  // child calss method will get precedence over inherited method from parent class
    return 0;
}