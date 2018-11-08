#pragma once

#include <Node.hpp>

class Queue
{
public:
    bool empty() const;
    int size() const;
    Node* front() const;
    Node* back() const;
    void push(int value);
    void pop();

    Queue() = default;
    ~Queue() = default;


private:
    Node* front_ = nullptr;
    Node* back_ = front_;

};