//https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/description/?envType=daily-question&envId=2024-10-25

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st(begin(folder), end(folder));
        vector<string> res;
        
        for(string curFolder:folder){
            string tmp=curFolder;
            bool isSub=false;
            while(!curFolder.empty()){
                size_t pos=curFolder.find_last_of('/');
                curFolder = curFolder.substr(0,pos);
                if(st.find(curFolder)!=st.end()){
                    isSub=true;
                    break;
                }
            }
            if(!isSub) res.push_back(tmp);
        }
        return res;

    }
};



// Different approach;
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> res;
        res.push_back(folder[0]);

        for(int i=1; i<folder.size(); i++){
            string curFolder = folder[i];
            string lastFolder = res.back();
            lastFolder += '/';
            if(curFolder.find(lastFolder) != 0){
                res.push_back(curFolder);
            }
        }
        return res;
    }
};