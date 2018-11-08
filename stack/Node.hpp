#pragma once


class Node
{
public:
    int getValue() const;
    Node* getNextNode() const;
    Node* setNextNode(Node* nextNode);

    Node(int value, Node* nextNode);
    ~Node() = default;

    Node(Node &) = delete;
    Node& operator=(Node &) = delete;
    Node(Node &&) = delete;
    Node& operator=(Node &&) = delete;

private:
     int value_;
     Node* nextNode_;


};
