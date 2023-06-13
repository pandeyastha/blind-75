class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int>v(26);
        for(auto x:s)v[x-'a']++;
        for(auto x:t)v[x-'a']--;
        for(auto x:v) if(x) return false;
        return true;
    }
};