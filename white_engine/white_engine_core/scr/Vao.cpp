#include "../include/Vao.h"

Vao::Vao()
{
	glCreateVertexArrays(1, &vaoBuffer);
}

Vao::Vao(unsigned int bindingIndex, unsigned int buffer, unsigned int offset, unsigned int size)
{
	glCreateVertexArrays(1, &vaoBuffer);
	glVertexArrayVertexBuffer(vaoBuffer, bindingIndex, buffer, offset, size);
}

Vao::~Vao()
{
	glDeleteVertexArrays(1, &vaoBuffer);
}

void Vao::MakeVao(unsigned int attribIndex, unsigned int bindingindex, int size, GLenum type, GLboolean normalize, unsigned int relativeOffset)
{
	glEnableVertexArrayAttrib(vaoBuffer, attribIndex);
	glVertexArrayAttribBinding(vaoBuffer, attribIndex, bindingindex);
	glVertexArrayAttribFormat(vaoBuffer, attribIndex, size, type, normalize, relativeOffset);
}

unsigned int Vao::GetVaoBuffer()
{
	return vaoBuffer;
}
