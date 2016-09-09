#ifndef ELEMENT_H
#define ELEMENT_H

#include <Eigen/Core>
#include <vector>

#include "Node.h"

typedef std::vector<Node*> NodeVector;

class Element
{
public:
	Element();
	Element(Node *n1, Node *n2);
	~Element();
	void draw();
private:
	NodeVector nodes;
};

#endif