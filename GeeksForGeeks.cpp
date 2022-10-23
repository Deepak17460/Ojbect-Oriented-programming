struct alphanumeric {
    // Properties of an Object
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        map<string,int>mp;
        for(string str:A) mp[str]++;
        vector<alphanumeric>res;
        // creation of An object
        alphanumeric ans;
        for(auto it:mp){
        ans.name=it.first;
        ans.count=it.second;
        res.push_back(ans);
        }
        return res;
    }
};
