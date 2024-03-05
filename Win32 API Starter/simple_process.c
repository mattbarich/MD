#include <windows.h>
#include <stdio.h>
#include <winbase.h>

int main(void){

STARTUPINFOW SI = { 0 };
PROCESS_INFORMATION PI = { 0 };

    if (!CreateProcessW(
        L"C:\\Windows\\System32\\calc.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &SI,
        &PI
    ))     {
        printf("[-] Process did not start :(. Error: %ld", GetLastError());
        return EXIT_FAILURE;
    }

    printf("[+] Process started! PID: %ld\n", PI.dwProcessId);
    return EXIT_SUCCESS;
}