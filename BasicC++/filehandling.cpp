#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream 
    ofs("my.txt")
    ofs<<"it is new file by ofs"<<endl;
    // outfile("my file new generated");
    ofs.close();
}