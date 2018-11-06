#pragma once

#include <Node.hpp>

class Stack
{
public:
    bool empty();
    int size();
    Node* top();
    void push();
    void pop(int value);

    Stack() = default;
    ~Stack() = default;

private:
    Node* top_ = nullptr;
};
