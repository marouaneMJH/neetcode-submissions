#define LOWER(c) (std::tolower(static_cast<unsigned char>(c)))

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0,
            j = s.length() - 1;

        while(i<j)
        {
            while( (i < s.length()) && !isalnum(s[i])) i++;

            while( j>=0  && !isalnum(s[j])) j--;

            if(j<0 && i >= s.length()) return true;

            if
            (
                (j<0 && i < s.length()) ||
                (j>0 && i >= s.length()) ||
                LOWER(s[i]) != LOWER(s[j])
            )   return false;

            i++;j--;
        }
        
        return true;
    }
};
