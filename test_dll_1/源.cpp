#include<Windows.h>

#pragma comment(lib,"Dll1")


extern "C" void first_dll();

int main()
{
	first_dll();
	return 0;
}