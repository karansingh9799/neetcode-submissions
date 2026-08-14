class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> twod(nums.size()+1) ; // create this so by referense of our freq we can store elements like yadi kisi element ki freq 2 he so yha 2 indexpar wo element push kar lenge .

        unordered_map<int, int> map ; //create map for storing val and freq of element .

        for(int x : nums){
            map[x]++;
            } //loop for storing val and indx in the map ; 


        vector<int> vec ; 
        for(auto &it : map){
            twod[it.second].push_back(it.first) ;
            }
        int z = 0; 
        for(int i = nums.size() ; i >= 1 && vec.size() < k ; i--){
            for(int y : twod[i]){
                 if(z != k){
                    vec.push_back(y) ; 
                }
                else {break;}
                z++ ; 
            }
        }
        return vec ; 
    }
};
// dekh sabse pahale toh ise aise solve karna he ki imean ki apan   ne jaise i mean ki anangram ki prob solve ki thi like ki apan ko alag alag bucket banane he in the sense ki jaise wha a se z tk fix itne hi the so tc constant thi aise hi yha par bhi  imean ki yha par bhi alag alag bucket bnane he jitne kul element he nums me fir i mean  2d vec banana he yadi direct kahu toh fir i mean ki usme khali buckte honge jitne element he total jaise ki jiski freq apan ne already alag map me nikal rakhi he uski freq wale  index par jo 2d arr me us element ke freq ke referense se apan element daalenge and fir ulta loop chalakar wha se k size tk element utha lenge .
