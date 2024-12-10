#include <iostream>
using namespace std;
int main (){
	int n;
	printf ("nhap vao mot so nguyen (am hoac duong deu duoc): ");
	scanf ("%d",&n);
	if (n >0){
		printf ("%d la mot so duong", n);
	}
	else if (n <0){
		printf ("%d la mot so am",n);
	}
	else if (n==0){
		printf ("so vua nhap vao la %d",n);
	}
	return 0;
}
