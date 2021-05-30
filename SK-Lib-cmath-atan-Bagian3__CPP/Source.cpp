#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double x = 57.74, result;
	result = atan(x);

	cout << "atan(x) = " << result << " radians" << endl;

	// Output in degrees
	cout << "atan(x) = " << result * 180 / 3.1415 << " degrees" << endl;

	_getch();
	return 0;
}