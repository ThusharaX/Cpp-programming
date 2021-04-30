// Paper Version : S

#include<iostream>

using namespace std;

// Class declarration
class Child {
    private:
        int childID;
        string childName;
        string ageGroup;
        string parentName;
        string contactNo;
    public:
        void setChildDetails(int cID, string cN, string aG, string pN, string cNum);
        void displayChildDetails();
        void setContactNo();
};


int main() {

	// Create an Objects
    Child c1, c2, c3;
	
	// Set values to Objects
    c1.setChildDetails(1, "Oliver", "Toddler", "Bryan", "710342981");
    c2.setChildDetails(2, "Cody", "Elder", "Joel", "770343298");
    c3.setChildDetails(3, "Kaden", "Young", "Jessica", "701233070");

    // Calling setContactNo() Method
    c1.setContactNo();
    c2.setContactNo();
    c3.setContactNo();

    // Calling displayChildDetails() Method
    c1.displayChildDetails();
    c2.displayChildDetails();
    c3.displayChildDetails();

    return 0;
}

// Class methods definition 
void Child::setChildDetails(int cID, string cN, string aG, string pN, string cNum) {
    childID = cID;
    childName = cN;
    ageGroup = aG;
    parentName = pN;
    contactNo = cNum;
}

void Child::displayChildDetails() {
    cout << endl << "Child Name = " << childName << endl;
    cout << "Parent Name = " << parentName << endl;
    cout << "Contact Number = " << contactNo << endl;
}

void Child::setContactNo() {
    cout << "Input new contact number of child " << childID << " : ";
    cin >> contactNo;
}
