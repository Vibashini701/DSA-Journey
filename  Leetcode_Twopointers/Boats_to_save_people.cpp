class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int lightest = 0;
        int heaviest = people.size() - 1;
        int boats = 0;
        sort(people.begin(),people.end());
        while(lightest <= heaviest){
            if(people[lightest] + people[heaviest] <= limit){
                lightest++;
                heaviest--;
            }
            else{
                heaviest--;
            }
            boats++;
        }
        return boats;
    }
};