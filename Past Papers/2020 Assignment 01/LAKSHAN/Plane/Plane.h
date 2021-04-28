#include <iostream>
using namespace std;

class Plane {
    private:
        int planeID;
        string piolet;
        string destination;

    public:
        void setPlaneDetails(int iplaneID, string ipiolet, string idestination);
        void displayPlaneDetails();
        void setPiolet();
};