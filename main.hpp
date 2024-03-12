// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int mycstrlen(char[]);
int mycstrcpy(char[], char[]);
int mycstrcat(char[], char[]);

int mycstrlen(char src[])
{
	int cnt = 0;
	while (*src != '\0'){
		src++;
		cnt++;
	}
	return cnt;
}
int mycstrcpy(char src[], char target[])
{
	int cnt = 0;
	while (src[cnt] != '\0') {
		target[cnt] = src[cnt];
		cnt++;
	}
	target[cnt] = '\0';
	return cnt;
}
int mycstrcat(char src[], char target[])
{
	int cnt1=0;
	while(src[cnt1] != '\0')
		cnt1++;

	int cnt2 = 0;
	while(target[cnt2] != '\0'){
		src[cnt1++] = target [cnt2++];
	}
	src[cnt1] = '\0';
	return cnt1;

}