#include "TinySegmenter.h"

int main()
{
	//�e�X�g
	{
		TinySegmenter::test();
//		XLRegExp::test();	//���K�\���͕s�v�ɂȂ�܂���
	}

	//�f��
	{

		TinySegmenter ts;
		XLStringList slist;
		ts.segment("�Ȋw�̗͂ł͂ǂ����悤���ł��Ȃ��A鳖��鲂Ȃǂ̊���Ȕy�ɗ����������ӎU�L���j�B", &slist);

		for(XLStringList::iterator it = slist.begin() ; it != slist.end() ; ++it)
		{
			printf("%s\r\n" , it->c_str() );
		}
	}
	return 0;
}