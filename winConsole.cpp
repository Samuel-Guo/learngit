// winConsole.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS

//git sth
//add from home

//re remodefy 1
//unfinish
#include <sstream>
//writing...
//home sth
#include <iostream>
#include <string>
//sth done
//new
#include <iomanip>
#include <vector>
#include <sstream>      // std::ostringstream
#include <string>  
//typedef void (Base::*CLASS_FUNC)(void);
//using namespace std;
using std::cout;
using std::vector;
using std::cin;
using std::string;
using std::fixed;
using std::setw;
using std::endl;
using std::setprecision;
using std::ostringstream;
using std::setfill;
using std::setiosflags;
using std::hex;
using std::scientific;
using std::showpos;
using std::noshowpos;
using std::left;
using std::right;
using std::internal;
using std::oct;
using std::ios;
using std::to_string;
using std::dec;

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
string itos(int val)
{
    char str[100];
    sprintf(str, "%d", val);
    return string(str);
}


bool merge(vector< string > lastBidVec, vector< string >& newBidVec)
{
    if (lastBidVec.empty())
    {
        return false;
    }
    if (lastBidVec[0] == newBidVec[0] && lastBidVec[1] == newBidVec[1] && lastBidVec[5] == newBidVec[5])
    {
        // newBidVec[2] = itos(atoi(lastBidVec[2].c_str())+1);
        newBidVec[2] = lastBidVec[2];
        newBidVec[3] = lastBidVec[3];

        return true;
    }
    else
    {
        //newBidVec = lastBidVec;
        newBidVec[2] = itos(atoi(lastBidVec[2].c_str()) + 1);
        return false;
    }

}

void mergep()
{
    vector<string> v0{ "3378262674776260713","1","1","300.000000","300.000000","260.000000" };
    vector<string> v1{ "3378262674776260713","1","2","350.000000","400.000000","260.000000" };
    vector<string> v2{ "3378262674776260713","1","3","400.000000","500.000000","260.000000" };
    vector<string> v3{ "3378262674776260713","1","4","500.000000","570.000000","270.000000" };
    vector<string> v4{ "3378262674776260713","1","5","570.000000","600.000000","310.000000" };
 //   vector<string> v5{ "3378262674776260713","1","6","65.6000","70.16000","80.000000" };
    vector<vector<string>> v;


   // v[0]= { "3378262674776260725","1","1","0.000000","1.354000","50.000000" };
    //v[0].assign(v0.begin(), v0.end());
    v.push_back(v0); v.push_back(v1); v.push_back(v2); v.push_back(v3); v.push_back(v4);
    //v.push_back(v5);
    //v[1] = v1; v[2] = v2; v[3] = v3; v[4] = v4; v[5] = v5;
    vector< vector <string> > out;
    vector<string >lastV;
    for (int i = 0; i < 5; i++)
    {

      //  vector<string> lastV;
      //  out.pop_back();
        if (merge(lastV, v[i]))
        {
            out.pop_back();
            out.push_back(v[i]);
        }
        else
        {
            out.push_back(v[i]);

        }
        lastV = v[i];

    }

    int p;
    p = 10;
}


string getNextOrderId(string orderId)
{
    int pos = orderId.find('V');
    string id = orderId.substr(0, pos - 1);
    int v;
    if (pos == orderId.size())
        v = 1;
    else
    {
        v = atoi((orderId.substr(pos + 1, orderId.size())).c_str());
        v++;
    }
    return id + "V" + to_string(v);
}

void test(vector <int> &v)
{
    v[0] = 8;
}

//double average(double in,double &aver, int  num)
//{
//    if (aver == 0)
//        aver = in;
//    else
//        aver = (aver * num + in) / ((__int64)num + 1);
//    
//}

struct BusLfValue
{
    long ld_id;
    int time_tag;
    int data_type;
    time_t data_time;
    float p[288];
    time_t update_time;

    BusLfValue()
    {
        ld_id = sizeof(p);
        memset(p, 0, 288);
    }

};

void str(char* s)
{

}

