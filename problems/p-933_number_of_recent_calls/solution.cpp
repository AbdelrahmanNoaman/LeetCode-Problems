#include "solution.h"


Solution::Solution(){}

int Solution::solve(int t){
    while(!requests.empty() && requests.front() < t-this->RECENT_CALLS_THRESHOLD){
        requests.pop();
    }
    requests.push(t);
    return requests.size();
}

int Solution::ping(int t){
    return solve(t);
}