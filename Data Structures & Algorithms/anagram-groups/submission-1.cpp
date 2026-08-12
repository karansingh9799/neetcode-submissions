class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ; 
        unordered_map<string , vector<string>> map ; 
       for (string s : strs){
        vector <int> vec(26, 0) ; 
        string key = "" ; 

        for(char c : s){
            vec[c - 'a']++ ; 
        }

        for(int i = 0 ;i < vec.size() ; i++){
         key += to_string(vec[i]) + '#' ; 
       }

       map[key].push_back(s) ;
       }

       for (auto pair : map){ 
            ans.push_back(pair.second ) ; 
       }
       return ans; 
    }
}; 
//aaj sabse pahale ye q dekha toh socha nni hoga kyuki ite dino ka break tha previus khud se kiye huwe q ke logic bhi samaj niii aa rha the but i did not give up kyuki suru toh karna hi tha so maine ise kaafi time diya and aaj subah hi anangram normal ka logic padha hua tha so maine pahale socha ki kyu na ise sort karke fir sidhe map me add kar ke har kisi ke liye match akru par wha recomanded tc and sc kam thi so ye optimized nii laga firr haar maanne wala tha lekin last baar soch aki kyu na jaies maine ek do baar pahale kiya he reverse sochu means ki aaage bhadhta chalu adn unhe add karta rahu apne map me yadi koi bhi anangram wale condition ko satisfiy kar le toh fir i mean ki apapn use apne map ke ans me saath me add kar lenge anangram ki condition pahale hi clr hi thi 26 char wali fir bs wo lagayi and kiya and ho gya thank you bhagwaan ji jay bajrang bali !
