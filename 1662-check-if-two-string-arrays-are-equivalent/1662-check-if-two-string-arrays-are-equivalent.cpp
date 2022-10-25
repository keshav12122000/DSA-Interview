class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="",str2="";
        for(int i=0;i<word1.size();i++){
            // str1+=concat(word1.begin(),word1.end());
            str1=str1+word1[i];
        }
        for(int i=0;i<word2.size();i++){
            // str2+=concat(word2.begin(),word2.end());
            str2=str2+word2[i];
        }
        // cout<<str1<<endl;
        // cout<<str2<<endl;
        if(str1==str2) return true;
        else
            return false;
        
    }
};