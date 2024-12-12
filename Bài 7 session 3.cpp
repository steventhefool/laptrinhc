#include <stdio.h>
using namespace std;
int main (){
	int a;
	int sum = 0;
	printf ("nhap mot so nguyen gom 4 chu so: ");
	scanf ("%d", &a);
	if ((a > 999) && (a < 10000)){
		sum+=a%10;
		a/=10;
		sum+=a%10;
		a/=10;
		sum+=a%10;
		a/=10;
		sum+=a%10;
		a/=10;
	printf ("tong cac chu so la: %d", sum);
}
	else {
		printf ("so nhap vao khong phai la so nguyen gom 4 chu so");
	}
	return 0;
}

