#include <iostream>
using namespace std;
int main (){
	float a, h, s;
	printf ("nhap do dai day và chieu cao: ");
	scanf ("%f%f", &a, &h);
	s=0.5*a*h;
	printf ("dien tich cua tam giac la: %.2f", s);
	return 0;
}
