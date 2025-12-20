# C++ STL - map - Member Functions

> Key points
- Implemented using Red-Black Tree
- Keys are unique

### insert() 
- dictionary_name.insert(make_pair(key,value)) 
- TC : log n

### erase() 
- dictionary_name.erase(iterator) 
- TC: log n

### swap() 
- itr1.swap(itr2) or swap(itr1,itr2)  
- TC:O(1)

### clear()     
- dictionary_name.clear() 
- TC:O(n)

### empty()  
- dictionary_name.empty() 
- return 1 or 0  
- TC:O(1)

### size()  
- dictionary_name.size() 
- return number of unique pair 
- TC:O(1)

### find()    
- Searches key in map
- Time Complexity: O(log n)
- Returns iterator or end()
- if value not found 
- return dictionary_name.end() -> indicates after the last ele position
- TC: O(log n)

### count()
- dictionary_name.count(key)
- return no of occurence in dictionary     
- It wil always return 

### upper_bound()
- return an iterator to next greater element


### lower_bound()
- return itr to elemet if present else itr to next greater element 


### begin()
- Returns an iterator pointing to the **first (smallest key)** element in the map.
- Used to start **forward traversal**.
- **Time Complexity:** O(1)

```cpp
auto it = mp.begin();