class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,std::vector<std::string>> anagramMap;
        for(const std::string& word : strs){
            std::string sortedword = word;
            sort(sortedword.begin(),sortedword.end());
            anagramMap[sortedword].push_back(word);
        }
        std::vector<std::vector<std::string>> result;
        for(auto& pair : anagramMap){
            result.push_back(pair.second);
        }
        return result;
    }
};