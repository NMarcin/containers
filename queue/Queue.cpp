#include "Queue.hpp"
#include <iostream>
bool Queue::empty() const
{
    return front_ == nullptr;
}

int Queue::size() const
{
    int size = !empty();
    Node* nodeIterator = front_;
    while(back_ != nodeIterator)
    {
        ++size;
        nodeIterator = nodeIterator->getNextNode();
    }
    return size;
}

Node* Queue::front() const
{
    return front_;
}

Node* Queue::back() const
{
    return back_;
}

void Queue::push(int value)
{
    Node* newNode = new Node(value, back_);
    if(front_ == nullptr)
    {
        front_ = newNode;
        back_ = newNode;
    }
    else
    {
        back_->setNextNode(newNode);
        back_ = newNode;
    }
}

void Queue::pop()
{
    Node* tempNode = front_;
    if(front_ == back_)
    {
        front_ = nullptr;
        back_ = front_;
    }
    else
    {
        front_ = front_->getNextNode();
    }
    delete tempNode;
}
