// 10.09.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<stdio.h>
#include <locale.h>

using namespace std;

int atoi_mine1(char* str) {
	int sum = 0;
	for (int i = 0; i < strlen(str) && isdigit(str[i]); i++) {
		sum = sum * 10 + str[i]-48; }
return sum;
}

int atoi_mine2(char* str) {
	int sum = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isdigit(str[i]))
			sum = sum * 10 + str[i] - 48;
	}
	return sum;
}



int main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	char str[30];
	cin >> str;
	
	cout << verxnij_registr(str) << endl;
	

	/*_itoa_s(a, str, 10);
	cout << str << endl;
	for (int i = 0; i < strlen(str); i++)
		cout << str[i] << endl;*/

	/*int index = 0;
	cin >> a;
	while (a) {
		str[index++] = char(48 + a % 10);
		a /= 10;
	}
	for (int k = index - 1; k >= 0; k--)
		cout << str[k];*/




	//пользователь вводит строку, строку для поиска и строку замены.программа заменяет все вхождения строки поиска на строку замены
	//char final_text[100]="";
	//char str[100]="This is example for my example";
	//char find_text[20] = "example";
	//char replace_text[20] = "test";
	//
	//char* context;
	//char* p = strtok_s(str, " ", &context);
	//while (p != NULL) {

	//	if (!(strcmp(p, find_text)) == 0)
	//		/*strcat_s(final_text, replace_text);*/

	//	{
	//		strncat_s(final_text, p, strlen(p));
	//		strcat_s(final_text, " ");
	//	}
	//	p = strtok_s(context, " ", &context);
	//}
	//cout << final_text << endl;
	//

	//char str[100] = "Abba";
	//char str1[100] = "Abba";
	/*strcpy_s(str, strstr(str1, "W"));*///vstavka slova
	/*strncat_s(str, str1, 4);*/
	//str=str+str1
	/*strncat_s(str, strstr(str1, "W"), 5);*/
	//cout << strncmp(str, str1,2) << endl;
	//cout << str << endl;

	system("pause");
    return 0;
}

