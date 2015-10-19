#include "VideoAdapter.h"



VideoAdapter::VideoAdapter()
{
	size = 0;
	price = 0.0;
}

VideoAdapter::~VideoAdapter()
{
}


VideoAdapter::VideoAdapter(string model, string iface, int size, double price)
{
	this->model = model;
	this->iface = iface;
	this->size = size;
	this->price = price;
}


string VideoAdapter::toString()
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


VideoAdapter* VideoAdapter::copy()
{
	return new VideoAdapter(this->model, this->iface, this->size, this->price);
}


string VideoAdapter::getModel()
{
	return this->model;
}


void VideoAdapter::setModel(string model)
{
	this->model = model;
}


string VideoAdapter::getIface()
{
	return this->iface = iface;;
}


void VideoAdapter::setIface(string iface)
{
	this->iface = iface;
}


int VideoAdapter::getSize()
{
	return this->size;
}


void VideoAdapter::setSize(int size)
{
	this->size = size;
}


double VideoAdapter::getPrice()
{
	return this->price;
}


void VideoAdapter::setPrice(double price)
{
	this->price = price;
}
