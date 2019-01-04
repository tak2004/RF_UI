#ifndef RF_SYSTEM_DRAWING_WINDOWSOPENGLTYPES_HPP
#define RF_SYSTEM_DRAWING_WINDOWSOPENGLTYPES_HPP
#if _MSC_VER > 1000
#pragma once
#endif

#ifndef _WINDOWS_
#include <windows.h>
#endif // !_WINDOWS_

struct _GPU_DEVICE
{
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
};
typedef struct _GPU_DEVICE GPU_DEVICE;
typedef struct _GPU_DEVICE* PGPU_DEVICE;

DECLARE_HANDLE(HPBUFFERARB);
DECLARE_HANDLE(HPBUFFEREXT);
DECLARE_HANDLE(HVIDEOOUTPUTDEVICENV);
DECLARE_HANDLE(HPVIDEODEV);
DECLARE_HANDLE(HPGPUNV);
DECLARE_HANDLE(HGPUNV);
DECLARE_HANDLE(HVIDEOINPUTDEVICENV);

#endif // RF_SYSTEM_DRAWING_WINDOWSOPENGLTYPES_HPP