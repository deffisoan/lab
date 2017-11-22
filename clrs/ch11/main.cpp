#include <iostream>
#include "hash.h"

int main() {
    std::cout << "!" << std::endl;
    HashItem<int, int, 255, KeyHash<int, 255> >();
}