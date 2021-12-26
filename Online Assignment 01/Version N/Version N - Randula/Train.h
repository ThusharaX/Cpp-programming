//Implement the Train class
class Train{
	private :
		int trainID;
		int capacity;
		char startTime[20];
		char destination[20];
		
	public :
		void setTrainDetails(int pID , int pCapacity , char* pTime , char* pDestination);
		void displayTrainDetails();
		void setStartTime();		
};
