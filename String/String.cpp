#pragma warning(disable:4996)
#include<iostream>
#include<cstring>

using namespace std;

//==================================================
//���ü���ǳ����
//class String
//{
//public:
//	String(const char* pstr = "")
//		:_pstr(new char[strlen(pstr)+1])//Ϊ�ַ������ٿռ�
//	{
//		if (0 == *pstr)  //����ַ���Ϊ��
//		{
//			*_pstr = '\0'; 
//		}
//		else   //�ַ�����Ϊ��
//		{
//			strcpy(_pstr, pstr);
//			cout << "String" << endl;
//		}
//		_count++;
//	}
//	//s2(s1)
//	String(const String& s) //�������캯��
//	{
//		_pstr = s._pstr;
//		s._count++;
//		_count = s._count;
//		cout << "Stirng kaobei" << endl;
//	}
//
//	~String()
//	{
//		if (NULL == _pstr)
//		{
//			return;
//		}
//		else
//		{
//			cout << "~String" << endl;
//			if (--_count == 0)
//			{
//				delete[] _pstr;
//				_pstr = NULL;
//			}
//		}
//	}
//	String& operator=(String& s)  //���������
//	{
//		if (_pstr != s._pstr)
//		{
//			cout << "operator=" << endl;
//			_pstr = s._pstr;
//			s._count = _count;
//			_count++;
//		}
//		return *this;
//	}
//
//private:
//
//	char* _pstr;
//	static int _count;
//};
//
//int String::_count = 0;
//
//void Fun1()
//{
//	String s1("abcd");
//	String s2(s1); 
//	String s3 = s2;  
//	String s4;
//	s4 = s3;
//
//}
//
//int main()
//{
//	Fun1();
//	system("pause");
//	return 0;
//}

//=====================================
//дʱ����
//class String
//{
//public:
//	String(const char* pstr = "")
//		:_pstr(new char[strlen(pstr) + 4+1])//ÿ�ζ࿪��4���ռ��ŵ�ǰ��ַ�м�������
//	{
//		if (NULL == pstr)    //�����ǰ�ַ�Ϊ��
//		{
//			(*(int*)_pstr) = 1; //��ǰ4���ֽ���������
//			_pstr += 4;
//			*_pstr = '\0';
//		}
//		else   //�ַ�����Ϊ��
//		{
//			(*(int*)_pstr) = 1;//��ǰ4���ֽ���������
//			_pstr += 4;//ָ�����ƫ��4���ֽ�
//			strcpy(_pstr, pstr); //��pstr���ݿ�������ǰ����_pstr��
//			cout << "String" << endl;
//		}
//	}
//	//s2(s1)
//	String(const String& s) //�������캯��
//		:_pstr(s._pstr)
//	{
//		++(*(int*)(_pstr - 4)); //��ǰƫ��4���ֽڽ�������1
//		cout << "Stirng kaobei" << endl;
//	}
//
//	~String()
//	{
//		if (NULL == _pstr)
//		{
//			return;
//		}
//		else
//		{
//			cout << "~String" << endl;
//			if (--(*(int*)(_pstr-4)) == 0) //��ǰƫ��4���ֽ��жϼ����Ƿ�Ϊ0����0���Ƿ�
//			{
//				delete (_pstr-4);
//				_pstr = NULL;
//			}
//		}
//	}
//	String& operator=(String& s)  //���������
//	{
//		if (_pstr != s._pstr)
//		{
//			if (--(*(int*)(_pstr - 4)) == 0) //�ͷžɿռ�
//			{
//				delete (_pstr - 4);
//				_pstr = NULL;
//			}
//			_pstr = s._pstr;  //ָ���¿ռ�
//			++(*(int*)(_pstr - 4)); //������1
//		}
//		return *this;
//	}
//
//private:
//
//	char* _pstr;
//};
//
//
//void Fun1()
//{
//	String s1("abcd");
//	String s2(s1);
//	String s3 = s2;
//	String s4;
//	s4 = s3;
//
//}
//
//int main()
//{
//	Fun1();
//	system("pause");
//	return 0;
//}

//==================================
//���
//class String
//{
//public:
//	String(const char* pstr = "")
//		:_pstr(new char[strlen(pstr)+1]) //���ٿռ�
//	{
//		if (0 == *_pstr)      //����ǿ�����
//		{
//			*_pstr = '\0';
//		}
//		else
//		{
//			strcpy(_pstr, pstr); //�����ַ���
//		}
//	}
//	String(String& s)  //�������캯��
//		:_pstr(NULL) //��ֹ������tempָ������ռ䣬���������ý��������ڴ�й©�±���
//	{
//		String temp(s._pstr);//�����������ʱ������������s��ֵ��ΪNULL
//		std::swap(_pstr, s._pstr);
//	}
//
//	String& operator=(const String &s)//��ֵ���������
//	{
//		if (_pstr != s._pstr) //��ֹ�Լ����Լ���ֵ
//		{
//			String temp(s._pstr); //�����������ʱ�����������ֵΪNULL
//			std::swap(_pstr, temp._pstr);
//		}
//		return *this;
//	}
//	~String()
//	{
//		if (NULL == _pstr)
//		{
//			return;
//		}
//		else
//		{
//			delete[]_pstr;
//			_pstr = NULL;
//		}
//	}
//private:
//	char* _pstr;
//};
//
//void Funtest()
//{
//	String s1("abcd");
//	String s2(s1);
//	String s3 = s2;//���ÿ������캯��(��������s2ֱ�ӳ�ʼ��s3)
//	String s4;//s4�����Ѿ�������
//	s4 = s3;//����������ø�ֵ��������ؽ�s3��ֵ����s4
//}
//int main()
//{
//	Funtest();
//	system("pause");
//	return 0;
//}


//===========================================
//ǳ������ָ�������
class String
{
public:
	String(const char* pstr = "")//���캯��
		:count(new int(0))
		, _pstr(new char[strlen(pstr)+1])
	{
		if (NULL == pstr)
		{
			*_pstr = '\0';
		}
		else
		{
			strcpy(_pstr, pstr);
		}
		*count = 1;
	}
	String(const String& s)//��������
		:count(s.count)
	{
		_pstr = (char*)s._pstr;
		count = s.count;
		(*count)++;
	}
	~String()//��������
	{
		if (NULL == _pstr)
		{
			return;
		}
		else
		{
			if (--(*count) == 0)
			{
				delete[]count;
				delete[]_pstr;
				_pstr = NULL;
				count = NULL;
			}
		}
	}
	String& operator=(String& s)//��ֵ���������
	{
		if (_pstr != s._pstr)
		{
			_pstr = s._pstr;
			count = s.count;
			(*count)++;
		}
		return *this;
	}
private:
	int* count;
	char* _pstr;
};


void Funtest()
{
	String s1("abcd");
	String s2(s1);
	String s3 = s2;//���ÿ������캯��(��������s2ֱ�ӳ�ʼ��s3)
	String s4;//s4�����Ѿ�������
	s4 = s3;//����������ø�ֵ��������ؽ�s3��ֵ����s4
}
int main()
{
	Funtest();
	system("pause");
	return 0;
}