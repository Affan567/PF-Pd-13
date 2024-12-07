#include <iostream>
#include <fstream>
using namespace std;

void birthdaycake();


string nm;
int ag;
fstream data1;
main()
{
    data1.open("text.txt",ios :: in);
    birthdaycake();
    
}

void birthdaycake()
{
    while( !data1.eof())
    {
        getline(data1,nm );
        data1 >> ag ;
        if(ag % 2 != 0)
        {
            cout<<"**********"<<endl;
            cout<<"*"<<ag<<" HB "<<nm<<"! "<<ag<<"*"<<endl;
            cout<<"**********"<<endl;
        }
        else
        {
            cout<<"##########"<<endl;
            cout<<"#  "<<ag<<"HB"<<nm<<"!"<<ag<<"#"<<endl;
            cout<<"##########"<<endl;
        }
        
    } 
    
    data1.close();
}

