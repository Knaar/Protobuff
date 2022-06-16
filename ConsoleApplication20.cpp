#include <iostream>
#include <fstream>
#include "car.pb.h"
using namespace std;
int main() {
	Car car;
	car.set_brand("Toyota");
	car.set_model("Camry");
	car.set_year(2011);
	cout << car.brand() << " " << car.model() << " " << car.year() << endl;
	ofstream out("/Users/semyon/Desktop/protobuf_lesson/car.bin", ios_base::binary);
	car.SerializeToOstream(&out);
}