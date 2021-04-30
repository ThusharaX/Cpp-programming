// Paper Version : B

#include<iostream>

using namespace std;

// Class declarration
class Employee {
    private:
        int employeeID;
        string employeeName;
        int OTHours;
        int OTRate;
    public:
        void setEmployeeDetails(int eID, string eN);
        void displayEmployeeDetails();
        void setOTHours(int OTH);
        void setOTRate(int OTR);
        int calculateOTPayment();
};


int main() {

	// Create an Objects
    Employee e1, e2;
	
	// Set values to Objects
    e1.setEmployeeDetails(1111, "Nimal");
    e1.setOTHours(100);
    e1.setOTRate(22);
    
    e2.setEmployeeDetails(2222, "Sunil");
    e2.setOTHours(200);
    e2.setOTRate(18);

    // Calling displayEmployeeDetails() Method
    e1.displayEmployeeDetails();
    e2.displayEmployeeDetails();

    return 0;
}

// Class methods definition
void Employee::setEmployeeDetails(int eID, string eN) {
    employeeID = eID;
    employeeName = eN;
}

void Employee::displayEmployeeDetails() {
    cout << "Employee ID = " << employeeID << endl;
    cout << "Employee Name = " << employeeName << endl;
    cout << "OT Payment = " << calculateOTPayment() << endl << endl;
}

void Employee::setOTHours(int OTH) {
    OTHours = OTH;
}

void Employee::setOTRate(int OTR) {
    OTRate = OTR;
}

int Employee::calculateOTPayment() {
    return (OTHours * OTRate);
}
