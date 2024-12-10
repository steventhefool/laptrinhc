#include <stdio.h>
using namespace std;
int main (){
	float van, toan, anh, tong, trung_binh;
	printf ("nhap diem toan, anh, van: ");
	scanf ("%f%f%f", &toan, &anh , &van);
	tong = toan + anh + van;
	trung_binh = (tong)/3;
	printf ("tong diem 3 mon la: %.1f\n", tong);
	printf ("trung binh 3 mon la: %.1f\n", trung_binh);
	return 0; 
}
