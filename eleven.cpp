#include<iostream>
#include<string>
using namespace std;

struct Employee{
string firstName;
string lastName;
double salary;
};

void emp_init(Employee* e, const string& firstName, const string& lastName, double monthlySalary) {
    e->firstName = firstName;
    e->lastName = lastName;
    e->salary = monthlySalary;
}

void set_salary(Employee* e, double salary) {
    e->salary = salary;
}

void emp_display(Employee* e) {
    cout << "First Name: " << e->firstName << endl;
    cout << "Last Name: " << e->lastName << endl;
    cout << "Monthly Salary: " << e->salary << endl;
}

int main(){
    Employee emp;
    emp_init(&emp,"Aditi","Likhar",90000.0);
    cout<<"Details: "<<endl;
    emp_display(&emp);

    set_salary(&emp,99000.0);
    cout<<"After updating: "<<endl;
    emp_display(&emp);
    return 0;
}
