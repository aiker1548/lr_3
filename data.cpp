#include"lib.h"

void Data::EnterData()
{
	cout << "Enter value of Data: ";
	cin >> value;
}

void Data::Display()
{
	cout << value;
}

bool operator==(Data data1, Data data2)
{
	if (data1.value == data2.value)
		return true;
	else
		return false;
}