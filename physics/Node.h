#ifndef NODE_H
#define NODE_H

#include <Eigen/Core>

using namespace Eigen;

/* Classe que representa um nó. Possui suas coordenadas no espaço tridimensional,
e a quantidade de graus de liberdade
*/
class Node
{
public:
	Node(Vector3d position);
	~Node();
	void draw();
	Vector3d getPosition();

private:
	Vector3d position;	
};

#endif