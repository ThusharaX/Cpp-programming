#include <iostream>
using namespace std;

class Train {
  private:
    int trainID;
    int capacity;
    string  startTime;
    string  destination;

  public:
    void setTrainDetails(int ptrainID, int pcapacity, string  pstartTime,string  pdestination);
    void displayTrainDetails();
    void setStartTime();
};