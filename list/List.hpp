#pragma once


#include "NodeList.hpp"

class List
{
public:
    NodeList* front();
    NodeList* back();
    int size();
    int empty();
    void insert(int value, NodeList* position);
    void push_back(int value);
    void push_front(int value);
    NodeList* erase();
    void pop_back();
    void pop_front();

    List() = default;
    ~List() = default;

private:
    NodeList* front_;
    NodeList* back_;

};

