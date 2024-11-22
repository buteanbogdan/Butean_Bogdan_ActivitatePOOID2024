#include <iostream>
using namespace std;
class Laptop {
public:
	int ram;
	int storage;
	int processor;


	Laptop() {
		ram = 0;
		storage = 0;
		processor = 0;
	}

	Laptop(int ram, int storage, int processor) {
		this->ram = ram;
		this->storage = storage;
		this->processor = processor;
	}
	~Laptop() {
	}
};



void main() {
	Laptop laptop1;
	cout << laptop1.ram << " " << laptop1.storage << " " << laptop1.processor << endl;
	laptop1.ram = 8;
	laptop1.storage = 256;
	laptop1.processor = 2.4;
	cout << laptop1.ram << " " << laptop1.storage << " " << laptop1.processor << endl;
	Laptop laptop2(16, 512, 3.2);
	cout << laptop2.ram << " " << laptop2.storage << " " << laptop2.processor << endl;
}