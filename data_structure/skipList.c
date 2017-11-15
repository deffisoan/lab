#include <stdio.h>

typedef int KeyType;
typedef int ValType;
typedef struct NodeStructure* Node;
typedef struct NodeStructure {
    KeyType key;
    ValType val;
    Node forward[1]
} NodeStructure;
