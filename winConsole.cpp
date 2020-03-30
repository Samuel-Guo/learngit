// winConsole.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//add from home
#include <iostream>
#include <iomanip>
//typedef void (Base::*CLASS_FUNC)(void);
using namespace std;

//class Base
//{
//private:
//    double d;
//    int i;
//public:
//    void foo1() {};
//    void foo2() {};
//};
//
//void BaseMain()
//{
//    CLASS_FUNC pFunc = &Base::foo1;
//    unsigned* tmp = (unsigned*)&pFunc;
//
//}

int main()
{
    string symbol = "BUSDUSDT";
    double askPrice = 0.9965;
    double bidPrice = 0.996;
    double realQty = 40.05;
    string buyId = "P_1_BUSDUSDT_20200327_090627_0";
    string sellId= "P_2_BUSDUSDT_20200327_090627_0";

    cout << symbol << setw(8) << "buy p:" << fixed << setprecision(4) << askPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " buyId:" << buyId << endl;
    cout << symbol << setw(8) << "sell p:" << fixed << setprecision(4) << bidPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " sellId:" << sellId << endl;

     realQty = 40;

    cout << symbol << setw(8) << "buy p:" << fixed << setprecision(4) << askPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " buyId:" << buyId << endl;
    cout << symbol << setw(8) << "sell p:" << fixed << setprecision(4) << bidPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " sellId:" << sellId << endl;


    string ss = "aaa";
    string s2 =ss.substr(0, -2);
    char ccc[3] = { 0 };
    ccc[0] = 'a';
    ccc[1] = 'b';
    string cccb = ccc;
    string fileName = "sss";
    int s = fileName.find_last_of(".");
    string nameNoExtension = fileName.substr(0, fileName.find_last_of(".") - 1);
   // cccb.replace()

    for (int i = 0; i < 5; i++)
    {
        cout << setw(i) << "ss" << setw(i) << "aa" << endl;

    }

    int n = 141;
    //1) 分别以十六进制、十进制、八进制先后输出 n
    cout << "1)" << hex << n << " " << dec << n << " " << oct << n << endl;
    double x = 1234567.89, y = 12.34567;
    //2)保留5位有效数字
    cout << "2)" << setprecision(3) << x << " " << y << " " << endl;
    //3)保留小数点后面5位
    cout << fixed << setprecision(4) << "3)" <<  x << " " << y << endl;
    //4)科学计数法输出，且保留小数点后面5位
    cout << "4)" << scientific << setprecision(5) << x << " " << y << endl;
    //5)非负数显示正号，输出宽度为12字符，宽度不足则用 * 填补
    cout << "5)" << showpos << fixed << setw(12) << setfill('*') << 12.1 << endl;
    //6)非负数不显示正号，输出宽度为12字符，宽度不足则右边用填充字符填充
    cout << "6)" << noshowpos << setw(12) << left << 12.1 << endl;
    //7)输出宽度为 12 字符，宽度不足则左边用填充字符填充
    cout << "7)" << setw(12) << right << 12.1 << endl;
    //8)宽度不足时，负号和数值分列左右，中间用填充字符填充
    cout << "8)" << setw(12) << internal << -12.1 << endl;
    cout << "9)" << 12.1 << endl;
    return 0;
    //BaseMain();
    //std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
