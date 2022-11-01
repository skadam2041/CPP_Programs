#include<iostream>
using namespace std;

class car
{  
   public:
    //data members
    int weight;
    int speed;
    string colour;

    //functions
    void set(int wt,int spd, string clr)
    {
        weight = wt;
        speed = spd;
        colour = clr;

    }
    int getweight()
    {
        return weight;
    }
     int getspeed()
    {
        return speed;
    }
    string getcolour()
    {
        return colour;
    }

};

class tata : public car  // single inhertance
// tata will inherit data and fun from car
{
    public:
     int price;
     
     void setprice(int pc)
     {
        price = pc;
     }
     int getprice()
     {
        return price;
     }

     void best()
     {
        cout<<"tata is best!"<<endl;
     }
};

class mahindra : public tata {}; //multilevel

class landrover: public tata , public car {}; //multiple

class suzuki : public car {}; // hierarchial





int main()
{
    tata t;
    //data members of tata and car  both can be accessed  using object of chile class(tata)
    t.set(500,120,"silver");
    t.setprice(5000000);
    cout<<t.getspeed()<<endl;
    cout<<t.getweight()<<endl;
    cout<<t.getprice()<<endl;
    cout<<t.getcolour()<<endl;
    t.best();
    return 0;
}