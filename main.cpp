#include "TinySegmenter.h"

int main()
{
	//テスト
	{
		TinySegmenter::test();
//		XLRegExp::test();	//正規表現は不要になりました
	}

	//デモ
	{

		TinySegmenter ts;
		XLStringList slist;
		ts.segment("科学の力ではどうしようもできない、魑魅魍魎などの奇怪な輩に立ち向かう胡散臭い男。", &slist);

		for(XLStringList::iterator it = slist.begin() ; it != slist.end() ; ++it)
		{
			printf("%s\r\n" , it->c_str() );
		}
	}
	return 0;
}