class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::unordered_map<char,char> mapS2T;
        std::unordered_map<char,char> mapT2S;
        for(int i=0;i<s.length();i++){
            char chars = s[i];
            char chart = t[i];
            if(mapS2T.find(chars) != mapS2T.end()){
                if(mapS2T[chars] != chart){
                    return false;
                }
            }
            if(mapT2S.find(chart) != mapT2S.end()){
                if(mapT2S[chart] != chars){
                    return false;
                }
            }
            mapS2T[chars] = chart;
            mapT2S[chart] = chars;
        }
        return true;
    }
};