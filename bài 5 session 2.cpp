#include <iostream>
using namespace std;
int main (){
	int chieu_dai, chieu_rong, chu_vi, dien_tich;
	printf ("nhap chieu dai, chieu rong cua hinh chu nhat: ");
	scanf ("%d%d", &chieu_dai, &chieu_rong);
	chu_vi = (chieu_dai+chieu_rong)*2;
	dien_tich = chieu_dai*chieu_rong;
	printf ("chu vi cua hinh chu nhat la: %d\n", chu_vi);
	printf ("dien tich cua hinh chu nhat la: %d\n", dien_tich);
	return 0;
}
