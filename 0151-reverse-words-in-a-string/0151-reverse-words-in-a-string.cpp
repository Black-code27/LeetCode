class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0)
                break;

            if (ans != "")
                ans += ' ';

            int j = i;

            while (i >= 0 && s[i] != ' ')
                i--;

            for (int k = i + 1; k <= j; k++)
                ans += s[k];
        }

        return ans;
    }
};

