//
// Created by jinguojing on 2020/8/28.
//

#ifndef LEETCODE_LEETCODE_705_HASHSET_DESIGN_H
#define LEETCODE_LEETCODE_705_HASHSET_DESIGN_H

#endif //LEETCODE_LEETCODE_705_HASHSET_DESIGN_H
class MyHashSet {
private:
    bool *hashset = new bool[100000];
public:
    /** Initialize your data structure here. */
    MyHashSet() ;
    void add(int key) ;
    void remove(int key);
    bool contains(int key);
};
