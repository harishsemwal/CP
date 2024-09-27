class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    multiset<pair<int, int>> mt;
    bool book(int start, int end) {
        mt.insert(make_pair(start, 1));
        mt.insert(make_pair(end, -1));
                  
        int booking = 0;
        for(auto x: mt){
            booking += x.second;
            if(booking > 2){
                mt.erase(mt.find(make_pair(start, 1)));
                mt.erase(mt.find(make_pair(end, -1)));
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */