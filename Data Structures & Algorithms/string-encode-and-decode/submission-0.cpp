class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(const string&s : strs){
            encoded_string += to_string(s.size());
            encoded_string += '#';
            encoded_string += s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int length = stoi(s.substr(i,j-i));
            j++;
            decoded_strs.push_back(s.substr(j,length));
            i=j+length;
        }
        return decoded_strs;
    }
};
