//define the class
using namespace std;

class Medicine
{
	private:
		int medicineID;
		string medicineName;
		string sickness;
		double dose;
		
	public:
		void setMedicieDetails(int mID , string mName , string sNess , double pdose);
		void displayMedicinDetails();
		void setDose();
};
