#include<iostream>
using namespace std;
 class student
 {
    private:
    
    string name ;
    public:
    //defautl constructor with no parameter
    student()
    {
       cout<< "non paramterized default constructor is called"<<endl;
    }
    //parameter  constructor with no parameter
    student(string name)
    {
        cout<< "paramterized default constructor is called"<<endl;
       this-> name = name;
        // use this-> .. it stores adress of current object which points at argument name
        //                   is stud int this case and assign it with new function parameter which is nm
        

    }
    student (student &temp)
    {
        cout<<"copy constructor callled"<<endl;
        this->name = temp.name;
    }

    void setname(string nm)
    {
        name= nm;  
    }
    void display()
    {
        cout<<name<<endl;
    }

 };
 int main()
 {
    //dynamic allocation 
    // student *stud = new student;
    //calling output
    student stud("akash");
    // stud.setname() ;
    // (*stud).display();
    stud.display();
    cout<<" parameter default constructor end here"<<endl;
    student stud2(stud);
    stud2.display();
    return 0;
    cout<<"  copy constructor end here"<<endl;
    

 }
