#include "Computer.h"
#include "Disk.h"
#include "Memory.h"
#include "VideoAdapter.h"


Computer::Computer()
{
	this->basePrice = 0.0;
	this->diskQuant = 0;
	this->memQuant = 0;
	this->vidQuant = 0;
	this->disk = nullptr;
	this->memory = nullptr;
	this->videoAdapter = nullptr;
}


Computer::~Computer()
{
	delete this->disk;
	delete this->memory;
	delete this->videoAdapter;
}


Computer::Computer(string model, double basePrice, Disk* disk, int diskQuant, Memory* memory,
	int memQuant, VideoAdapter* videoAdapter, int vidQuant)
{
	this->model = model;
	this->basePrice = basePrice;
	
	if (disk != nullptr) {
		this->disk = disk->copy();
		this->diskQuant = diskQuant;
	}
	else {
		this->disk = nullptr;
		this->diskQuant = 0;
	}

	if (memory != nullptr) {
		this->memory = memory->copy();
		this->memQuant = memQuant;
	}
	else {
		this->memory = nullptr;
		this->memQuant = 0;
	}

	if (videoAdapter != nullptr) {
		this->videoAdapter = videoAdapter->copy();
		this->vidQuant = vidQuant;
	}
	else {
		this->videoAdapter = nullptr;
		this->vidQuant = 0;
	}

}


Computer* Computer::copy()
{
	return new Computer(this->model, this->basePrice, this->disk, this->diskQuant,
		this->memory, this->memQuant, this->videoAdapter, this->vidQuant);
}

string Computer::getModel()
{
	return this->model;
}


void Computer::setModel(string model)
{
	this->model = model;
}

double Computer::getBasePrice()
{
	return this->basePrice;
}


void Computer::setBasePrice(double basePrice)
{
	this->basePrice = basePrice;
}

Disk* Computer::getDisk()
{
	if (disk != nullptr)
		return this->disk->copy();
	else
		return nullptr;
}


void Computer::setDisk(Disk* disk)
{
	if (disk != nullptr)
		this->disk = disk->copy();
	else
		this->disk = nullptr;
}

int Computer::getDiskQuant()
{
	return this->diskQuant;
}


void Computer::setDiskQuant(int diskQuant)
{
	this->diskQuant = diskQuant;
}

Memory* Computer::getMemory()
{
	if (memory != nullptr)
		return this->memory->copy();
	else
		return nullptr;
}


void Computer::setMemory(Memory* memory)
{
	if (memory != nullptr)
		this->memory = memory->copy();
	else
		this->memory = nullptr;
}

int Computer::getMemQuant()
{
	return this->memQuant;
}


void Computer::setMemQuant(int memQuant)
{
	this->memQuant = memQuant;
}

VideoAdapter* Computer::getVideoAdapter()
{
	if (videoAdapter != nullptr)
		return this->videoAdapter->copy();
	else
		return nullptr;
}


void Computer::setVideoAdapter(VideoAdapter* videoAdapter)
{
	if (videoAdapter != nullptr)
		this->videoAdapter = videoAdapter->copy();
	else
		this->videoAdapter = nullptr;
}

int Computer::getVidQuant()
{
	return this->vidQuant;
}


void Computer::setVidQuant(int vidQuant)
{
	this->vidQuant = vidQuant;
}




string Computer::toString()
{
	string str = string();
	str.append(this->model);
	str.append(", ");
	char temp[81];
	sprintf(temp, "$%.2f", this->basePrice);
	str.append(temp);
	str.append("\n");

	str.append("   Disk: ");
	if (this->disk == nullptr) {
		str.append("none\n");
	}
	else {
		str.append(disk->toString());
		sprintf(temp, ", %d\n", diskQuant);
		str.append(temp);
	}

	str.append("   Memory: ");
	if (this->memory == nullptr) {
		str.append("none\n");
	}
	else {
		str.append(memory->toString());
		sprintf(temp, ", %d\n", memQuant);
		str.append(temp);
	}

	str.append("   Video Adapter: ");
	if (this->videoAdapter == nullptr) {
		str.append("none\n");
	}
	else {
		str.append(videoAdapter->toString());
		sprintf(temp, ", %d\n", vidQuant);
		str.append(temp);
	}

	
	sprintf(temp, "    Total:   $%.2f", calcTotal()); 
	str.append(temp);
	str.append("\n");
	

	return str;
}

double Computer::calcTotal()
{
	double total = this->basePrice;

	if (this->disk != nullptr) {
		total += this->disk->getPrice() * this->diskQuant;
	}
	else
		total += 0;

	if (this->memory != nullptr) {
		total += this->memory->getPrice() * this->memQuant;
	}
	else
		total += 0;

	if (this->videoAdapter != nullptr) {
		total += this->videoAdapter->getPrice() * this->vidQuant;
	}
	else
		total += 0;

	return total;
}
