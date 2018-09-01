#include <iostream>;
#include <Windows.h>

int main() {
	/* Zweites Beispiel mit der Win32-API */

#include <windows.h>

	int WINAPI WinMain(HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR     lpCmdLine,
		int       nShowCmd)

	{		MessageBox(NULL,
			TEXT("Hallo Welt, was tun?"),
			TEXT("Mitteilung"),
			MB_RETRYCANCEL | MB_ICONEXCLAMATION);
		
	}
	

	system("Pause");
	return 0;
}