#include <stdio.h>
void main()
{
      int sec;
      int hours;
      int minutes;
      int second;

	printf ("Enter thew value of time in seconds\n");
	scanf ("%d" ,&sec);
	hours = sec/3600;
	minutes = (sec%3600)/60;
	second = (sec%3600)%60;
	printf ("\n hours=%d",hours);
	printf ("\n minutes=%d",minutes);
	printf ("\n second=%d",second);


}
