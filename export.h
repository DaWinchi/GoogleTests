#pragma once

#ifdef  REVERSE
	#define DLL_API extern "C" __declspec(dllexport)
#else
	#define DLL_API extern "C" __declspec(dllimport)
#endif //  REVERSE


DLL_API void __stdcall reverse(char *str);

