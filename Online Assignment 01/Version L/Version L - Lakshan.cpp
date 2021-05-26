// Paper Version : L

#include <iostream>

using namespace std;

//Class Definition
class Doctor {
  private:
    int doctorID;
    string doctorName;
    string specialization;
    string hospital;

  public:
    void setDoctorDetails(int dID, string dName, string dSpec, string dHospital);
    void displayDoctorDetails();
    string getSpecialization();
    void setHospital();
};

int main() {
  Doctor d1,d2;

  //Create Objects
  d1.setDoctorDetails(1, "Dr. Sunil", "Neurologist", "Asiri");
  d2.setDoctorDetails(2, "Dr. Yasantha", "Oncologist", "Lanka");

  //Set New hospitals for doctors
  d1.setHospital();
  d2.setHospital();

  cout << endl;

  //Display Doctor Details
  d1.displayDoctorDetails();
  d2.displayDoctorDetails();
  
  return 0;
}

//Methods Implementation

void Doctor::setDoctorDetails(int dID, string dName, string dSpec, string dHospital){
    doctorID = dID;
    doctorName = dName;
    specialization = dSpec;
    hospital = dHospital;
}

void Doctor::displayDoctorDetails(){
  cout << "DoctorID = " << doctorID << endl;
  cout << "DoctorName = " << doctorName << endl;
  cout << "Specialization = " << specialization << endl;
  cout << "Hostpital = " << hospital << endl;
  cout << endl;
}

string Doctor::getSpecialization(){
  return specialization;
}

void Doctor::setHospital(){
  cout << "Input new hostpital of doctor " << doctorID << " : ";
  cin >> hospital;
}