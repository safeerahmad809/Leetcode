class Solution {
public:
    int findLucky(vector<int>& arr) {
        int a=-1;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.first==i.second&&i.first>a){
                a=i.first;
            }
        }
        return a;
    }
};
