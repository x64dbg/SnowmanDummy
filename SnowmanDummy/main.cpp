#include <windows.h>

extern "C" __declspec(dllexport) void* CreateSnowman(void* parent)
{
    return nullptr;
}

extern "C" __declspec(dllexport) void DecompileAt(void* snowman, void* start, void* end)
{
}

extern "C" __declspec(dllexport) void CloseSnowman(void* snowman)
{
}