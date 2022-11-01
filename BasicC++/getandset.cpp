#include<iostream>
using namespace std;

class emp{
    private:
    string name;
    string dept;
    int id;
    int salary;
    public:
    // set function can acces private data member and can set value to them
    void set(string nm, string dp,int idd, int sal)
    {
        name = nm;
        dept = dp;
        id = idd;
        salary = sal;
    }
    // get function can access private data and can print it or return it
    string getname()
    {
        return name;
    }
    string getdept()
    {
        return dept;
    }
    int getid()
    {
        return id; 
    }
    int getsalaray()
    {
        return salary; 
    }


    void display()
    {
        cout<<name<<"  "<<dept<<" "<<" "<<id<<" "<<salary<<endl;
    }  
};
int main()
{
    ///static allocation
    emp ak;
    ak.set("akaash","IT", 12, 25000);
    // dk.set("manoj","SDE", 15, 50000);
    ak.display();
    // dk.display();

    //dynamic allocation
    emp *dk = new emp;
    (*dk).set("manoj", "sde", 15, 50000);
    (*dk).display();
    return 0;


}