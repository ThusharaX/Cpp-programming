#include"Lab.h"

void Lab::setLabDetails(int ID , int gc)
{
	labID = ID;
	capacity = gc;
}

int Lab::getCapacity()
{
	return capacity;
}
