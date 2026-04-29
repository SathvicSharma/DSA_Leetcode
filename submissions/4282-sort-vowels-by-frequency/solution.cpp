#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<pair<char, int>> freq = {
            {'a',0},{'e',0},{'i',0},{'o',0},{'u',0}
        };

        vector<int> first(5, -1);
        for(int i = 0; i < s.size(); i++) {
            if(s[i]=='a') {
                freq[0].second++;
                if(first[0]==-1) first[0]=i;
            }
            if(s[i]=='e') {
                freq[1].second++;
                if(first[1]==-1) first[1]=i;
            }
            if(s[i]=='i') {
                freq[2].second++;
                if(first[2]==-1) first[2]=i;
            }
            if(s[i]=='o') {
                freq[3].second++;
                if(first[3]==-1) first[3]=i;
            }
            if(s[i]=='u') {
                freq[4].second++;
                if(first[4]==-1) first[4]=i;
            }
        }
        sort(freq.begin(), freq.end(), [&](pair<char,int> a, pair<char,int> b) {
            if(a.second == b.second) {
                int ia = first[a.first=='a'?0:a.first=='e'?1:a.first=='i'?2:a.first=='o'?3:4];
                int ib = first[b.first=='a'?0:b.first=='e'?1:b.first=='i'?2:b.first=='o'?3:4];
                return ia < ib;
            }
            return a.second > b.second;
        });

        int x = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
                while(x < 5 && freq[x].second == 0)
                    x++;

                s[i] = freq[x].first;
                freq[x].second--;
            }
        }
        return s;
    }
};
