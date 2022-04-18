#include "Zavd21.h"
#include <Windows.h>
#include <fstream>

using namespace SemeniukLr9TxPrZS;
using namespace std;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Zavd2);
    return 0;
}

