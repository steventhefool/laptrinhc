#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	printf ("nhap lan luot 3 so nguyen: ");
	scanf ("%d%d%d",&a,&b,&c);
	if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf ("sap xep tu nho den lon la: %d %d %d",a,b,c);
	return 0;
}	

