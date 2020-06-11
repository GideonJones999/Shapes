#pragma once
#include "Circle.h"
#include "Square.h"
class Cylinder : public Circle, Square
{
public:
	double volume();
};

