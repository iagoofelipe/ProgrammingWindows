/*

Book Reference: Chapter 1, section Your First Windows Program

*/

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow)
{
	int clicked = MessageBox(NULL, L"Hello, Windows with MAM�O UNICODE character!", L"HelloMsg", MB_YESNOCANCEL | MB_ICONQUESTION | MB_DEFBUTTON1);

	switch (clicked)
	{
	case IDYES:
		MessageBox(NULL, L"You clicked YES!", L"Response", MB_OK | MB_ICONINFORMATION);
		break;

	case IDNO:
		MessageBox(NULL, L"You clicked NO!", L"Response", MB_OK | MB_ICONINFORMATION);
		break;

	case IDCANCEL:
		MessageBox(NULL, L"You clicked CANCEL!", L"Response", MB_OK | MB_ICONINFORMATION);
		break;
	}

	return 0;
}