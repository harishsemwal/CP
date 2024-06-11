class Solution {
public:
    // bool isPrasent(int val, vector<int> arr2){
    //     int n = arr2.size();
    //     for(int i = 0; i < n; i++){
    //         if(val != arr2[i]){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // sort(arr1.begin(), arr1.end());
        // vector<int> ans = arr2;
        // sort(arr2.begin(), arr2.end());
        // int n = arr1.size();
        // for(int i = 0; i < n; i++){
        //     if(isPrasent(arr1[i], arr2)){
        //         ans.push_back(arr1[i]);
        //     }
        // }
        // return ans;
        map<int, int> mp;
    for(int i : arr2) mp[i]++;
    
    vector<int> v, ans;
    for(int i = 0; i < arr2.size(); i++)
        for(int j = 0; j < arr1.size(); j++)
            if(arr2[i] == arr1[j]) ans.push_back(arr1[j]);
    
    for(int i : arr1)
        if(!mp[i]) v.push_back(i);
    sort(begin(v), end(v));
    for(int i : v) ans.push_back(i);
    
    return ans;

    }
};