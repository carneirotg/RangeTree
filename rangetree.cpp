#include "rangetree.h"

#include <stdio.h>
#include <iostream>
#include <vector>

RangeTree::RangeTree(){}

RangeTree::~RangeTree(){}

void RangeTree::insertNode(RangeNode* rn ){
    //Verificar se o nome ja existe?
    if (verifyNode(rn)){        
        mainList.push_front(rn);
        list.push_back(rn);
    }
    sortListByX();
}

void RangeTree::removeNode(RangeNode* rn){
    if (rn != NULL){

    }
}

int RangeTree::getSize(){
    return mainList.size();
}


bool compareByX(RangeNode* rn1, RangeNode* rn2){
    if (rn1->getX() < rn2->getX()){
        return true;
    } else {
        return false;
    }
}

void RangeTree::sortListByX(){


    std::list<RangeNode*>::iterator it;    
    std::cout << "########SORT###########" << std::endl;
    mainList.sort(compareByX);

    for (it=mainList.begin(); it!=mainList.end(); ++it){
        RangeNode* rn = *it;
//        std::cout << "Nome -> " << rn->getNome() << std::endl;        
        std::cout << " " << rn->getX() << "----";
//        std::cout << "Y ->    " << rn->getY() << std::endl;
    }
    std::cout << '\n';
    std::cout << "########SORT FIM###########" << std::endl;
}

bool RangeTree::verifyNode(RangeNode* rn){
    if (!rn->getNome().empty() && rn->getX() >= 0 && rn->getY() >= 0){
        return true;
    } else {
        return false;
    }
}


