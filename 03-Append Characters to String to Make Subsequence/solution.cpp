#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_pointer = 0, t_pointer = 0;

        while (s_pointer < s.length() && t_pointer < t.length()) {
            if (s[s_pointer] == t[t_pointer]) t_pointer++;
            s_pointer++;
        }

        return t.length() - t_pointer;
    }
};