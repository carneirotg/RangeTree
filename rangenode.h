#ifndef RANGENODE_H
#define RANGENODE_H

#include <string>

class RangeNode
{
public:
    ~RangeNode();
    RangeNode(std::string nome, int x , int y);
    void setNome(std::string);
    void setX(int);
    void setY(int);
    std::string getNome();
    int getX();
    int getY();

private:
    std::string nome;
    int x;
    int y;

};

#endif // RANGENODE_H
