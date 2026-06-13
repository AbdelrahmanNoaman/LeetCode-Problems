#include "solution.h"

bool Solution::solve(int x){
    if (x < 0)
        return false;
    long int num = 0;
    int rem = 0;
    int temp = x;

    while (temp != 0) {
        rem = temp % 10;
        num = num * 10 + rem;
        temp = temp / 10;
    }
    if (num != x)
        return false;
    return true;
}

bool Solution::test(int x){
    return solve(x);
}