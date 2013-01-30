#ifndef RANGETREE_H
#define RANGETREE_H

#include "rangenode.h"
#include <list>
#include <vector>


class RangeTree
{
public:
    RangeTree();
    ~RangeTree();
    void insertNode(RangeNode*);
    void removeNode(RangeNode*);
    int getSize();    

private:
    std::list <RangeNode*> mainList;
    std::vector <RangeNode*> list;
    bool verifyNode(RangeNode*);
    void sortListByX();

};

#endif // RANGETREE_H
