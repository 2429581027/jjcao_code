#include <iostream>
//��C++�У�explicit�ؼ�������������Ĺ��캯���������εĹ��캯�����࣬���ܷ�����Ӧ����ʽ����ת��
//explicit �ؼ���ֻ���������ڲ��Ĺ��캯�������ϡ�
//explicit �ؼ��������ڵ��������Ĺ��캯����

class Number
{
public:
	int type;
	Number(): type(1){};
	explicit Number(short) : type(2){};
	Number(int) : type(3) { };
};
void Show(const Number n) { 
	std::cout << n.type << std::endl;
	//printf("%d",  n.type); 
}
void main()
{
	short s = 42;	
	Show(s);// 3
}