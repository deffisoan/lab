#ifndef HASH_ITEM_H
#define HASH_ITEM_H

#include <stddef.h>
#include "KeyHash.h"

template<typename K, typename V>
class HashItem {
public:
    HashItem(K key, V value) : key_(key), value_(value) {};

    K get_key(){
        return key_;
    }

    V get_value() {
        return value_;
    }

    void set_key(K key) {
        key_ = key;
    }

    void set_value(V value) {
        value_ = value;
    }

    HashItem* getNext() {
        return next_;
    }

    void setNext(HashItem* next) {
        next_ = next;
    }
private:
    K key_;
    V value_;
    HashItem* next_;
};
#endif
