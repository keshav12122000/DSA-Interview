class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]++;
        }
        if(mp.size()>=26)
            return true;
        // for(auto it:mp){
        //     // cout<<it.second
        //     if(it.second>=1)
        //         return true;
        //     else
        //         return false;
        // }
        return false;
    }
};