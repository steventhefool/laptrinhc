#include <iostream>
using namespace std;
int main (){
	float r, c, s;
	printf ("nhap ban kinh cua hinh tron: ");
	scanf ("%f", &r);
	c = (r*2)*3.14;
	s = r*r *3.14;
	printf ("chu vi cua hinh tron la: %.2f\n", c);
	printf ("dien tich cua hinh tron la: %.2f\n", s);
	return 0;
}
