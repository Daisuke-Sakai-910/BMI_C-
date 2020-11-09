#include <iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
#include "getBmi.h"
#include "getObesity.h"

int main(void)
{
	//宣言

	const int STD_BIM = 22;
	int Obesity;
	double height;
	double weight;
	double bmi;
	double stdWeight;

	height = 0;
	weight = 0;
	bmi = 0;

	while (true)
	{

		//各入力を格納する。

		// printf("あなたの身長は？ (m) : ");
		// scanf("%lf",&height);
		// printf("あなたの体重は？ (kg) : ");
		// scanf("%lf",&weight);

		cout << "身長（cm）を入力してください。:";
		cin >> height;

		cout << "体重（kg）を入力してください。：";
		cin >> weight;

		if (height > 0 && weight > 0)
		{
			break;
		}
		// printf("マイナスの値は入力できません。\nもう一度入力してください。\n");
		cout << "マイナスの値は入力できません。\nもう一度入力してください。\n";
	}

	//BMIの計算
	bmi = getBmi(height, weight);

	//標準体重
	height /= 100;
	stdWeight = STD_BIM * height * height;

	//printf("あなたのBMIは%.2lfです。", bmi);
	//printf("あなたの標準体重は、%.2lfです。", stdWeight)

	cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi
		<< "です。" << endl;
	cout << "あなたの標準体重" << stdWeight << "kgです。" << endl;

	switch (getObesity(bmi))
	{
	case -1:
		cout << "あなたは、低体重です。" << endl;
		break;
	case 0:
		cout << "あなたは、普通体重です。" << endl;
		break;
	case 1:
		cout << "あなたは、肥満（1度）です。" << endl;
		break;
	case 2:
		cout << "あなたは、肥満（2度）です。" << endl;
		break;
	case 3:
		cout << "あなたは、肥満（3度）です。" << endl;
		break;
	case 4:
		cout << "あなたは、肥満（4度）です。" << endl;
		break;
	default:
		break;
	}

	//if (bmi < 18.5)
	//{
	//	//printf("あなたは、肥満です。");
	//	cout << "あなたは、低体重です。" << endl;
	//}
	//else if (bmi < 25.0)
	//{
	//	//printf("あなたは、肥満ではありません。");
	//	cout << "あなたは、普通体重です。" << endl;
	//}
	//else if (bmi < 30.0)
	//{
	//	cout << "あなたは、肥満（1度）です。" << endl;
	//}
	//else if (bmi < 35.0)
	//{
	//	cout << "あなたは、肥満（2度）です。" << endl;
	//}
	//else if (bmi < 40.0)
	//{
	//	cout << "あなたは、肥満（3度）です。" << endl;
	//}
	//else
	//{
	//	cout << "あなたは、肥満（4度）です。" << endl;
	//}

	return 0;
}