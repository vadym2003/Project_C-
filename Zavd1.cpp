#include "Zavd1.h"
#include <Windows.h>

using namespace SemeniukLr9TxPrZS;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Zavd1);
    return 0;
}
