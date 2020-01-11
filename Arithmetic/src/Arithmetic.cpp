//============================================================================
// Name        : Arithmetic.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double value = (double)7/2;
	cout << value << endl;
	int num = (int)7.5;
	cout << num << endl;
	int pegas = 68;
	pegas += 1; // pegas++; pegas = pegas + 1;
	cout << pegas << endl;
	int harpy = 138;
	harpy /= 2;
	cout << "The value of the new harpy is " << harpy << endl;
	int troll = 198%4;

	cout << "The remainder of the troll after the equation is " << troll << endl;
	return 0;
}
