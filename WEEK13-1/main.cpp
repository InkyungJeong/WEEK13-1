#include <iostream>
#include "Car.h"
#include "Engineer.h"
int main() {	
	Car* myCar = new Car();
	Engineer* Me = new Engineer();
	std::cout << " Me->distance " << Me->getCarDistance(myCar) << "\n";
	std::cout << " Me->windows " << Me->getCarWindow(myCar) << "\n";
	std::cout << " Me->pa " << Me->getCarPA(myCar) << "\n";
	myCar->price = 75000.0;
	Me->getCarPrice(myCar);
	std::cout << " Me->price " << Me->getCarPrice(myCar) << "\n";
	delete myCar;
	delete Me;
	return 111;
}