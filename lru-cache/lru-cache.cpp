class LRUCache {
    int size;
    list<int>q;
    map<int,pair<list<int>::iterator,int>>map;
public:
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(map.find(key)==map.end())
            return -1;
        else
        {
            auto add=map[key].first;
            int value=map[key].second;
            q.erase(map[key].first); 
            q.push_front(key);
            map[key].first=q.begin();
            map[key].second=value;
            return value;
            
        }
        
    }
    
    void put(int key, int value) {
        if(map.find(key)==map.end())
        {
        if(q.size()==size)
        {
            int x=q.back();
            q.pop_back();
            map.erase(x);
        }
        }
        else
        {
            q.erase(map[key].first);
        }
        q.push_front(key);
        map[key].first=q.begin();
        map[key].second=value;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */