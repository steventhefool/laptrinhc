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
		if ((sodien >= 0) && (sodien<50)){
			money = 10000*sodien;
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if ((sodien >= 50) && (sodien<100)){
			money = 15000 * sodien;
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if ((sodien >= 100) && (sodien<150)){
			money = 20000 * sodien;
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if ((sodien >= 150) && (sodien<200)){
			money = 25000 * sodien;
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
		if (sodien >= 200) {
			money = 30000 * sodien;
			printf ("gia tien dien gia dinh phai tra la: %f", money);
		}
	}
	return 0;
}
