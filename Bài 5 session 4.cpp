#include <iostream>
using namespace std;
int main (){
	int n1,n2,n3;
	printf ("nhap lan luot 3 so nguyen: ");
	scanf ("%d%d%d",&n1,&n2,&n3);
	if (((n3 > n1) && (n3 < n2) ) || ((n3 <n1) && (n3 >n2) )){
		printf ("%d la so o giua %d va %d", n3,n2,n1);
	}
	else {
		printf ("%d khong phai la so o giua %d va %d",n3,n2,n1);
	}
	return 0;
}
