#include "Node.h"
#include <GL/gl.h>
#include <Eigen/Core>

using namespace Eigen;

Node::Node(Vector3d position_){
	position = position_;
}

Node::~Node() {}

void Node::draw(){
	glColor3f(1,1,1);
	glBegin(GL_POINTS);
	glVertex3f(position[0], position[1], position[2]);
	glEnd();
}

Vector3d Node::getPosition(){
	return position;
}