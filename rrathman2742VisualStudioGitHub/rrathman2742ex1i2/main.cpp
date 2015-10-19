#include <iostream>
#include "Disk.h"
#include "Memory.h"
#include "VideoAdapter.h"
#include "Computer.h"

using namespace std;

int main()
{
	Disk* d1 = new Disk("WD Red", "SATA-3", 4096, 149.99);
	Disk* d2 = new Disk("PNY XLR8", "SATA-3", 120, 59.99);
	Disk* d3 = new Disk("Seagate Solid State Hybrid", "SATA-3", 2048, 94.99);

	/*System.out.println("Disk1: " + d1);
	System.out.println("Disk2: " + d2);
	System.out.println("Disk3: " + d3);
	System.out.println();*/

	cout << "Disk1:       " << d1->toString() << "\n";
	cout << "Disk2:       " << d2->toString() << "\n";
	cout << "Disk3:       " << d3->toString() << "\n";
	cout << "\n";

	Memory* m1 = new Memory("Crucial Ballistix Tactical", "PC3-12800",
		16, 94.99);
	Memory* m2 = new Memory("Crucial Notebook Module", "PC3-12800",
		8, 39.99);
	Memory* m3 = new Memory("Crucial Ballistix", "PC3-12800",
		2, 14.99);

	/*System.out.println("Memory1: " + m1);
	System.out.println("Memory2: " + m2);
	System.out.println("Memory3: " + m3);
	System.out.println();*/

	cout << "Memory1:       " << m1->toString() << "\n";
	cout << "Memory2:       " << m2->toString() << "\n";
	cout << "Memory3:       " << m3->toString() << "\n";
	cout << "\n";

	VideoAdapter* v1 = new VideoAdapter("EVGA GeForce GTX 960",
		"PCI-E3", 2, 179.99);
	VideoAdapter* v2 = new VideoAdapter("Sapphire Nitro R9 390",
		"PCI-E3", 8, 329.99);
	VideoAdapter* v3 = new VideoAdapter("XFX Radeon HD 6450 625M",
		"PCI-E3", 1, 39.99);

	/*System.out.println("Video1: " + v1);
	System.out.println("Video2: " + v2);
	System.out.println("Video3: " + v3);
	System.out.println();*/

	cout << "Video Adapter1:       " << v1->toString() << "\n";
	cout << "Video Adapter2:       " << v2->toString() << "\n";
	cout << "Video Adapter3:       " << v3->toString() << "\n";
	cout << "\n";

	Computer* c1 = new Computer("Blazer 101", 350.00, d1, 1, m1, 2, v1, 1);
	Computer* c2 = new Computer("Gouger XYZ", 2100.00, d2, 2, m2, 2, v2, 1);
	Computer* c3 = new Computer("Ambler 99X", 250.00, d3, 3, m3, 1, v3, 1);

	/*System.out.println("\nComputer1: " + c1);
	System.out.println("\nComputer2: " + c2);
	System.out.println("\nComputer3: " + c3);
	System.out.println();*/

	cout << "Computer1:       " << c1->toString() << "\n";
	cout << "Computer2:       " << c2->toString() << "\n";
	cout << "Computer3:       " << c3->toString() << "\n";

	Computer* c4 = new Computer("Blazer 202", 450.00, nullptr, 0, nullptr, 0, nullptr, 0);
	/*System.out.println("\nComputer4: " + c4);
	System.out.println();*/

	cout << "Computer4:       " << c4->toString() << "\n";

	Computer* c5 = c3->copy();

	cout << "Computer5:       " << c5->toString() << "\n";

	delete d1;
	delete d2;
	delete d3;
	delete m1;
	delete m2;
	delete m3;
	delete v1;
	delete v2;
	delete v3;
	delete c1;
	delete c2;
	delete c3;
	delete c4;
	delete c5;

	cout << "\n";
	cout << "Press any key to exit.";
	cin.get();
	return 0;
}