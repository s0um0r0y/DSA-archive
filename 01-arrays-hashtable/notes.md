# Complexity Analysis

### Brute force soln
Time complexity: O(n^2).
For each element, we try to find its complement by looping through the rest of the array which takes O(n) time. Therefore, the time complexity is O(n^2).

Space complexity: O(1).
The space required does not depend on the size of the input array, so only constant space is used.

### Array overflow problems due to large numbers
- for checking limits of numbers use this format
```cpp
#include <climits>
long long lastDigit = x%10;
            if(revNum > INT_MAX / 10 || (revNum > INT_MAX / 10 && lastDigit > 7)){
                return 0;
            }
            if(revNum < INT_MIN / 10 || (revNum < INT_MAX / 10 && lastDigit < -8)){
                return 0;
            }
```
- Also for palindrome related problems do not forget to make a copy of the number