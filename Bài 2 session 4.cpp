#include <iostream>
using namespace std;
int main (){
	int n;
	printf ("nhap vao mot so nguyen: ");
	scanf ("%d", &n);
	if (n%2==0){
		printf ("%d la mot so chan", n);
	}
	else {
		printf ("%d la mot so le", n);
	}
	return 0;
}
