#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "HashItem.h"

template<typename K, typename V, size_t table_size, typename F = KeyHash<K, table_size> >
class HashTable {
public:
    HashTable() = default;

    V getKey(const K& key) {
        unsigned long hash_code = hashFunc(key);
        HashItem<K, V> item = table[hash_code];
        V value = nullptr;
        while(item != NULL) {
            if(item->get_key() == key) {
                value = item->get_value();
                return value;
            }
            item = item->getNext();
        }
        return value;
    }

    void put(const K& key, const V& value) {
        HashItem<K, V> v(key, value);
        unsigned long hash_code = hashFunc(key);
        HashItem<K, V> item = table[hash_code];
        if (item != NULL) {
            v ->setNext(item);
            table[hash_code] = v;
        }
        table[hash_code] = v;
    }

private:
    HashItem<K, V>* table[table_size];
    F hashFunc;
};
#endif