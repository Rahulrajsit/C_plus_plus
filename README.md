# C_plus_plus

# 1
                                                         STL
                                                     ----------
1. Algorithms                                   2. Containers                                       3. Iterators
                                                
                                        generic(Template work for any type of data)
# 1.1 search()                                       # 2.1 vector()
# 1.2 sort()                                         # 2.2 list()<--------------|
# 1.3 binary_search()                                # 2.3 forward_list()<------| SAME FUNCTION
# 1.4 reverse()                                      # 2.4 deque()<-------------|
# 1.5 concat()                                       # 2.5 priority_queue()
# 1.6 copy()                                         # 2.6 stack()
# 1.7 union()                                        # 2.7 set()
# 1.8 intersection()                                 # 2.8 multiset()
# 1.9 merge()                                        # 2.9 map<KEY,VALUE>
# 1.10 heap()                                        # 2.10 multimap<KEY,VALUE>


# 2
#2.1) vector()-> Like Array (properties:- Dynamic incement and decement you can not insert,delete from front)
push_back() , pop_back(), insert(), remove() , size() , empty() , begin() , end()

#2.2) list()-> Like Double Linked List(properties:- Insertion and Deletion from both the size 2 extra node(prev,next))
push_front(), pop_front(), front(), back()
push_back() , pop_back(), insert(), remove() , size() , empty() , begin() , end()

#2.3) forward_list()-> Like Single Linked List (properties:- If you want to access in forward direction)
push_front(), pop_front(), front(), back()
push_back() , pop_back(), insert(), remove() , size() , empty() , begin() , end()

#2.4) deque()-> Like Vector(Array) (properties:- but from both the end you can insert and delete)
push_front(), pop_front(), front(), back()
push_back() , pop_back(), insert(), remove() , size() , empty() , begin() , end()

#2.5) priority_queue()-> Like Heap Data structure(properties:- MAX HEAP Always largest elem will be delete or min just opposite)
push(), pop(), empty(), size()

#2.6) stack()-> Like LIFO(properties:- Last in first out manner)
push(), pop(), empty(), size()

#2.7) set()-> Like HeapSet(properties:- Not contain duplicate data,unique,unordered)
push(), pop(), empty(), size()

#2.8) multiset()-> Like HashSet(properties:- contain duplicate data,No unique,unordered)
push(), pop(), empty(), size()

#2.9) map< KEY,VALUE>-> Like HashMap(properties:- contain unique key)
push(), pop(), empty(), size()


#2.10) multimap< KEY,VALUE>-> Like HashMap(properties:- Not contain unique key but <key,value> pair are unique)
push(), pop(), empty(), size()














