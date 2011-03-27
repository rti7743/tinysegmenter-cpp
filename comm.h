#ifndef __COMM_INCLUDE__
#define __COMM_INCLUDE__



//STL
#ifdef WIN32
	#pragma warning (disable: 4786) 
	#pragma warning (disable: 4503) 
#endif

	#include <deque>
	#include <vector>
	#include <map>
	#include <string>
	#include <set>
	#include <algorithm>
	#include <functional>
	#include <utility>
	#include <new>
	#include <memory>
	using namespace std;

//WINDOWS
#ifdef WIN32
	#include <windows.h>
//	#include <winsock.h>
#endif

//C
	#include <stdlib.h>
	#include <stdio.h>
	#include <time.h>

//WINCE
#ifdef _WIN32_WCE
	#include <stdarg.h>
	#include <aygshell.h>
	#include <sipapi.h>
#endif

static string format(const char* Format,...)
{
	char buffer[1024];
#ifdef WIN32
	_vsnprintf(buffer,1024,Format,(char*)(&Format+1));
#else
	vsnprintf(buffer,1024,Format,(char*)(&Format+1));
#endif
	buffer[1023] = '\0';

	return buffer;
}


#ifdef WIN32
	inline static string num2str(int num)
	{
		char buf[20];
		return itoa(num , buf , 10);
	}
	inline static string num2str(unsigned int num)
	{
		char buf[20];
		return ultoa(num , buf , 10);
	}
#endif
#ifdef __GNUC__ 
	inline static string num2str(int num)
	{
		return format("%d",num);
	}
	inline static string num2str(unsigned int num)
	{
		return format("%u",num);
	}
#endif


#ifndef NDEBUG
	static void TRACE(const char* Format,...)
	{
		char buffer[1024];
#ifdef WIN32
		_vsnprintf(buffer,1024,Format,(char*)(&Format+1));
#else
		vsnprintf(buffer,1024,Format,(char*)(&Format+1));
#endif
		buffer[1023] = '\0';

		#ifdef WIN32
				OutputDebugString( buffer );
		#else
			puts(buffer);
		#endif
	}
	static void TRACE(const string & inStr)
	{
		TRACE(inStr.c_str());
	}
	#ifdef WIN32
		#define ASSERT(f) \
			if (!(f) ) \
			{ \
				MSG msg;	\
				BOOL bQuit = PeekMessage(&msg, NULL, WM_QUIT, WM_QUIT, PM_REMOVE);	\
				if (bQuit)	PostQuitMessage(msg.wParam);	\
				__asm { int 3 }; \
			} 
	#else
		#define ASSERT(f) \
			if (!(f) ) \
			{ \
				printf("%s:%d %s\r\n",__FILE__,__LINE__ , #f); \
				fflush(stdout); \
				asm ("int $3") ; \
			} 
	#endif
#else
	#define ASSERT(f) 
	#define TRACE	
#endif



//ï÷óòÇ»å^
typedef vector<char>		XLBuffer;
typedef map<string,string>	XLStringMap;
typedef map<string,int>		XLIntMap;
typedef deque<string>		XLStringList;
typedef vector<int>			XLArray;

//2éüå≥ÉeÅ[ÉuÉãÇÃêîâÒêîÇÃéÊìæ
#define TABLE_COUNT_OF(table)	(sizeof((table)) / sizeof((table)[0]))

//TRUE Ç true Ç…
#define Btob(x)	((x) != FALSE)
//true Ç TRUE Ç…
#define btoB(x)	((DWORD) x)

#define ETRACE	(format("throws::%s:%d " , __FILE__ , __LINE__) )



#endif //__COMM_INCLUDE__