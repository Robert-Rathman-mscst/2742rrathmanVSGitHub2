#pragma once
#include <string>

using namespace std;

class Disk
{
public:
	Disk();
	~Disk();
private:
	string model;
	string iface;
	int size;
	double price;

public:	
	Disk(string model, string iface, int size, double price);
	string toString();
	Disk* copy();
	string getModel();
	void setModel(string model);
	string getIface();
	void setIface(string iface);
	int getSize();
	void setSize(int size);
	double getPrice();
	void setPrice(double price);
};

