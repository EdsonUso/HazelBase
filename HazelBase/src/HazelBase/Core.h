#pragma once


#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZELBASE_API __declspec(dllexport)
	#else
		#define HAZELBASE_API __declspec(dllimport)
	#endif
#else
	#error HazelBase only supports Windows!
#endif