#include<stdio.h>

void main() {
	int basic = 4000;
	int ts,da,ta,hra;

	if(basic<=5000) {
		da = basic * 0.10;
		ta = basic * 0.15;
		hra = basic * 0.25;
	} else {
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	ts = da+ta+hra;

	printf("Total Salary = %d",ts);
}