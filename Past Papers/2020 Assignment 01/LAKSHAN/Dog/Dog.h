class Dog {
    private:
        int dogID;
        char dogName[10];
        char owner[10];

    public:
        void setDogDetails(int pdogID, char pdogName[10], char powner[10]);
        void displayDogDetails();
        void setOwner();
};