#include<iostream>
using namespace std;
struct student{
    string name;
    string rollNo;
    int marks;
};


int main(){
    student stu;
cout<<"Enter name: ";
cin>>stu.name;
cout<<"Enter rollno: ";
cin>>stu.rollNo;
cout<<"Enter marks: ";
cin>>stu.marks;

cout<<"Student details: "<<endl;

cout<<"Student Name: "<<stu.name;
cout<<"Roll No: "<<stu.marks;
cout<<"Marks: "<<stu.marks;

    return 0;
}
