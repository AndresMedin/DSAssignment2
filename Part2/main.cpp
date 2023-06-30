//Andres Medina
//Data Structures Comp_Sci_303
//Professor Syed Jawad Hussain Shah
//06-29-2023

#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

int main() {
    string name;
    int employeeID;
    int hoursWorked;
    float weeklySalary;

    // Prompting the user to input the details for professional employee
    cout << "Enter the name of the Professional Employee: ";
  
    getline(cin, name);
  
    cout << "Enter the employee ID: ";
    cin >> employeeID;
  
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    // Creating a Professional employee object and initializing it with the provided details
    Professional profEmployee(name, employeeID, hoursWorked);

    // Prompting the user to input the weekly salary for professional employee
    cout << "Enter the weekly salary for Professional Employee: $";
    cin >> weeklySalary;

    // Calling member functions to calculate various attributes of the professional employee
    profEmployee.calculateWeeklySalary(weeklySalary);
    profEmployee.calculateHealthCareContributions();
    profEmployee.calculateVacationDays();

    // Displaying the information
    profEmployee.displayInfo();

    // Prompting the user to input the details for nonprofessional employee
    cin.ignore();
    cout << "\nEnter the name of the Nonprofessional Employee: ";
  
    getline(cin, name);
  
    cout << "Enter the employee ID: ";
    cin >> employeeID;
  
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    // Creating a Nonprofessional employee object and initializing it with the provided details
    Nonprofessional nonProfEmployee(name, employeeID, hoursWorked);

    // Prompting the user to input the weekly salary for nonprofessional employee
    cout << "Enter the weekly salary for Nonprofessional Employee: $";
    cin >> weeklySalary;

    // Calling member functions to calculate various attributes of the nonprofessional employee
    nonProfEmployee.calculateWeeklySalary(weeklySalary);
    nonProfEmployee.calculateHealthCareContributions();
    nonProfEmployee.calculateVacationDays();

    // Displaying the information
    nonProfEmployee.displayInfo();

    return 0;
}
