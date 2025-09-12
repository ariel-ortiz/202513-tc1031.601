#pragma once

#include <iostream>

template<typename T>
class LinkedList {

public:

    // Complexity: O(1)
    LinkedList()
    {
        _sentinel = new Node;
        _sentinel->next = _sentinel;
        _sentinel->prev = _sentinel;
    }
    
    // Complexity: O(1)
    void insert_front(T value)
    {
        Node* p = new Node;
        p->value = value;
        p->next = _sentinel->next;
        p->prev = _sentinel;
        _sentinel->next->prev = p;
        _sentinel->next = p;
        _size++;
    }
    
    int size() const
    {
        return _size;
    }

private:

    struct Node {
        T value;
        Node* next;
        Node* prev;
    };

    Node* _sentinel = nullptr;
    int _size = 0;
};
