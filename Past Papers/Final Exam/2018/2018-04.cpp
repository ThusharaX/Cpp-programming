#include <iostream>
using namespace std;
#define SIZE 20

class Ward;
class Team;
class Doctor;
class Patient;

//Doctor class (parent)
class Doctor{

private:
  Patient *patient[SIZE];

protected:
  string Speciality[10];
  string location[10];
  

};

//ConsultantDoctor class (child)
class ConsultantDoctor:Doctor{

private:
  double fee;
  Patient *patient[SIZE];
  Team *team;
};

//JuniorDoctor class (child)
class JuniorDoctor:Doctor{

private:
  int hours;

};

//Patient class (association-bi)
class Patient{

private:
  string id;
  string gender;
  int age;
  int Accepted;
  string sickness[10];
  string prescription[10];
  string allergies[10];
  string specialReq[10];
  Doctor *doctor[SIZE];
  ConsultantDoctor *cd;
  Team *team;
  Ward *w;
};

//Team class (association-bi/composition-whole)
class Team{

public:
  string name;
  ConsultantDoctor *cd;
  Doctor *d;
  Patient *p[SIZE];

};

//Ward class (association-bi/composition-part)
class Ward{

private:
  string name;
  string gender;
  int capacity;
  Patient *p[SIZE];

};

//Hospital class (composition-whole)
class Hospital{

private:
  string name;
  string address;
  string phone;
  Ward *w[SIZE];
  Team *t[SIZE];
  
};