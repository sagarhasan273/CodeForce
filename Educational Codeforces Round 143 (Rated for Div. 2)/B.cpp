#include<bits/stdc++.h>

using namespace std;


//  ----------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Vector in C++ STL   ]-------------------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        size()                     vec.size()                                            - return Size of the Vector
        resize(n)                  vec.resize()                                          - Resize the Vector
        empty()                    vec.empty()                                           - Return True if empty otherwise False

        front()                    vec.front()                                           – Return the first element in the vector
        back()                     vec.back()                                            – Return the last element in the vector

        push_back()                vec.push_back()                                       – It push the elements into a vector from the back
        pop_back()                 vec.pop_back()                                        – It is used to pop or remove elements from a vector from the back.
        insert()                   vec.insert(vec.begin() + index, value);               – It inserts new elements before the element at the specified position

        erase()                    vec.erase(position);                                  – It is used to remove elements from a container from the specified position or range.
        clear()                    vec.clear();                                          – It is used to remove all the elements of the vector container

        swap()                     vec1.swap(vec2);                                      – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Deque in C++ STL   ]-------------------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        size()                     dque.size()                                            - return Size of the deque
        empty()                    dque.empty()                                           - Return True if empty otherwise False

        front()                    dque.front()                                           – Return the first element in the deque
        back()                     dque.back()                                            – Return the last element in the deque

        push_back()                dque.push_back()                                       – It push the elements into a deque from the back
        pop_back()                 dque.pop_back()                                        – It is used to pop or remove elements from a deque from the back.
        insert()                   dque.insert(dque.begin() + index, value);              – It inserts new elements before the element at the specified position

        erase()                    dque.erase(dque.begin() + index);                      – It is used to remove elements from a container from the specified position or range.
        clear()                    dque.clear();                                          – It is used to remove all the elements of the deque container
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Stack in C++ STL   ]-------------------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        empty()                     stack.empty()                                           – Returns whether the stack is empty – Time Complexity : O(1) 
        size()                      stack.size()                                            – Returns the size of the stack – Time Complexity : O(1) 
        top()                       stack.top()                                             – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
        push()                      stack.push(value)                                       – Adds the element at the top of the stack – Time Complexity : O(1) 
        pop()                       stack.pop()                                             – Deletes the most recent entered element of the stack – Time Complexity : O(1) 
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Qeque in C++ STL   ]-------------------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        empty()	                   que.empty()                                            - It returns true if the queue is empty otherwise false.
        size()	                   que.size()                                             - Returns the size of the queue.
        
        back()	                   que.back()                                             - Returns a reference to the last element of the queue.
        front()	                   que.front()                                            - Returns a reference to the first element of the queue.
        push()   	               que.push()                                             - Adds the element at the end of the queue.
        pop() 	                   que.pop()                                              - Deletes the first element of the queue.
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Priority-Qeque in C++ STL   ]----------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        Max-Heap Syntex            priority_queue<int> pq;
        Min-Heap Syntex            priority_queue<int, vector<int>, greater<int>> gq;

        empty()	                   que.empty()                                            - It returns true if the priority-queue is empty otherwise false.
        size()	                   que.size()                                             - Returns the size of the priority-queue.

        top()	                   que.top()                                              - Returns a reference to the first element of the priority-queue.
        push()   	               que.push()                                             - Adds the element at the end of the priority-queue.
        pop() 	                   que.pop()                                              - Deletes the first element of the priority-queue.

        swap()	                   que.swap()                                             - Used to swap the contents of two queues provided the queues must be of the same type & size.
        emplace()	               que.emplace(value)                                     - Insert a new element into the priority-queue container, the new element is added to the end of the priority-queue.
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Set in C++ STL   ]---------------------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        Increasing Ordered Set Syntex                      set<data_type> set_name;
        Decreasing Ordered Set Syntex                      set<data_type, greater<data_type>> set_name;

        empty()                     set.empty()                                             – Returns whether the set is empty – Time Complexity : O(1) 
        size()                      set.size()                                              – Returns the size of the set – Time Complexity : O(1) 
        count()                     set.count(value)                                        - Returns 1 or 0 based on whether the element is present in the set or not.
        find()                      set.find(value)                                         - Returns an iterator if exists else end iterator

        insert()                    set.insert(value);                                      – It inserts new elements

        erase()                     set.erase(position/value);                              – It is used to remove elements from a container
        clear()                     set.clear();                                            – It is used to remove all the elements
        swap()                      set1.swap(set2);                                        – It is used to swap the contents of one deque with another deque of same type and size.
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Unordered_Set in C++ STL   ]-----------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        Unordered Set Syntex        uset<data_type> set_name;

        empty()                     uset.empty()                                            – Check if an unordered_set container is empty or not.
        size()                      uset.size()                                             – Return the number of elements in the unordered_set container.
        count()                     uset.size()                                             – Count occurrences of a particular element in an unordered_set container.
        find()                      uset.find()                                             – Search for an element in the container.

        clear()                     uset.clear()                                            – Removes all of the elements from an unordered_set and empties it.
        erase()                     uset.erase(range/single element)                        – Remove either a single element or a range of elements ranging from start(inclusive) to end(exclusive).

        insert()                    uset.insert()                                           – Insert a new {element} in the unordered_set container.
*/


//  ---------------------------------------------------------------------------------------------------------
//  --------------------------------------[   Map in C++ STL   ]---------------------------------------------
//  ---------------------------------------------------------------------------------------------------------

/*
        size()                      mp.size()                                                – Returns the number of elements in the map.
        empty()                     mp.empty()                                               – Returns whether the map is empty.
        insert(keyvalue, mapvalue)  mp.insert({keyvalue, mapvalue})                          – Adds a new element to the map.
        erase(iterator position)    mp.erase(position)                                       – Removes the element at the position pointed by the iterator.
        erase(const g)              mp.erease(key)                                           – Removes the key-value ‘g’ from the map.
        clear()                     mp.clear()                                               – Removes all the elements from the map.
*/


//----------------------------------------------------------------------------------------------------------------------
                                      
//  *************                                                           ****
//    ***************                                                        **********
//      **************************************************************************************
//        ******************************Start Code Here*******************************************
//      **************************************************************************************
//    ***************                                                        **********
//  *************                                                           ****

//----------------------------------------------------------------------------------------------------------------------
#define ll                      long long

#define f(i, a, n)               for (int i = a; i < n; i++)

#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i, 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)

#define all(a)                   a.begin(), a.end()
#define rall(a)                  a.rbegin(), a.rend()
#define print(a)                 {cout << a << endl; return;}

vector<ll> vectorInputLong(int n)    {vector<ll> vec; for(int i = 0; i < n; i++) {ll val; cin >> val; vec.push_back(val);} return vec;}
vector<int> vectorInputInt(int n)    {vector<int> vec; for(int i = 0; i < n; i++) {int val; cin >> val; vec.push_back(val);} return vec;}
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';} cout << endl;


void testcase(){
    int n, k;
    cin >> n >> k;
    int L = 0, R = 55;
    while (n--) {
      int l, r;
      cin >> l >> r;
      if (l <= k && k <= r)
        L = max(L, l), R = min(R, r);
    }
    cout << (L == R ? "YES\n" : "NO\n");
}

int main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}