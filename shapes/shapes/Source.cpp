#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms & Math
#include <random>
#include <cstdlib>
#include <ctime>
#include <math.h>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>
#include "line.h"
#include "Circle.h"
#include "Square.h"
#include "Cylinder.h"

using namespace std;

int main() {
	Line line;
	Circle circle;
	Square square;
	Cylinder cylinder;
	line.setLine(5);
	square.setLine(5);
	circle.setLine(5);
	cout << "The area of the the circle is " << (circle.area()) << "." << endl;
	cout << "The area of the square is " << (square.area()) << "." << endl;
	cout << "The volume of the cylinder is " << (cylinder.volume()) << "." << endl;
	system("PAUSE");
	return 0;
}
