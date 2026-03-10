#include <iostream>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:
    void setEmployee(int id, string name, double salary)
    {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    void calculateGrossSalary()
    {
        if (empSalary <= 5000)
            grossSalary = empSalary + empSalary * 0.10;
        else if (empSalary <= 10000)
            grossSalary = empSalary + empSalary * 0.15;
        else
            grossSalary = empSalary + empSalary * 0.20;
    }

    void displayEmployeeDetails()
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }

    void updateEmployee(string name, double salary)
    {
        empName = name;
        empSalary = salary;
    }
};

int main()
{
    Employee e;
    int choice, id;
    string name;
    double salary;

    do
    {
        cout << "\n1.Add Employee";
        cout << "\n2.Calculate Gross Salary";
        cout << "\n3.Display Employee";
        cout << "\n4.Update Employee";
        cout << "\n5.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Salary: ";
            cin >> salary;
            e.setEmployee(id, name, salary);
            break;

        case 2:
            e.calculateGrossSalary();
            break;

        case 3:
            e.displayEmployeeDetails();
            break;

        case 4:
            cout << "Enter new name: ";
            cin >> name;
            cout << "Enter new salary: ";
            cin >> salary;
            e.updateEmployee(name, salary);
            break;
        }

    } while (choice != 5);

    return 0;
}