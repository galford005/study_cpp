#include <iostream>

using namespace std;

/*
int main()
{
	//数值类型
	// 整形
	int v = 100;
	// 浮点型
	// 单精度浮点型
	float f = 1.3f;
	// 双精度浮点型
	double d = 1.3;
	//字符类型
	char c = '0';
	wchar_t wc = 'a';
	//布尔值
	bool flag = false;
	//无类型 void


	//修饰符 short long
	//修饰符 signed unsigned
	short s = 65532;
	long l = 21324325346;
	long long ll = 11192032018103501385L;

	//占用空间
	//1个字节		有符号                       -128 - 127							无符号   0 - 255
	//2个字节		有符号                    -32,768 - 32,767						无符号   0 - 65,535
	//4个字节		有符号	          -2,147,483,648 - 2,147,483,647				无符号   0 - 4,294,967,295
	//8个字节		有符号 -9,223,372,036,854,775,808 - 9,223,372,036,854,775,807		无符号	0 - 18,446,744,073,709,551,615
	cout << "type: \t\t\t\t" << "************size**************" << endl;
	cout << "bool: \t\t\t\t" << "所占字节数：" << sizeof(bool) << endl;

	cout << "char: \t\t\t\t" << "所占字节数：" << sizeof(char) << endl;
	cout << "wchar_t: \t\t\t" << "所占字节数：" << sizeof(wchar_t) << endl;

	cout << "int: \t\t\t\t" << "所占字节数：" << sizeof(int);
	cout << "\t最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned int: \t\t\t" << "所占字节数：" << sizeof(unsigned int);
	cout << "\t最大值：" << (numeric_limits<unsigned int>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned int>::min)() << endl;

	cout << "float: \t\t\t\t" << "所占字节数：" << sizeof(float) << endl;
	cout << "double: \t\t\t" << "所占字节数：" << sizeof(double) << endl;

	cout << "short: \t\t\t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "unsigned short: \t\t" << "所占字节数：" << sizeof(unsigned short);
	cout << "\t最大值：" << (numeric_limits<unsigned short>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned short>::min)() << endl;

	cout << "long: \t\t\t\t" << "所占字节数：" << sizeof(long) << endl;

	cout << "short int: \t\t\t" << "所占字节数：" << sizeof(short int) << endl;
	cout << "long int: \t\t\t" << "所占字节数：" << sizeof(long int) << endl;

	cout << "long long: \t\t\t" << "所占字节数：" << sizeof(long long);
	cout << "\t最大值：" << (numeric_limits<long long>::max)();
	cout << "\t最小值：" << (numeric_limits<long long>::min)() << endl;
	cout << "unsigned long long: \t\t" << "所占字节数：" << sizeof(unsigned long long);
	cout << "\t最大值：" << (numeric_limits<unsigned long long>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned long long>::min)() << endl;

	cout << "type: \t\t\t\t" << "************size**************" << endl;

	
	cout << "char转int，\tchar：" << c << "\tint:" << (int)c << endl;
	cout << "char转bool，\tchar：" << c << "\tbool:" << (bool)c << endl;
	cout << "char转bool，\tbool：" << true << "\tbool:" << (char)true << endl;
	cout << "float转int，\tfloat：" << f << "\tint:" << (int)f << endl;
	cout << "double转int，\tdouble：" << d << "\tbool:" << (int)d << endl;
	cout << "int转float，\tint：" << v << "\tfloat:" << (float)v << endl;

	return 0;
}
*/