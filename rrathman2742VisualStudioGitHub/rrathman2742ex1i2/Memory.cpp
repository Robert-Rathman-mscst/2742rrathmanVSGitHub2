#include "Memory.h"



Memory::Memory()
{
	size = 0;
	price = 0.0;
}

Memory::~Memory()
{
}


Memory::Memory(string model, string memType, int size, double price)
{
	this->model = model;
	this->memType = memType;
	this->size = size;
	this->price = price;
}


string Memory::toString()
{
	string str = string();
	str.append(this->model);
	str.append(", ");
	str.append(this->memType);
	str.append(", ");
	char temp[81];
	sprintf(temp, "%dGB, $%.2f", this->size, this->price);
	str.append(temp);


	return str;
}


Memory* Memory::copy()
{
	return new Memory(this->model, this->memType, this->size, this->price);
}


string Memory::getModel()
{
	return this->model;
}


void Memory::setModel(string model)
{
	this->model = model;
}


string Memory::getMemType()
{
	return this->memType = memType;
}


void Memory::setMemType(string iface)
{
	this->memType = memType;
}


int Memory::getSize()
{
	return this->size;
}


void Memory::setSize(int size)
{
	this->size = size;
}


double Memory::getPrice()
{
	return this->price;
}


void Memory::setPrice(double price)
{
	this->price = price;
}