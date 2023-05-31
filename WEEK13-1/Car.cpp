#include "Car.h"
#include <iostream>  
Car::Car(float ss, int ww, float pp, int wd, float dd, int p) {
	speed = ss;
	wheels = ww;
	price = pp;
	windows = wd;
	distance = dd;
	pa = p;
	std::cout << " new Car \n";
}
void Car::speedUp(float x) { speed += x; }
void Car::speedDown(float x) { speed -= x; }
void Car::setPrice(float x) { price = x; }
float Car::getPrice() { return price; }
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWindows(int y) { windows = y; }
int Car::getWindows() { return windows; }
void Car::setdistance(float z) { distance = z; }
float Car::getdistance() { return distance; }
void Car::setWheels(int n) { wheels = n; }
int Car::getWheels() { return wheels; }
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";
	}
}