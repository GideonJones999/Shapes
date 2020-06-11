#include "Cylinder.h"

double Cylinder::volume() {
	return Square::area() * Circle::area();
}
