class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pcount(26,0);
        vector<int> scount(26,0);
        vector<int> result;
        int slen = s.length();
        int plen = p.length();
        if(slen<plen){
            return {};
        }
        for(int i=0;i<plen;i++){
            pcount[p[i]-'a']++;
            scount[s[i]-'a']++;
        }
        if(pcount==scount){
            result.push_back(0);
        }
        for(int i=plen;i<slen;i++){
            scount[s[i]-'a']++;
            scount[s[i-plen]-'a']--;
            if(pcount==scount){
                result.push_back(i-plen+1);
            }
        }
        return result;
    }
};