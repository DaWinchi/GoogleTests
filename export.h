#pragma once

#ifdef  REVERSE
	#define DLL_API extern "C" __declspec(dllexport)
#else
	#define DLL_API extern "C" __declspec(dllimport)
#endif //  REVERSE


/** Function for string reverse.
* @param str - string for input and output
*/

DLL_API void __stdcall reverse(char *str);

