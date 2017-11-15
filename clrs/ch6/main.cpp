#include "heap.h"

int main() {
    vector<int> m  = {6,7,5,2,1,4,3};
    Heap<int> j(m);
    // j.heap_sort(m);
    for(auto iter = m.cbegin(); iter != m.cend(); iter++) {
        std::cout << *iter << std::endl;
    }
}