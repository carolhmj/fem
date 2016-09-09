#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui_impl_glfw.h>

#include "../physics/Node.h"
#include "../physics/Element.h"

using namespace Eigen;

int main(int argc, char const *argv[])
{
	GLFWwindow* window;
	Node *n1, *n2, *n3, *n4;
	Element *e1, *e2, *e3;

	n1 = new Node(Vector3d(.0,.0,.0));
	n2 = new Node(Vector3d(.5,.0,.0));
	n3 = new Node(Vector3d(1.,.0,.0));
	n4 = new Node(Vector3d(.5,.5,.0));


	e1 = new Element(n1,n2);
	e2 = new Element(n2,n3);
	e3 = new Element(n1,n4);

	/* Initialize the library */
	if (!glfwInit())
		return 1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

	if (!window) {
		glfwTerminate();
		return 1;
	}

	/* Init ImGui */
	ImGui_ImplGlfw_Init(window, true);
	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window)) {
		ImGui_ImplGlfw_NewFrame();

		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		glShadeModel(GL_SMOOTH);
		
		n1->draw();
		n2->draw();
		n3->draw();
		n4->draw();

		e1->draw();
		e2->draw();
		e3->draw();

		/* Swap front and back buffers */
		ImGui::Render();
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	ImGui_ImplGlfw_Shutdown();
	glfwTerminate();
	
	return 0;
}