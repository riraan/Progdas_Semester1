#include <iostream>
#include <cmath>
using namespace std;

const double phi = 3.1416;
double distance (double x1, double y_1, double x2, double y2) {
	return sqrt(pow((x2-x1), 2) + pow((y2-y_1), 2));
}
double radius (double x1, double y_1, double x2, double y2) {
	return distance(x1, y_1, x2, y2);
}
double circumference (double r) {
	return 2 * phi * r;
}
double area (double r) {
	return phi * pow(r, 2);
}
int main () {
	double x1, x2, y_1, y2;
	
	double  k, l;
	cout << "Masukkan x1 dan y1 (titik pusat lingkaran)" << endl;
	cin >> x1 >> y_1;
	cout << "Masukkan x2 dan y2 (titik pada lingkaran)" << endl;
	cin >> x2 >> y2;
	double r = radius(x1, y_1, x2, y2);
	cout << "Jarak antara dua titik: " << distance(x1, y_1, x2, y2)<< endl;
	// Karena titik ada di lingkaran, maka jari-jari lingkaran sama dengan jarak titik pusat lingkaran (x1, y_1) dan titik di lingkaran (x2, y2)
	cout << "Radius lingkaran: " << radius(x1, y_1, x2, y2) << endl;
	cout << "Diameter lingkaran: " << 2 * r << endl;
	cout << "Keliling lingkaran: " << circumference(r)<<endl;
	cout << "Luas lingkaran: " << area(r)<< endl;
	return 0;
}
