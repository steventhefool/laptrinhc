#include <iostream>
using namespace std;
int main (){
	int n;
	printf ("nhap vao mot so nguyen: ");
	scanf ("%d",&n);
	if ((n%3==0)&&(n%5==0)){
		printf ("%d la so vua chia het cho 3 vua chia het cho 5",n);
	}
	else if (n%3==0){
		printf("%d la so chia het cho 3",n);
	}
	else if (n%5==0){
		printf ("%d la so chia het cho 5", n);
	}
	return 0;
}
