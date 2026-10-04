#include<iostream>
using namespace std;
class Student
{
private:
        string name;
        float marks;
        int roll_number;

public: 
       void input()
{
cout<<"Enter name\n";
cin>> name;

cout<<"Enter marks\n";
cin>> marks;

cout<<"Enter roll_number\n";
cin>> roll_number;

}
       void display()
{
cout<<"\n Name of student: "<<name;      
       
cout<<"\n Marks of student: "<<marks;

cout<<"\n Roll Number of student: "<<roll_number;
}

};

int main()
{
Student s;
s.input();
s.display();
return 0;
}

