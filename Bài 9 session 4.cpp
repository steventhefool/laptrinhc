#include <iostream>
using namespace std;
bool nam_nhuan(int year){
	if (((year%4==0) && (year%100!=0)) || (year%400==0))
	return true;
	else {
		return false;
	}
}
int main (){
	int day, month,year, i;
	printf ("nhap ngay, thang, nam: ");
	scanf ("%d%d%d", &day, &month, &year);
	if (year>0){
		if ((month >0) && (month<13)){
			switch (month){
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if((day >0)&&(day <32)){
					printf ("ngay thang nam nhap vao hop le\n");
				}
					else {
						printf ("ngay thang nam nhap vao khong hop le\n");
					}
				break;
				case 4: case 6: case 9: case 11:
				if ((day >0 )&& (day <31)){
						printf ("ngay thang nam nhap vao hop le\n");
				}
					else {
						printf ("ngay thang nam nhap vao khong hop le\n");
					}
					break;
				case 2:
					if ( (nam_nhuan(year)) && (day>0) && (day <=29)){
						printf ("ngay thang nam nhap vao hop le\n");
					}
					else if ( !(nam_nhuan(year)) && (day>0) && (day<29)){
						printf ("ngay thang nam nhap vao hop le\n");
					}
					else {
						printf ("ngay thang nam nhap vao khong hop le\n");
						}
					break;
				default:
						printf ("ngay thang nam nhap vao khong hop le\n");
					break;
			}
		}
	}
	else {
		printf ("ngay thang nam nhap vao khong hop le \n");
	}
	printf ("%d - %d - %d \n",day, month, year);
	return 0;
}
