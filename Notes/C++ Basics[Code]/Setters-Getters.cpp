#include <iostream>

using namespace std;

class Student {
	private:
		string name;
		int age;
		string grade;

		int calc() {
			return age * 5;
		}

	public:
		// Methods
		void talk() {
			cout << "My name is: " << name << endl;
			cout << "Calc: " << calc() << endl;
		}

		void setName(string n) {
			name = n;
		}

		string getName() {
			return name;
		}
		void setAge(int a) {
			age = a;
		}

		int getAge() {
			return age;
		}
};

int main() {
	
	Student s1, s2, s3;

	s1.setName("Sahan");
	s1.setAge(25);
	s1.talk();

	s2.setName("Thushara");
	s2.setAge(20);
	s2.talk();
	
	return 0;
}
