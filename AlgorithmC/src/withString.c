/*
 * withString.c
 *
 *  Created on: 2015年8月3日
 *      Author: Song Zhi-Cheng
 */


int myAtoi(char* str){
	int flags = 1;
	int res = 0;
	if(!str) return 0;
	while(*str == ' ') str++;
	if(*str == '+') {
		str++;
		if(*str == '-') return 0;
	}
	if(*str == '-') {
		str++;
		flags = -1*flags;
		if(*str == '+') return 0;
	}
	while(*str>='0'&&*str<='9'){
		res = res*10+*str-'0';
		str++;
	}
	return res*flags;
}

