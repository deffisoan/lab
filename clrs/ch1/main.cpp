#include "insert_sort.h"

int main() {
    std::vector<int> m = {1, 4, 3};

    // m.insert(m.end(), 1);
    // m.insert(m.end(), 4);
    // m.insert(m.end(), 3);
    Sort<int> sort;
    sort.insert_sort(m);
}