#pragma once
#include "GL/glew.h"
#include <GLFW/glfw3.h>
class Vao
{
public:

	Vao();
	Vao(unsigned int bindingIndex, unsigned int buffer, unsigned int offset, unsigned int size);
	~Vao();
	void MakeVao(unsigned int attribIndex, unsigned int bindingindex, int size, GLenum type, GLboolean normalize, unsigned int relativeOffset);
	unsigned int GetVaoBuffer();

private:
	unsigned int vaoBuffer = 0;
};

