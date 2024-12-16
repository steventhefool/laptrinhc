#include <iostream>
using namespace std;
int main (){
	float dthang,cthang,sodien,money;
	printf ("nhap so dien dau thang: ");
	scanf ("%f",&dthang);
	printf ("nhap so dien cuoi thang: ");
	scanf ("%f", &cthang);
	if (cthang < dthang){
		printf ("so dien khong hop le");
	}
	else {
		sodien= cthang - dthang;
		if ((sodien > 0) && (sodien<=50)){
			money = 10000*sodien;
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if ((sodien > 50) && (sodien<=100)){
			money = 50 * 10000 + 15000 * (sodien - 50);
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if ((sodien > 100) && (sodien<=150)){
			money = 50 * 10000 + 15000 * 50 + 20000 * (sodien - 100);
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if ((sodien > 150) && (sodien<=200)){
			money = 50 * 10000 + 15000 * 50 + 20000 * 50 + 25000 *(sodien -150);
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if (sodien > 200) {
			money = 50 * 10000 + 15000 * 50 + 20000 * 50 + 25000* 50 + 30000 * (sodien - 200);
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
	}
	return 0;
}
