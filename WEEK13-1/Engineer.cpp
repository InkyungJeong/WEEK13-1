#include "Engineer.h"
int Engineer::getCarDistance(Car* xx) {
	return xx->distance; 
}
int Engineer::getCarWindow(Car* yy) {
	return yy->windows;
}
int Engineer::getCarPA(Car* zz) {
	return zz->pa;
}
float Engineer::getCarPrice(Car* aa) {
	return aa->getPrice();
}