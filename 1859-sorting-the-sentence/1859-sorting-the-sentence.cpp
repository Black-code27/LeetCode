class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(9);
        stringstream ss(s);
        string word;
        int maxPos = 0;

        while (ss >> word) {
            int pos = word.back() - '0';  
            
            word.pop_back();              
            words[pos - 1] = word;        
            
            maxPos = max(maxPos, pos);
        }

        string result = "";

        for (int i = 0; i < maxPos; i++) {
            if (i > 0)
                result += " ";

            result += words[i];
        }

        return result;
    }
};