#include "List.hpp"

NodeList* List::front()
{
    return front_;
}

NodeList* List::back()
{
    return back_;
}

int List::size()
{
    int size = !empty();
    NodeList* nodeIterator = front_;
    while(back_ != nodeIterator)
    {
        ++size;
        nodeIterator = nodeIterator->getNextNode();
    }
    return size;
}

int List::empty()
{
    return nullptr == front_;
}

void List::insert(int value, NodeList* position) // TO TEST
{
    if(front_ == position)
    {
        push_front(value);
    }
    else if(&back_ == &position)
    {
        push_back(value);
    }
    else
    {
        auto newNode = new NodeList(value, position->getPreviousNode(), position);
        position->setPreviousNode(newNode);
        position->getPreviousNode()->setNextNode(newNode);
    }

}

void List::push_back(int value)
{
    if(empty())
    {
        auto newNode = new NodeList(value, front_, back_);
        front_ = newNode;
        back_ = newNode;
    }
    else
    {
        auto newNode = new NodeList(value, front_, back_);
        back_->setNextNode(newNode);
        back_ = newNode;
    }
}

void List::push_front(int value)
{
    if(empty())
    {
        auto newNode = new NodeList(value, front_, back_);
        front_ = newNode;
        back_ = newNode;
    }
    else
    {
        auto newNode = new NodeList(value, front_, back_);
        front_->setPreviousNode(newNode);
        front_ = newNode;
    }
}

void List::pop_back()
{
    NodeList* tempNode = back_;
    if (back_ == front_)
    {
        front_ = nullptr;
        back_ = front_;
    }
    else
    {
        back_ = back_->getPreviousNode();
    }
    delete tempNode;
}

void List::pop_front()
{
    NodeList* tempNode = front_;
    if (back_ == front_)
    {
        front_ = nullptr;
        back_ = front_;
    }
    else
    {
        front_ = front_->getPreviousNode();
    }
    delete tempNode;
}
