#include <iostream>
#include <fstream>
using namespace std;

void dataout(string nm , int agg);
main()
{
    string name;
    int age;
    cout<<"Enter Your name: ";
    cin>>name;
    cout<<"Enter Your age: ";
    cin>>age;
    dataout(name,age);
    
}


void dataout(string nm , int agg)
{
    fstream data;
    data.open("text.txt" , ios :: out);
    data << nm<<endl;
    data << agg;
    data.close();
}