class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, int> freq;
        unordered_map<char , int> f_ind;

        string vowels = "aeiou";
        for(int i =0 ; i<s.size(); i++){
            if(vowels.find(s[i])!= string::npos){
                freq[s[i]]++;
                if(f_ind.find(s[i])==f_ind.end()){
                    f_ind[s[i]]=i;
                }
            }
        }

        vector<char> v;
        for(char c : s){
            if(vowels.find(c)!= string::npos){
                v.push_back(c);
            }
        }

        sort(v.begin(),v.end(), [&](char a , char b){
            if(freq[a] != freq[b]) return freq[a]>freq[b];
            return f_ind[a]<f_ind[b];
        });

        int j =0;
        for(int i =0 ; i<s.size(); i++){
            if(vowels.find(s[i]) != string::npos){
                s[i] = v[j];
                j++;
            }   
        }
        return s;
    }
};