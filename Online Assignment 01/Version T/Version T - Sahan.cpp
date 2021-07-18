#include<iostream> // Header file
#include<string> // String header file


using namespace std; // Pre fixed for std

class Medicine { // Medicine Class
 
    private :  // Private Properties

        int medicineID;
        string medicineName;
        string sickness;
        string dose;

    public : // Method

        Medicine();
        Medicine(int mID, string mNaame, string sick, string Does);
        void setMedicineDetails(int mID, string mNaame, string sick, string Does);
        void displayMedicineDetails();
        void setDose();
};

 Medicine :: Medicine() { // Default Constructer

     medicineID = 0;
     medicineName = "";
     sickness = "";
     dose = "";

     // cout << "Default Constructor Called" <<endl;
}

 Medicine :: Medicine(int mID, string mNaame, string sick, string Does) { // Overload constructer

    medicineID = mID;
    medicineName =  mNaame;
    sickness = sick;
    dose =  Does;

    // cout << "Overload Constructor Called" <<endl;
}

void Medicine :: setMedicineDetails(int mID, string mNaame, string sick, string Does) { // Method call

      medicineID = mID;
      medicineName =  mNaame;
     sickness = sick;
     dose =  Does;
}

void Medicine :: displayMedicineDetails() { // Method call

    cout << "Medicine ID :" << medicineID <<endl;
    cout << "Medicine Name :" <<medicineName <<endl;
    cout << "Sickness :" << sickness <<endl;
    cout << "Dose :" <<dose <<endl;
    cout << endl;
}

void Medicine :: setDose() { // Method call

    cout<< "Input new dose of Medicine" << medicineID << ":";
    cin >> dose;
}

int main() { //Main function


    Medicine med1; 

    med1.displayMedicineDetails(); // Display Deafult Constructor

    Medicine med2(0, "Medicine Name", "Sick", "Does");  // Set Overload Value
    med2.displayMedicineDetails(); // Display Overload Constructor


    Medicine medicine[3];

    medicine[0].setMedicineDetails(1, "Panadol", "Headache", "1.0"); // Set Medicine details
    medicine[1].setMedicineDetails(1, "Panadol", "Headache", "1.0"); // Set Medicine details
    medicine[2].setMedicineDetails(1, "Panadol", "Headache", "1.0"); // Set Medicine details




        for(int i=0; i<3; i++) { // For loop

            medicine[i].displayMedicineDetails(); // Display set values
        }

        for(int i=0; i<3; i++) { // For loop

            medicine[i].setDose(); // Set new Dose

        }

        for(int i=0; i<3; i++) { // For loop

            medicine[i].displayMedicineDetails(); // Display new set values

        } 




        return 0;  // End function

}
