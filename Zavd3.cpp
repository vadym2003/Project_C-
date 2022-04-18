#include "Zavd3.h"
#include <Windows.h>

using namespace SemeniukLr9TxPrZS;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Zavd3);
    return 0;
}
