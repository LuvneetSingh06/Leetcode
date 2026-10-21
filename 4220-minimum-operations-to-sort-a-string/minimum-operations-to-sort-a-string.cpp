class Solution {
public:
    int minOperations(string s) {
        char mx = 'a', mn = 'z';
        int n = s.length();
        for (int i = 0; i < n; i++) {
            mx = max(mx, s[i]);
            mn = min(mn, s[i]);
        }
        // ifs is sorted no operation needed
        if (ranges::is_sorted(s)) 
            return 0;

        // if length = 2 no operation needed to sort
        if (n == 2) 
            return -1;
        
        //sorting tha the string excluding last element and fierst element takes one operation
        if (s[0] == mn || s[n - 1] == mx) 
            return 1;
        

        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx) 
                return 2;
            }
        return 3;
    }
};