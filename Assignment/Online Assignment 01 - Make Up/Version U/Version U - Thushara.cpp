#include <iostream>

using namespace std;

class Salesman {
    private:
        int salesmanID;
        string salesmanName;
        float salary;
        string contactNo;
    public:
        void setSalesmanDetails(int sID, string sN, float s, string cNo);
        void displaySalesmanDetails();
        void setSalesmanContactNo();
};

int main()
{
    Salesman *s1 = new Salesman();
    Salesman *s2 = new Salesman();
    Salesman *s3 = new Salesman();

    string contactNo;

    s1->setSalesmanDetails(1, "john", 30000, "772358375");
    s2->setSalesmanDetails(2, "Ann", 40000, "773029452");
    s3->setSalesmanDetails(3, "Leema", 35000, "778294526");

    s1->setSalesmanContactNo();
    s2->setSalesmanContactNo();
    s3->setSalesmanContactNo();

    s1->displaySalesmanDetails();
    s2->displaySalesmanDetails();
    s3->displaySalesmanDetails();

    delete s1;
    delete s2;
    delete s3;

    return 0;
}

void Salesman::setSalesmanDetails(int sID, string sN, float s, string cNo) {
    salesmanID = sID;
    salesmanName = sN;
    salary = s;
    contactNo = cNo;
}

void Salesman::displaySalesmanDetails() {
    cout << endl << "SalesmanID = " << salesmanID << endl;
    cout << "salesmanName = " << salesmanName << endl;
    cout << "salary = " << salary << endl;
    cout << "contactNo = " << contactNo << endl;
}

void Salesman::setSalesmanContactNo() {
	cout << "Input new contact number of salesman " << salesmanID << ": ";
    cin >> contactNo;
}


