#include <windows.h>

int main(void){

    MessageBoxW(
        NULL,
        L"My First Message Box using WIN32 API!",
        L"Hello World Message Box!",
        MB_OK | MB_ICONINFORMATION
    );
    return EXIT_SUCCESS;
}