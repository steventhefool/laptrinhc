#include <iostream>
using namespace std;
int main (){
	char c;
	printf ("nhap vao 1 ky tu: ");
	scanf ("%c",&c);
	printf ("%c day la kieu char, kieu ky tu\n", c); // chi nhan duoc 1 chu cai dau tien
	int integer;
	printf ("nhap vao so nguyen: ");
	scanf ("%d", &integer);
	printf ("%d day la kieu int, kieu so nguyen\n", integer);// neu nhap gia tri so co dau phay thi nhung so sau dau phay se tu dong xoa
	float real_number;
	printf ("nhap vao so thuc: ");
	scanf ("%f", &real_number);
	printf (" %.2f day la kieu float, kieu so thuc\n", real_number); //in ra gia tri ke ca khi nhap vao so co dau phay
	return 0;}

