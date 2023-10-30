#include <windows.h> // Biblioteca para la función sleep()
#include <process.h> // Biblioteca para la función beginthread()
#include <time.h> // Biblioteca para las funciones del reloj
#include <stdio.h> // Biblioteca para la función getchar()

void task1(void *ThreadNr) // Add missing parameter type
{
	while(1) 
	{ 
		clock_t wakeup = clock() + 58;
		while(clock() < wakeup) {}
		Sleep(50);
	}
}

int main(int argc, char** argv) // Add missing parameter names
{
	int ThreadNr; // Add missing semicolon
	int nucleos = 20;
	for (int i=0; i < nucleos; i++) 
	{
		_beginthread( task1, 0, &ThreadNr ); // Use _beginthread instead of beginthread
	}
	(void) getchar(); 
	return 0;
}


