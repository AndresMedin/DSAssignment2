#include <string>

using namespace std;

// Abstract base class
class Employee {
protected:
    string name;
    int employeeID;
    int hoursWorked;

public:
    Employee(string name, int employeeID, int hoursWorked);

    virtual void calculateWeeklySalary(float weeklySalary) = 0;
    virtual void calculateHealthCareContributions() = 0;
    virtual void calculateVacationDays() = 0;
};

// Derived class for professional employees
class Professional : public Employee {
private:
    float weeklySalary;
    int vacationDays;
    float healthCareContributions;

public:
    Professional(string name, int employeeID, int hoursWorked);

    void calculateWeeklySalary(float weeklySalary) override;
    void calculateHealthCareContributions() override;
    void calculateVacationDays() override;
    void displayInfo();
};

// Derived class for nonprofessional employees
class Nonprofessional : public Employee {
private:
    float weeklySalary;
    int vacationDays;
    float healthCareContributions;

public:
    Nonprofessional(string name, int employeeID, int hoursWorked);

    void calculateWeeklySalary(float weeklySalary) override;
    void calculateHealthCareContributions() override;
    void calculateVacationDays() override;
    void displayInfo();
};
