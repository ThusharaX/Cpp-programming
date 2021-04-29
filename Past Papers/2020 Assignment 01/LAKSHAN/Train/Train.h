class Train {
  private:
    int trainID;
    int capacity;
    char startTime[10];
    char destination[20];

  public:
    void setTrainDetails(int ptrainID, int pcapacity, char pstartTime[10],char pdestination[20]);
    void displayTrainDetails();
    void setStartTime();
};