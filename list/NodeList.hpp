#pragma once


class NodeList
{
public:
    NodeList* getPreviousNode() const;
    NodeList* setPreviousNode(NodeList* previousNode);
    int getValue() const;
    NodeList* getNextNode() const;
    NodeList* setNextNode(NodeList* nextNode);

    NodeList(int value, NodeList* nextNode, NodeList* previousNode);
    ~NodeList() = default;

    NodeList(NodeList &) = delete;
    NodeList& operator=(NodeList &) = delete;
    NodeList(NodeList &&) = delete;
    NodeList& operator=(NodeList &&) = delete;

private:
    int value_;
    NodeList* nextNode_;
    NodeList* previousNode_;

    };

