#include <iostream>
#include "midlle678910.h";
using namespace std;
int itc_max_num(long long number) {
	int minnumber = 0;
	while (number != 0) {
		int k = number % 10;
		if (k < minnumber) {
			minnumber = k;
		}
	}
	return minnumber;
}
int itc_rev_num(long long number) {
	int c = 0;
	while (number != 0) {
		int k = number % 10;
		c++;
		number /= 10;
	}
	return c;
}
int itc_null_count(long long number) {
	int c = 0;
	while (number != 0) {
		if (number % 10 == 0) {
			c++;
		}
		number /= 10;
	}
	return c;
}
bool itc_mirror_num(long long number) {
		long long c_number = number;
		long long k_number = 0;

		while (number > 0) {
			long long b = number % 10;
			k_number = k_number * 10 + b;
			number /= 10;
		}

		return c_number == k_number;
	}
int itc_mirror_count(long long number) {
	int c = 0;

	for (long long i = 1; i <= number; i++) {
		if (itc_mirror_num(i)) {
			c++;
		}
	}

	return c;
}