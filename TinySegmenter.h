// TinySegmenter.h: TinySegmenter クラスのインターフェイス
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TINYSEGMENTER_H__45EC06DE_2BE6_414C_B31F_0DF01E715514__INCLUDED_)
#define AFX_TINYSEGMENTER_H__45EC06DE_2BE6_414C_B31F_0DF01E715514__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "comm.h"

class TinySegmenter
{

	int		BIAS__;
	XLIntMap UP1__;
	XLIntMap UP2__;
	XLIntMap UP3__;
	XLIntMap BP1__;
	XLIntMap BP2__;
	XLIntMap UW1__;
	XLIntMap UW2__;
	XLIntMap UW3__;
	XLIntMap UW4__;
	XLIntMap UW5__;
	XLIntMap UW6__;
	XLIntMap BW1__;
	XLIntMap BW2__;
	XLIntMap BW3__;
	XLIntMap TW1__;
	XLIntMap TW2__;
	XLIntMap TW3__;
	XLIntMap TW4__;
	XLIntMap UC1__;
	XLIntMap UC2__;
	XLIntMap UC3__;
	XLIntMap UC4__;
	XLIntMap UC5__;
	XLIntMap UC6__;
	XLIntMap BC1__;
	XLIntMap BC2__;
	XLIntMap BC3__;
	XLIntMap TC1__;
	XLIntMap TC2__;
	XLIntMap TC3__;
	XLIntMap TC4__;
	XLIntMap TC5__;
	XLIntMap UQ1__;
	XLIntMap UQ2__;
	XLIntMap UQ3__;
	XLIntMap BQ1__;
	XLIntMap BQ2__;
	XLIntMap BQ3__;
	XLIntMap BQ4__;
	XLIntMap TQ1__;
	XLIntMap TQ2__;
	XLIntMap TQ3__;
	XLIntMap TQ4__;

	//文字を unsigned long にする.
	unsigned long stringToULong(const char * p) const;
	std::string ctype_(const std::string & str) const;

public:
	TinySegmenter();
	virtual ~TinySegmenter();

	bool segment(const std::string & input , XLStringList * result) ;

	static void test();
};

#endif // !defined(AFX_TINYSEGMENTER_H__45EC06DE_2BE6_414C_B31F_0DF01E715514__INCLUDED_)
