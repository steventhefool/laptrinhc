#include <iostream>
using namespace std;
int main (){
	float pi=3.14;
	float r, c, s;
	printf ("nhap ban kinh hinh tron: ");
	scanf ("%f", &r);
	c= r*2*pi;
	s= r*r*pi;
	printf ("chu vi hinh tron la: %f\n", c);
	printf ("dien tich hinh tron la: %f\n", s);
	return 0; 
}
