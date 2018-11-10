#include "NodeList.hpp"


int NodeList::getValue() const
{
    return value_;
}

NodeList* NodeList::getNextNode() const
{
    return nextNode_;
}

NodeList* NodeList::setNextNode(NodeList* nextNode)
{
    nextNode_ = nextNode;
}

NodeList* NodeList::getPreviousNode() const
{
    return previousNode_;
}

NodeList* NodeList::setPreviousNode(NodeList* nextNode)
{
    previousNode_ = nextNode;
}

NodeList::NodeList(int value, NodeList* nextNode, NodeList* previousNode)
        : value_(value)
        , nextNode_(nextNode)
        , previousNode_(previousNode)
{
    //NOOP
}