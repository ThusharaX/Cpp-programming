//implement the Taxi class

class Taxi{
	private : 
		int taxiID;
		char driver[20];
		float ratePerKM;
		float distanceTravelled;
		
	public :
		void setTaxiDetails(int pID , char* pDriver , float pRate , float pDistance);
		void displayTaxiDetails();
		float calculateBill();				
};
