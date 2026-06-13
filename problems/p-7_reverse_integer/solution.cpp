#include <climits>
#include "solution.h"

int Solution::solve(int x){
    long int num = 0;
    int rem = 0;
    while (x != 0) {
        rem = x % 10;
        num = num * 10 + rem;
        x = x / 10;
    }
    if (num > INT_MAX || num < INT_MIN)
        return 0;
    return num;
}

int Solution::test(int x){
    return solve(x);
}