//implement the Child class
class Child{
	private :
		int childID;
		char childName[20];
		char ageGroup[20];
		char parentName[20];
		char contactNo[10];
	public :
		void setChildDetails(int cID , char* cName , char* aGroup , char* pName , char* contact);
		void displayChildDetails();
		void setCotactNo();		
};

