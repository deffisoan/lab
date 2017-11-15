#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include <vector>
#include <iostream>
using std::vector;
using std::array;

template <typename T>
class Sort{
public:
    void insert_sort(vector<T> m);
    void merge_sort(vector<T> m);
    void merge(vector<T> m, int p, int q, int r);
};

template<typename T>
void Sort<T>::insert_sort(vector<T> m){
    int j = 2;
    for (int j = 2; j != m.size(); j++) {
        int key = m[j];
        int  i = j - 1;
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

template<typename T>
void Sort<T>::merge(vector<T> m, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L [n1+1];
    int R [n2+1];
    for (int i = 0; i != n1+1; ++i) {
        L[i] = m[p+i-1];
    }
}

template<typename T>
void Sort<T>::merge_sort(vector<T> m) {

}
#endif