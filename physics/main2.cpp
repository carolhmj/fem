#include "Node.h"
#include "Element.h"
#include <Eigen/Core>

int main(int argc, char const *argv[])
{
	Node *n1 = new Node(Vector3d(.0,.0,.0));
	Element *e1 = new Element(n1,n1);
	return 0;
}