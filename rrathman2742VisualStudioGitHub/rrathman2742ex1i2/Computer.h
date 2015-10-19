#pragma once
#include <string>
#include "Disk.h"
#include "Memory.h"
#include "VideoAdapter.h"

using namespace std;

class Computer
{
public:
	Computer();
	~Computer();
private:
	string model;
	double basePrice;
	Disk* disk;
	int diskQuant;
	Memory* memory;
	int memQuant;
	VideoAdapter* videoAdapter;
	int vidQuant;
public:
	Computer(string model, double basePrice, Disk* disk, int discQuant, Memory* memory, int memQuant, VideoAdapter* videoAdapter, int vidQuant);
	Computer* copy();
	string getModel();
	void setModel(string model);
	double getBasePrice();
	void setBasePrice(double basePrice);
	Disk* getDisk();
	void setDisk(Disk* disk);
	int getDiskQuant();
	void setDiskQuant(int diskQuant);
	Memory* getMemory();
	void setMemory(Memory* memory);
	int getMemQuant();
	void setMemQuant(int memQuant);
	VideoAdapter* getVideoAdapter();
	void setVideoAdapter(VideoAdapter* videoAdapter);
	int getVidQuant();
	void setVidQuant(int vidQuant);
	string toString();
	double calcTotal();
};

