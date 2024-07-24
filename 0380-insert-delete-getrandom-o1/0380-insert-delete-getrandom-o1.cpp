class RandomizedSet {
public:
    vector<int> v;
    int ind = 0;
    unordered_map<int, int> mp;
    RandomizedSet() {
        ind = 0;
        v.clear();
        mp.clear();
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()){
            return false;
        }
        mp[val] = ind++;
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()){
            return false;
        }

        // Get Index
        int i = mp[val];

        //swap
        swap(v[i], v[ind-1]);
        mp[v[i]] = i;

        //remove
        v.pop_back();
        ind--;

        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int i = rand()%ind;
        return v[i];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */