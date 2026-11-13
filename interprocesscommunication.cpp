#include <iostream>
#include <string>

int main()
{
    HANDLE hMAP = CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, 256, "MySimpleMemory");

    char* pBuf = (char*)MapViewOfFile(hMAP, FILE_MAP_ALL_ACCESS, 0, 0, 0);

    std::string msg = "Hello from Writer!";
    memcpy(pBuf, msg.c_str(), msg.length() + 1);

    std::cout << "Message written! Leave this window open.\n";

    std::cin.get();

    UnmapViewOfFile(pBuf);
    CloseHandle(hMAP);

    return 0;
}