#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
  char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

  cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks"
       << endl; // print headers

  for (int r = 0; r < 5; r++) {
    cout << setw(5) << r + 1 << setw(15) << names[r] << setw(10)
         << setiosflags(ios::fixed) << setprecision(2) << marks[r] << endl;
  }

  return 0;
}