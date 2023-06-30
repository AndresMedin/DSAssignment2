#include "Functions.h"
#include <iostream>

using namespace std;

// Employee constructor
Employee::Employee(string name, int employeeID, int hoursWorked)
    : name(name), employeeID(employeeID), hoursWorked(hoursWorked) {}

// Professional constructor
Professional::Professional(string name, int employeeID, int hoursWorked)
    : Employee(name, employeeID, hoursWorked), weeklySalary(0), vacationDays(0), healthCareContributions(0) {}

// Set the weekly salary for the professional employee
void Professional::calculateWeeklySalary(float weeklySalary) {
    this->weeklySalary = weeklySalary;  
}

// Calculate the health care contributions for the professional employee (assuming 5% of weekly salary)
void Professional::calculateHealthCareContributions() {
    healthCareContributions = weeklySalary * 0.05;
}

// Calculate the number of vacation days for the professional employee (assuming 8 hours per day)
void Professional::calculateVacationDays() {
    vacationDays = hoursWorked / 8;
}

// Displays the information
void Professional::displayInfo() {
    cout << "Professional Employee:\n";
    cout << "Name: " << name << endl;
    cout << "Weekly Salary: $" << weeklySalary << endl;
    cout << "Health Care Contributions: $" << healthCareContributions << endl;
    cout << "Vacation Days: " << vacationDays << endl;
}

// Nonprofessional constructor
Nonprofessional::Nonprofessional(string name, int employeeID, int hoursWorked)
    : Employee(name, employeeID, hoursWorked), weeklySalary(0), vacationDays(0), healthCareContributions(0) {}

// Set the weekly salary for the nonprofessional employee
void Nonprofessional::calculateWeeklySalary(float weeklySalary) {
    this->weeklySalary = weeklySalary;  
}

// Calculate the health care contributions for the nonprofessional employee (assuming 2% of weekly salary)
void Nonprofessional::calculateHealthCareContributions() {
    healthCareContributions = weeklySalary * 0.02;
}

// Calculate the number of vacation days for the nonprofessional employee (assuming 8 hours per day)
void Nonprofessional::calculateVacationDays() {  
    vacationDays = hoursWorked / 8;
}

// Displays the information
void Nonprofessional::displayInfo() {
    cout << "Nonprofessional Employee:\n";
    cout << "Name: " << name << endl;
    cout << "Weekly Salary: $" << weeklySalary << endl;
    cout << "Health Care Contributions: $" << healthCareContributions << endl;
    cout << "Vacation Days: " << vacationDays << endl;
}
