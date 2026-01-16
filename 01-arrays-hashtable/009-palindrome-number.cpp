#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int revNum = 0;
        int n = x;
        while(x > 0){
            long long lastDigit = x%10;
            if(revNum > INT_MAX / 10 || (revNum > INT_MAX / 10 && lastDigit > 7)){
                return 0;
            }
            if(revNum < INT_MIN / 10 || (revNum < INT_MAX / 10 && lastDigit < -8)){
                return 0;
            }
            revNum = revNum * 10 + lastDigit;
            x = x/10;
        }
        if(revNum == n){
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    // inputs
    int x =-121;
    Solution Palindrome;
    if(Palindrome.isPalindrome(x)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}