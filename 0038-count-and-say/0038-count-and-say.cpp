// class Solution {
// public:
//     string countAndSay(int n) {
//         unordered_map<int,int> mp;
//         if(n==1){
//             return "1";
//         }
//         string ans=countAndSay(n-1);
//         for(int i=0;i<ans.size();i++){
//             mp[ans[i]]++;
//         }
//         for(int i=0;i<ans.size();i++){
//             cout<<mp[ans[i]]<<endl;
//         }
//         string a,b;
//         for(auto it:mp){
//             // cout<<it.first<<" "<<it.second<<endl;
//             a=it.first;
//             b=it.second;
//         }
//         return a+b;
//     }
// };
class Solution {
public:
    string countAndSay(int n, string prevs = "1") {
    if(n==1) return prevs;
    int i=0, j, len = prevs.size();
    string currs = "";
    while(i<len) {
        j=i;
        while(i<len && prevs[i]==prevs[j]) i++;
        currs += to_string(i-j) + prevs[j];
    }
    return countAndSay(n-1, currs);
}
}; 