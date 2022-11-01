#include<iostream>
#include<string.h>

using namespace std;

class student
{
    public:
    string name;
    int roll_no;
    char classname;
    int input;
    string book;
    // student (string nm,int rn, char cls)
    // {
    //     name = nm;
    //     roll_no = rn;
    //     classname = cls;
    // }
    void setdata(string nm,int rn, char cls)
    {
        name = nm;
        roll_no = rn;
        classname = cls;
       
    }
    void choice()
    {
        cout<<"enter number to chooose book"<<endl;
        cout<<"1. history"<<endl;
        cout<<"2. science"<<endl;
        cout<<"3. maths"<<endl;
        cin>>input;
        switch(input)
        {
        case 1 : book = "history";
        break;
        case 2 : book = "science";
        break; 
        case 3 : book = "maths";
        break;
        default : cout<<"invalid input"<<endl;
        }
    }
    void getdata()
    {
        cout<<"here is your details..."<<endl<<name<<"-"<<roll_no<<"-"<<classname<<endl;
    
        cout<<"book you borrowed : "<<book<<endl;
    }
};

int main()
{
    student s;
    string book;
    s.book;
    cout<<-8%5<<endl;
    cout<<"name roll class"<<endl;
    cin>>s.name>>s.roll_no>>s.classname;
    s.setdata(s.name,s.roll_no,s.classname);
    s.choice();
    s.getdata();
    return 0;


    
}