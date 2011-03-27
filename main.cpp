#include "TinySegmenter.h"

int main()
{
	//ƒeƒXƒg
	{
		TinySegmenter::test();
//		XLRegExp::test();	//³‹K•\Œ»‚Í•s—v‚É‚È‚è‚Ü‚µ‚½
	}

	//ƒfƒ‚
	{

		TinySegmenter ts;
		XLStringList slist;
		ts.segment("‰ÈŠw‚Ì—Í‚Å‚Í‚Ç‚¤‚µ‚æ‚¤‚à‚Å‚«‚È‚¢Aé³–£é±é²‚È‚Ç‚ÌŠï‰ö‚È”y‚É—§‚¿Œü‚©‚¤ŒÓUL‚¢’jB", &slist);

		for(XLStringList::iterator it = slist.begin() ; it != slist.end() ; ++it)
		{
			printf("%s\r\n" , it->c_str() );
		}
	}
	return 0;
}