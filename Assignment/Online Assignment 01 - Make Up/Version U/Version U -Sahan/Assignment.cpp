#include<iostream> // Header File
#include<string> // String header file
#include<iomanip>

using namespace std; // Pre fixed for Std

class Salesman
{
    private : // Properties

    int salesManID;
    string salesManName;
    float salary;
    int contactNo;

    public : // Mrthods

    Salesman();
    Salesman(int sID, string sName, float sSalary, int sContactNo);
    void setSalesmanDetails(int sID, string sName, float sSalary, int sContactNo);
    void DisplaySalesManDetails();
    void setSalesContactNo();

};

 Salesman ::Salesman()  // Default Salesman constructor called
 {
     salesManID = 0;
     salesManName = "";
     salary = 0;
     contactNo = 0;
}

Salesman ::Salesman(int sID, string sName, float sSalary, int sContactNo) // Overload Salesman constructor called
{

    salesManID = sID;
    salesManName = sName;
    salary = sSalary;
    contactNo = sContactNo;

}

 void Salesman ::setSalesmanDetails(int sID, string sName, float sSalary, int sContactNo) // Function called
 {

    salesManID = sID;
    salesManName = sName;
    salary = sSalary;
    contactNo = sContactNo;
}

void Salesman ::DisplaySalesManDetails() // Function called
{

    cout << "SalesManID :" <<salesManID <<endl;
    cout << "SalesManName :" << salesManName <<endl;
    cout << "Salary :" <<salary <<endl;
    cout << "contactNo :" << contactNo <<endl;
    cout <<endl;
}

void  Salesman :: setSalesContactNo() // Function called
{
    
    cout<<"Input New Contact Number Of Salesman" <<salesManID << ":";
    cin>>contactNo;
    cout << endl;


}
int main() // main function 
{

    Salesman sales1;

        sales1.DisplaySalesManDetails(); // Default Constructor Display 

    

    Salesman sales2(0, "Name", 0, 0); // Display Overload constructor
    sales2.DisplaySalesManDetails();


    Salesman* s1 = new Salesman(1, "John", 30000, 772358375);
    s1->DisplaySalesManDetails(); // Display Set Values

    Salesman* s2 = new Salesman(2, "Ann", 40000, 773029452);
     s2->DisplaySalesManDetails(); // Display Set Values

    Salesman* s3 = new Salesman(3, "Leema", 35000, 778294526);
    s3->DisplaySalesManDetails(); // Display Set Values


    s1->setSalesContactNo(); // Set new Contact Number
    s2->setSalesContactNo(); // Set new Contact Number
    s3->setSalesContactNo(); // Set new Contact Number

    s1->DisplaySalesManDetails(); // Dispaly Update Contact number
    s2->DisplaySalesManDetails(); // Dispaly Update Contact number
    s3->DisplaySalesManDetails(); // Dispaly Update Contact number



    delete s1;
    delete s2;
    delete s3;




    return 0; // End of the main function
}