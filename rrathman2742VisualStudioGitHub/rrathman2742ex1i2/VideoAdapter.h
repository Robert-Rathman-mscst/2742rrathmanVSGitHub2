#pragma once
#include <string>

using namespace std;

class VideoAdapter
{
public:
	VideoAdapter();
	~VideoAdapter();
private:
	string model;
	string iface;
	int size;
	double price;
public:
	VideoAdapter(string model, string iface, int size, double price);
	string toString();
	VideoAdapter* copy();
	string getModel();
	void setModel(string model);
	string getIface();
	void setIface(string iface);
	int getSize();
	void setSize(int size);
	double getPrice();
	void setPrice(double price);
};

