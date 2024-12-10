#include <iostream>
using namespace std;
int main (){
	int month;
	printf ("nhap thang trong nam: ");
	scanf ("%d", &month);
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:	
			printf ("thang %d co 31 ngay", month);
			break;
		case 4: case 6: case 9: case 11:
			printf ("thang %d co 30 ngay", month);
			break;
		case 2:
			printf ("thang %d co 28 ngay hoac 29 ngay neu la nam nhuan", month);
			break;
		default:
			printf ("thang khong hop le roi ni oi");
	}
return 0;
}
