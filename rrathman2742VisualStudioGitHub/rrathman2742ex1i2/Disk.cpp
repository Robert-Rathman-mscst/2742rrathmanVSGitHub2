#include "Disk.h"



Disk::Disk()
{
	size = 0;
	price = 0.0;
}


Disk::~Disk()
{
}


Disk::Disk(string model, string iface, int size, double price)
{
	this->model = model;
	this->iface = iface;
	this->size = size;
	this->price = price;
}


string Disk::toString()
{
	string str = string();
	str.append(this->model);
	str.append(", ");
	str.append(this->iface);
	str.append(", ");
	char temp[81];
	sprintf(temp, "%dGB, $%.2f", this->size, this->price);
	str.append(temp);


	return str;
}


Disk* Disk::copy()
{
	return new Disk(this->model, this->iface, this->size, this->price);
}


string Disk::getModel()
{
	return this->model;
}


void Disk::setModel(string model)
{
	this->model = model;
}


string Disk::getIface()
{
	return this->iface = iface;;
}


void Disk::setIface(string iface)
{
	this->iface = iface;
}


int Disk::getSize()
{
	return this->size;
}


void Disk::setSize(int size)
{
	this->size = size;
}


double Disk::getPrice()
{
	return this->price;
}


void Disk::setPrice(double price)
{
	this->price = price;
}
