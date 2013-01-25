#include "rangenode.h"

RangeNode::RangeNode(std::string nome, int x, int y)
{
    this->nome = nome;
    this->x = x;
    this->y = y;

}

int RangeNode::getX(){
    return this->x;
}


int RangeNode::getY(){
    return this->y;
}


std::string RangeNode::getNome(){
    return this->nome;
}

void RangeNode::setX(int x){
    this->x = x;
}


void RangeNode::setY(int y){
    this->y = y;
}


void RangeNode::setNome(std::string nome){
    this->nome = nome;
}
