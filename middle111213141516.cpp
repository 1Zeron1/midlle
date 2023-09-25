#include <iostream>
#include "middle111213141516.h";
using namespace std;
int ite_second_max_num(long long number) {
    if (number < 10) {
        return -1;
    }

    int maxc = -1;
    int secondmaxc = -1;

    while (number > 0) {
        int c = number % 10;

        if (c > maxc) {
            secondmaxc = maxc;
            maxc = c;
        }
        else if (c < maxc && c > secondmaxc) {
            secondmaxc = c;
        }

        number /= 10;
    }

    return secondmaxc;
}
int its_second_simple_max_num(long long number){
if (number < 10) {
    return -1;
}

int maxc = -1;
int secondmaxc = -1;

while (number > 0) {
    int c = number % 10;

    if (c >= maxc) {
        secondmaxc = maxc;
        maxc = c;
    }
    else if (c > secondmaxc) {
        secondmaxc = c;
    }

    number /= 10;
}

if (maxc == secondmaxc) {
    return -1;
}
else {
    return secondmaxc;
}
}