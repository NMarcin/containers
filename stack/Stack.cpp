#include <Stack.hpp>
#include <memory>

bool Stack::empty() const
{
    return nullptr == top_;
}

int Stack::size() const
{
    int size = 0;
    Node* nodeIterator = top_;
    while(nullptr != nodeIterator)
    {
        ++size;
        nodeIterator = nodeIterator->getNextNode();
    }
    return size;
}

Node* Stack::top() const
{
    return top_;
}

void Stack::push(int value)
{
    Node* newNode = new Node(value, top_);
    top_ = newNode;
}

void Stack::pop()
{
    Node* temporaryNode = top_;
    top_ = top_->getNextNode();
    delete temporaryNode;
}
