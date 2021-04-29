
class Plane {
    private:
        int planeID;
        char piolet[20];
        char destination[20];

    public:
        void setPlaneDetails(int iplaneID, char ipiolet[20], char idestination[20]);
        void displayPlaneDetails();
        void setPiolet();
};