struct mstruct
{
    int a;
    int b;
    mstruct(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    mstruct()
    {

    }
};

void setwf()
{
    cout << "202010100110" << setw(9) << "buyPrice" << setw(6) << "40.05" << endl;
    string symbol = "BUSDUSDT";
    double askPrice = 9000;
    double bidPrice = 9100;
    double realQty = 40.05;
    string buyId = "P_1_BUSDUSDT_20200327_090627_0";
    string sellId = "P_2_BUSDUSDT_20200327_090627_0";

    cout << symbol << setw(8) << "buy p:" << fixed << setprecision(4) << askPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " buyId:" << buyId << endl;
    cout << symbol << setw(8) << "sell p:" << fixed << setprecision(4) << bidPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " sellId:" << sellId << endl;

    realQty = 40;
    askPrice = 11000;
    bidPrice = 11110;

    cout << setw(9) << symbol << setw(9) << "buy p:" << fixed << setprecision(4) << askPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " buyId:" << buyId << endl;
    cout << setw(9) << symbol << setw(9) << "sell p:" << fixed << setprecision(4) << bidPrice << " q:" << setprecision(2) << realQty << setw(8) <<
        " sellId:" << sellId << endl;

    int bbbb = 1;
}

void type()
{
    char ch;
    int count = 0;
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl<<count<<" ch read \n";
}


int ret1(int ret)
{
    return ret;
}

int main()
{
    string arg = "  f -conf /root/conf/bf_d.ini  df";
    int pos = arg.find("/");
    int pos2 = arg.find(" ", pos);
    if (pos2 == -1)
        pos2 = arg.size();
    string Gpath = arg.substr(pos-1, pos2 - pos + 1);

    string sss1 = "15674674";
    string sss2 = "79999";
    string sss3 = "76";
    printf("%d\n", sss1.find_first_of(sss2));//返回被查匹配字符串中某个字符的第一次出现位置
    printf("%d\n", sss1.find(sss2));

    printf("%d\n", sss1.find_first_of(sss3));
    printf("%d\n", sss1.find(sss3));

    int retCode;
    if (retCode = ret1(1) < 0)
    {
        cout << retCode << endl;
    }

    exit(EXIT_FAILURE);
    if ((1 > 2) or (2 < 3))
        cout << "FF" << endl;
    else
        cout << "FfF" << endl;

    type();
    clock_t delay = 5 * CLOCKS_PER_SEC;
    clock_t start = clock();
    while (clock() - start < delay)
        ;

    time_t t_start= 1595849774;
    time_t beginTime = t_start - t_start % (5 * 60) + 5 * 60;
    time_t endTime = t_start - t_start % (5 * 60);

    cout << ctime(&beginTime) << endl;
    cout<< ctime(&endTime) << endl;

    setwf();

    int a2;
    int b2;
    string test2;
    int day;
    cin >> a2;
    getline(cin, test2);//不阻塞
    cout << a2 << " " << test2 << " " << " " << endl;
    day = atoi(test2.c_str());


    vector <int > v4;
    v4.push_back(2);
    v4.push_back(9);
    v4.push_back(1);
    double aaa = 1234.56789;

    cout << fixed << setprecision(9) << aaa << endl;

    ostringstream osss;
    osss << fixed << setprecision(5) << aaa;

    cout << osss.str() << endl;;


    mstruct m1(1,2);
    mstruct m2(3, 4);
    cout << &m1 << endl;
    cout << &m2 << endl;

    mstruct m0;
    cout << &m0 << endl;


    m0 = m1;

    
    cout << &m0 << endl;

    m0 = m2;

    cout << &m0 << endl;

    char ss2[222];
    sprintf(ss2, "ff");
    str(ss2);
    time_t now = 1578818551;
    tm *t;
    t=localtime(&now);

    //string("aa");
    vector<string > ilist{ "1","2" };
    string area[3]={ "a", "ab","aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int iii = sizeof(area);
    int iii2 = sizeof(area[0]);

    BusLfValue pp;

    int ab = 21;
    cout << setw(2) << setfill('0') << ab << endl;
    string phyname;
    phyname = "甘肃.华亭等值厂/110kV.#1等值机";

    if (phyname == "甘肃.华亭等值厂/110kV.#1等值机") phyname = "甘肃.华亭电厂/10kV.#1机";

    cout << phyname << endl;
    double b = 3.141323;
    cout <<b<< setiosflags(ios::fixed) << setprecision(2) <<b<< endl;
    string clientID = "P_1_BUSDUSDT_20200327_102359_1V1234234qq";
    int posV = clientID.find('V');
    clientID = clientID.substr(4,posV-4);

    

    vector <int > t1;
    t1.push_back(1);
    t1.push_back(2);
    test(t1);
    //string ns= getNextOrderId("P123V9");
    mergep();

    long ttt = 1585730687;
    int h = ttt % (3600 * 60 * 60);
    
    int h2 = 16 * 3600 + 44 * 60 + 47;


    double d;
    char cc[3] = { '1','.','3' };
    if (strcmp(cc, "1.3"))
    {
        d = atof(cc);
        
    }



  /*  char in;
    cin >> in;
    cout << in << endl;*/

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
