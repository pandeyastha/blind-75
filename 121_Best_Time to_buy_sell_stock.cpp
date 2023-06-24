class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int leastEncountered=INT_MAX;
       int currDiff=0;
       int maxProfit=0;
       for(auto x:prices){
           leastEncountered=min(leastEncountered,x);
           currDiff=x-leastEncountered;
           maxProfit=max(maxProfit,currDiff);
       }
       return maxProfit;
    }
};
