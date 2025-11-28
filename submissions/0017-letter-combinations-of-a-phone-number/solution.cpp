class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl",
                                  "mno", "pqrs", "tuv", "wxyz"};

        vector<string> combinations = {""};

        for (char digit : digits) {
            vector<string> next;
            for (auto &combo : combinations) {
                for (char letter : mapping[digit - '0']) {
                    next.push_back(combo + letter);
                }
            }
            combinations = next;
        }

        return combinations;
    }
};

