include <iostream>
#include "middle12345.h";
using namespace std;
void its_num_print(int number) {

	cout << number;
}
int its_len_num(long long number) {
	int r = 0;
	while (number / 10) {
		r++;

	}
	cout << r;


}
int its_sum_num(long long number){
	int sum = 0;
	while (number != 0) {
		sum += number % 10;
		number /= 10;


	}

	return sum;
}
long long its_multi_num(long long number) {
	int k = 0;
	while (number != 0) {
		k *= number % 10;
		number /= 10;


	}

	return k;
}
int itc_max_num(long long number) {
	int maxnumber = 0;
	while (number != 0) {
		int k = number % 10;
		if (k > maxnumber) {
			maxnumber = k;
		}
	}
	return maxnumber;
}