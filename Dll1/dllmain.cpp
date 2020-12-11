// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

//申明导出函数->把first_dll函数导出去
extern "C" __declspec(dllexport) void first_dll();


//用作导出函数 相当于一个接口
void first_dll()
{
    MessageBox(NULL, TEXT("导出函数调用成功"), TEXT("调用dll函数的导出函数"), MB_OK);
}


//核心dll文件 dll文件 动态链接库的入口函数
//main函数
BOOL APIENTRY DllMain( HMODULE hModule,
                        DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

