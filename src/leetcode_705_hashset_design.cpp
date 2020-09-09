//Hashset design
// Created by jinguojing on 2020/8/28.
//
#include<leetcode_705_hashset_design.h>
#include<iostream>

MyHashSet::MyHashSet() {
}

void MyHashSet::add(int key) {
    hashset[key] = true;
}

void MyHashSet::remove(int key) {
    hashset[key] = false;
}

/** Returns true if this set contains the specified element */
bool MyHashSet::contains(int key) {
    return hashset[key] == true;
}


