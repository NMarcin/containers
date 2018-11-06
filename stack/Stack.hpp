#pragma once

#include <Node.hpp>

class Stack
{
public:
    bool empty() const;
    int size() const;
    Node* top() const;
    void push(int value);
    void pop();

    Stack() = default;
    ~Stack() = default;

private:
    Node* top_ = nullptr;
};
