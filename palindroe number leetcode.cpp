class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string numstr= to_string(x);

        int start=0;
        int end=numstr.size()-1;
        while(start<end){
            if(numstr[start]!=numstr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;

    }
    
};
