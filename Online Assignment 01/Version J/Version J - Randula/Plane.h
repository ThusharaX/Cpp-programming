//implement the Plane class
class Plane{
	private :
		int planeID;
		char piolet[20];
		char destination[20];
		
	public :
		void setPlaneDetails(int pID , char* pPiolet , char* pDestination);	
		void displayPlaneDetails();
		char* getDestination();
		void setNewPiolet();
};

