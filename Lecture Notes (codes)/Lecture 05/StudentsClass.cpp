/*  Implement the Student class in C++. */

#include<iostream>

// Student Class
class Student {
    // Data Members
    private:
        int studentNo;
        int marks1;
        int marks2;
        int marks3;
    
    public:
        // Methods
        void setStudentNo(int sNo) {
            studentNo = sNo;
        }
        void setMarks(int m1, int m2, int m3) {
            marks1 = m1;
            marks2 = m2;
            marks3 = m3;
        }
        float calcAvg() {
            float avg = (marks1 + marks2 + marks3) / 3.0;
            return avg;
        }
};

int main(void) {

    // create an OBJECT
    Student student1, student2;
    
    student1.setStudentNo(1023);
    student1.setMarks(50, 60, 70);

    student2.setStudentNo(2345);
    student2.setMarks(70, 80, 75);

    std::cout << "Avg student1 : " << student1.calcAvg() << std::endl;
    std::cout << "Avg student2 : " << student2.calcAvg() << std::endl;

    return 0;
}