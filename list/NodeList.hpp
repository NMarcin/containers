#pragma once


class NodeList : public Node
{
public:
    NodeList* getPreviousNode() const;
    NodeList* setPreviousNode(NodeList* previousNode);

    NodeList(int value, NodeList* nextNode, NodeList* previousNode);
    ~NodeList() = default;

    NodeList(NodeList &) = delete;
    NodeList& operator=(NodeList &) = delete;
    NodeList(NodeList &&) = delete;
    NodeList& operator=(NodeList &&) = delete;

private:
    int value_;
    NodeList* nextNode_;
};

