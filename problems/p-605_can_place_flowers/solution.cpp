#include <algorithm>
#include "solution.h"

bool recursiveCall(std::vector<int>flowerbed,int n){
    if(n==0) return true;
    if(flowerbed.size()==1){
        if(flowerbed[0]==0 && n==1) return true;
        return false;
    }
    bool result = false;
    if(n==0){
        return true;
    }

    for(int i=0;i<flowerbed.size();i++){
        if(flowerbed[i] == 1) continue;

        if(i==0){
            if( 1 < flowerbed.size() && flowerbed[1] == 0){
                flowerbed[0] = 1;
                result |= recursiveCall(flowerbed,n-1);
                flowerbed[0] = 0;
            }
        }

        if(i== flowerbed.size()-1){
            if( i-1 >=0 && flowerbed[i-1] == 0){
                flowerbed[i] = 1;
                result |= recursiveCall(flowerbed,n-1);
                flowerbed[i]= 0;
            }
        }

        if(i-1 >= 0 && flowerbed[i-1] == 0 && i+1 < flowerbed.size() && flowerbed[i+1] == 0){
            flowerbed[i] = 1;
            result |= recursiveCall(flowerbed,n-1);
            flowerbed[i]= 0;
        }
    }

    return result;
}

bool Solution::solve(std::vector<int> flowerbed, int n){
    int count = 0;
    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] == 0) {
            bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
            if (emptyLeftPlot && emptyRightPlot) {
                flowerbed[i] = 1;
                count++;
            }
        }
    }
    return count >= n;
}

bool Solution::test(std::vector<int> flowerbed, int n){
    return solve(flowerbed,n);
}