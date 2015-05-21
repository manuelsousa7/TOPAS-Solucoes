#include <iostream>
#include <algorithm>
#include <stdio.h>
#define HOUR 3600
#define MIN 60

using namespace std;


int main()
{
	int n;
	cin >> n;
	n+=43200;
	for(;;)
	{
		if(n>43200*2)
		n=43200*2-n;
		else
		break;
	}
	int time_target=n;
    int hour=time_target/HOUR;
    int second=time_target % HOUR;
    int minute=second/MIN;
    second %= MIN;
    printf("%.2d:%.2d:%.2d",hour,minute,second);
	return 0;
}
