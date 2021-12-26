//implement the student class
class Student{
	private : 
		int studentID;
		char studentName[30];
		int marksOOC;
		int marksSPM;
		int marksISDM;
		
	public : 
		void setStudentDetails(int ID , char* sName , int OOC , int SPM , int ISDM);
		void printStudentDetails();
		int getStudentID();
		int getMarksOOC();
		int getMarksSPM();
		int getMarksISDM();		
};


