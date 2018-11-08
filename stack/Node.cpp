#include "Node.hpp"

int Node::getValue() const
{
    return value_;
}

Node* Node::getNextNode() const
{
    return nextNode_;
}

Node* Node::setNextNode(Node* nextNode)
{
    nextNode_ = nextNode;
}

Node::Node(int value, Node* nextNode)
            : value_(value)
            , nextNode_(nextNode)
{
    //NOOP
}