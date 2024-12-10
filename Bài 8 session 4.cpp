#include <iostream>
using namespace std;
int main (){
	float a,b,c;
	printf ("nhap lan luot 3 canh cua tam giac: ");
	scanf ("%f%f%f",&a,&b,&c);
	if ((a+b>c)&&(a+c>b)&&(b+c >a)){
		printf ("ba canh vua nhap la ba canh cua tam giac\n");
	}
	else {
		printf ("ba canh vua nhap khong phai la ba canh cua tam giac");
	}
	return 0;
}
