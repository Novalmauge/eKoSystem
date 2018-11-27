#pragma once

#ifdef EKO_PLATFORM_WINDOWS
	#ifdef EKO_BUILD_DLL
		#define EKO_API __declspec(dllexport)
	#else
		#define EKO_API __declspec(dllimport)
	#endif
#else
	#error eKoSystem only supports Windows!
#endif