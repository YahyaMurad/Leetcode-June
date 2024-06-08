#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& numbers, int divisor) {
        int currentSum = numbers[0];
        int length = numbers.size();
        int index, tempSum;
        
        for (int i = 1; i < length; i++) {
            if (numbers[i] == numbers[i - 1] && numbers[i] == 0) {
                return true;
            }
            
            currentSum += numbers[i];
            
            if (currentSum % divisor == 0) {
                return true;
            }
            
            index = 0;
            tempSum = currentSum;
            
            while ((i - index) > 1 && tempSum >= divisor) {
                tempSum -= numbers[index++];
                
                if (tempSum % divisor == 0) {
                    return true;
                }
            }
        }
        
        return false;
    }
};