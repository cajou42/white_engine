#include "../include/Buffers.h"


void Buffers::storeData(void* data, size_t size)
{
	glNamedBufferStorage(buffer, size, data, 0);
}

unsigned int Buffers::GetBuffer()
{
	return buffer;
}

Buffers::Buffers()
{
	glCreateBuffers(1, &buffer);
}

Buffers::~Buffers()
{
	glDeleteBuffers(1, &buffer);
}
