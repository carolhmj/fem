#include "Element.h"
#include <Eigen/Core>
#include <GL/gl.h>

Element::Element(){ }
Element::~Element() { }
Element::Element(Node *n1, Node *n2){
	nodes.push_back(n1);
	nodes.push_back(n2);
}
void Element::draw() {

	glBegin(GL_LINE);
	for (unsigned int i = 0; i < nodes.size(); ++i)
	{
		Vector3d pos = nodes[i]->getPosition();
		glVertex3f(pos[0], pos[1], pos[2]);
	}
	glEnd();
}