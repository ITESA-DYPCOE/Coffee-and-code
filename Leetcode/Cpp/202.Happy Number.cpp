class Solution {
public:
    int getNext(int n) {
        int totalSum = 0;
        while(n > 0) {
            int d = n % 10;
            n = n /10;
            totalSum += d*d;
        }
        return totalSum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);
        while(fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        if(fast == 1) {
            return true;
        }else {
            return false;
        }
    }
};