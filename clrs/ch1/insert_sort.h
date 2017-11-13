#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include <vector>
#include <iostream>

template <typename T>
class Sort{
public:
    void insert_sort(std::vector<T> m);
};

template<typename T>
void Sort<T>::insert_sort(std::vector<T> m){
    int j = 2;
    for (int j = 2; j != m.size(); j++) {
        int key = m[j];
        int  i = j -1;
        while(i > 0 && m[i] > key) {
            m[i+1] = m[i];
            i--;
        }
        m[i+1] = key;
    }
    for(auto iter = m.cbegin(); iter != m.cend(); iter++) {
        std::cout << *iter << std::endl;
    }
}
#endif