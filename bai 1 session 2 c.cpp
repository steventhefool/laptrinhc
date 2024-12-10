#include <iostream>
using namespace std;
int main (){
	char c;
	printf ("nhap vao 1 ky tu: ");
	scanf ("%c",&c);
	printf ("%c day la kieu char, kieu ky tu\n", c);
	int integer;
	printf ("nhap vao so nguyen: ");
	scanf ("%d", &integer);
	printf ("%d day la kieu int, kieu so nguyen\n", integer);
	float real_number;
	printf ("nhap vao so thuc: ");
	scanf ("%f", &real_number);
	printf (" %.2f day la kieu float, kieu so thuc\n", real_number);
	return 0;}

