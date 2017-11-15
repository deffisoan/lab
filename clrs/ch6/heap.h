#ifndef HEAP_H
#define HEAP_H

#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::swap;

template <typename T>
class Heap {
public:
    Heap() = default;
    Heap(T& value);
    Heap(vector<T> &m);
    void heapify(vector<T>& m, int i);
    void heap_sort(vector<T>& m);
    T  heap_extract_max(vector<T>&m);
private:
    vector<T> nodes;
    int heap_size;

};

template<typename T>
Heap<T>::Heap(T& value) {
    nodes.push_back(value);
    heap_size = 1;
}

template<typename T>
void Heap<T>::heapify(vector<T>& m, int i) {
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;
    if (l <= heap_size && m[l] > m[i]) {
        largest = l;
    } else{
        largest = i;
    }
    if (r <= heap_size && m[r] > m[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(m[i], m[largest]);
        heapify(m, largest);
    }
}

template<typename T>
Heap<T>::Heap(vector<T> &m) {
    heap_size = m.size();
    for (int i = heap_size/2; i != 0; i--) {
        heapify(m, i);
    }
}

template <typename T>
void Heap<T>::heap_sort(vector<T> &m) {
    for(int i = m.size(); i != 1; i--) {
        swap(m[1], m[i]);
        heap_size--;
        heapify(m, 1);
    }
}

template<typename T>
T Heap<T>::heap_extract_max(vector<T> &m) {
    T max = m[0];
    m[0] = m[heap_size];
    heap_size--;
    heapify(m, 0);
    return max;
}
#endif
