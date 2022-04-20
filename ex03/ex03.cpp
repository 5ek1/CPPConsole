// ex03.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <iomanip>
#include"GetBMI.h"
#include"getObesity.h"
using namespace std;
string GetObesitySt(int ob);

int main()
{
    const int STD_BMI = 22; // 標準BMI
    int obesity; //肥満度
    double height;  // 身長
    double weight;  // 体重
    double bmi = 0;    // bmi
    double stdWeight;   // 標準体重

    //キー入力をheightに格納する
    cout << "身長(cm)を入力してください";
    cin >> height;

    //キー入力をweightに格納する
    cout << "体重(kg)を入力してください";
    cin >> weight;

    // 標準体重を計算する
    //stdWeight = STD_BMI * (height / 100) * (height / 100);

    bmi = GetBMI(height, weight);
    // bmiを画面に表示する
    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    // 標準体重を画面に表示する
    //cout << "あなたの標準体重は、" << stdWeight << "です" << endl;

    obesity = getObesity(bmi);
    //肥満度を表示する
    cout << GetObesitySt(obesity) << endl;

    return 0;
}

string GetObesitySt(int ob)
{
    if (ob == -1)
    {
        return "低体重";
    }
    else
    if (ob == 0) 
    {
        return "普通体重";
    }
    else
    if (ob == 1)
    {
        return "肥満(1度)";
    }
    else
    if (ob == 2)
    {
        return "肥満(2度)";
    }
    else
    if (ob == 3)
    {
        return "肥満(3度)";
    }
    else
    {
        return "肥満(4度)";

    }
}