#include <windows.h>
#include <stdio.h>

int DisplayMessageBox(){
    
    int msgBox = MessageBoxW(
        NULL,
        (LPCWSTR) L"Message Box Created!",
        (LPCWSTR) L"Message Box",
        MB_OK | MB_ICONWARNING
    );
    return msgBox;
}

int main(){

    int msgBox = DisplayMessageBox();
    printf("Message Box Return Value: %ld\n", msgBox);

    if (msgBox == 1){
        DisplayMessageBox();
    }else{
        printf("(-) Window did not open :(. Error: %ld", GetLastError());
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}