//implement the taxi class

class Doctor{
	private :
		int doctorID;
		char doctorName[20];
		char specialization[30];
		char hospital[20];
		
	public : 
		void setDoctorDetails(int pID , char* pName , char* pSpec , char* pHospital);
		void displayDoctorDetails();
		char* getSpecializaion();
		void setNewHospital();		
};


