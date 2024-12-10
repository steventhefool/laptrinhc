#include <iostream>
using namespace std;
int main (){
	int tong, tich, hieu;
	float thuong, a,b;
	printf ("nhap vao hai so a, b: ");
	scanf ("%f%f", &a, &b);
	tong= a+b;
	tich= a*b;
	hieu= a-b;
	thuong= a/b;
	printf ("tong hai so a, b la: %d\n", tong);
	printf ("hieu hai so a, b la: %d\n", hieu);
	printf ("tich hai so a, b la: %d\n", tich);
	printf ("thuong hai so a, b la : %f\n", thuong);
	return 0;
}
