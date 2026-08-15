class Solution {
public:

    string encode(vector<string>& strs) {
        string str ; 
        for(string s : strs){
            str += s + "4#" ; 
        }
        return str ; 
    }

    vector<string> decode(string str) {
        string x ; 
        vector<string> y ; 
        int j = 0 ; 
        for(int i = 0 ; i < str.size() ; i++){
         if(str[i] == '4' and i < str.size() -1 and str[i+1] == '#'){            
                y.push_back(x); 
                x = ""; 
                i++ ;
            }

            else {
              x += str[i]; 
            }
        }   
        return y ; 
    }
};
