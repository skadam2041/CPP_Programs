#include<iostream>
using namespace std;
 class student 
 {
    private:
    
    string name = "akashhh ";
    public:
    //defautl para constructor with no parameter
    student(string name)
    {
        this->name = name;
       cout<< " paramterized default constructor is called"<<endl;

    }
    student( )
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
    ~student()
    {
        cout<<"dest called"<<endl;
    }

 };
 int main()
 {
    // static allocation
    student stud1("akash");
    stud1.display();
    cout<<"parameter default constructor end here"<<endl;
    //dynamic allocation 
    student *stud = new student;
    //calling output 
    // (*stud).display();
    stud->display();

    cout<<"non parameter default constructor end here"<<endl;

    
 


    return 0;

 }
