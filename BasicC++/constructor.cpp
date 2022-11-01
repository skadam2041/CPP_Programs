#include<iostream>
using namespace std;
 class student
 {
    private:
    
    string name = "akash ";
    public:
    //defautl constructor with no parameter
    student()
    {
       cout<< "non paramterized default constructor is called"<<endl;

    }

    string getname()
    {
        return name;
    }
    void display()
    {
        cout<<name<<endl;
    }

 };
 int main()
 {
    //dynamic allocation 
    student *stud = new student;
    //calling output 
    (*stud).display();
    stud->display();
    cout<<"non parameter default constructor end here"<<endl;

    
 


    return 0;

 }
