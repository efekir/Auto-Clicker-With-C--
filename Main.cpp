#include <iostream>
#include <windows.h>

// Set default state to false
bool stateX =  false;
bool stateZ =  false;


void menu()
{
    std::cout << "Efo AutoClicker 1.0\n\n" << std::endl;
    std::cout << "Afk Hit Toggle (x)\n" << std::endl;
    std::cout << "Afk Right click hold (z)" << std::endl;
}

int main()
{

	menu();
	while (true)
	{
		// Check if 'X' is pressed
		if (GetAsyncKeyState(0x58) & 1)
		{
			stateX = !stateX;
		}
		if (stateX)
		{
            
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(625);
        }
        
        // Check if 'Z' is pressed
		if (GetAsyncKeyState(0x5A) & 1)
		{
			stateZ = !stateZ;
		}
		if (stateZ)
		{
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
		    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
            Sleep(10);
        }
        
	}
}

