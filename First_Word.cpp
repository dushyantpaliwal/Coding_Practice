string firstWord(int n, vector<string> &dictionary) {
        // code here
        string ans = dictionary[0];
        unordered_map<string, bool>mp;
        mp[dictionary[0]] = 1;
        for(int i = 1; i < n; i++){
            if(mp.find(dictionary[i]) != mp.end())return "Invalid";
            mp[dictionary[i]] =1;
            ans = min(ans, dictionary[i]);
        }
        return ans;
        
            }
