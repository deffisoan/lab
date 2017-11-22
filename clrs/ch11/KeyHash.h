#ifndef KEY_HASH_H
#define KEY_HASH_H

template<typename K, size_t table_size>
class KeyHash{
public:
    unsigned long operator()(const K &key) const {
        return reinterpret_cast<unsigned long>(key) % table_size;
    } 
};

#endif