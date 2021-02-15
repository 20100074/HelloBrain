
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTStr lpCmdLine, int nCmdShow){
	return MessageBox(NULL, _T("Hello, world!"), _T("MessageBox test"), MB_OK | MB_ICONINFORMATION);
}
