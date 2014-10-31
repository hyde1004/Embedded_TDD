extern "C"
{
void RuntimeError(const char * message, int parameter,
	const char * file, int line);

#define RUNTIME_ERROR(description, parameter)\
	RuntimeError(description, parameter, __FUNCTION__, __LINE__)
}