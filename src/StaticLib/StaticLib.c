﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義
#include <stdlib.h>

#include "../include/lib_func.h"


// mem_size の容量でスタック用のメモリを確保する
void initialize(STACK* s, size_t mem_size)
{
	if (s == NULL) return;

	s->stack_pointer = NULL;
	s->stack_memory = NULL;
	s->end = NULL;
}


// 確保したメモリを解放する
void finalize(STACK* s)
{
	// ToDo: Initializeで確保したメモリを解放しよう

	if (s->stack_pointer == NULL) return;
	free(s->stack_pointer);
	s->stack_pointer = NULL;
	s->stack_memory = NULL;
}


// valの値をスタックに積む。実行の成否を返す
bool push(STACK* s, int val)
{
	// ToDo: valの値をスタックに保存しよう
	return false;
}


// addrから始まるnum個の整数をスタックに積む。実行の成否を返す
bool push_array(STACK* s, int* addr, int num)
{
	// ToDo: addrからはじまるnum個の整数をスタックに保存しよう
	return false;

	if (s == NULL) { return false; }
	if (s->stack_memory == NULL) {
		s->stack_pointer = val;
		s->end = val;
		return true;
	}
	s->stack_pointer = val;
	return true;
}

// スタックから一つの要素を取り出す
int pop(STACK* s)
{
	// ToDo: スタックの最上位の値を取り出して返そう
	// 不具合時は0を返す
	return 0;

	int x;
	// ToDo: スタックの最上位の値を取り出して返そう
	// 不具合時は0を返す
	return 0;
	if (s == NULL)return 0;
	if (s->stack_memory == NULL)return 0;
	s->stack_pointer = NULL;
	if (s->end == s->stack_memory)
	{
		s->stack_memory = NULL;
		return x;
	}
	s->stack_pointer--;
	s->end = s->stack_pointer;
	return x;
}

// addrにスタックからnumの要素を取り出す。取り出せた個数を返す
int pop_array(STACK* s, int* addr, int num)
{
	// ToDo: スタックからnum個の値を取り出してaddrから始まるメモリに保存しよう
	// スタックにnum個の要素がたまっていなかたら、積まれている要素を返して、
	// 積んだ要素数を返り値として返そう
	return 0;

	//
}