//define the Lecturer class
class Lecturer{
	private : 
		char lecturerName[30];
		char subject[30];
		char availableDay[30];
		
	public :
		void setLecturerDetails(char* name , char* sub , char* day);
		void displayLectuereDetails();
		void setAvailableDay();		
};
