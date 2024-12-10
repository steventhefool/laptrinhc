#include <iostream>
using namespace std;
int main (){
	int n, reversed, du;
	printf ("nhap vao mot so nguyen gom 4 chu so: ");
	scanf ("%d", &n);
	if ((n >999) && (n<10000)){
		while (n!=0){
			du = n%10;
			reversed = reversed*10 + du;
			n/=10;
		}
		printf ("gia tri nghich dao cua so nguyen da nhap vao la: %d", reversed);
	}
	else {
		printf ("so nhap vao khong phai so nguyen gom 4 chu so");
	}
	return 0;
}
