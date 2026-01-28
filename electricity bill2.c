#include <stdio.h>
int main()
{
int connectionType, units;
int bill = 0;
scanf("%d", &connectionType);
scanf("%d", &units);
switch (connectionType)
{
case 1:   
if (units <= 100)
{
bill = units * 3;
}
else if (units <= 200)
{
bill = (100 * 3) + (units - 100) * 5;
bill -= 80;   
}
else
{
bill = (100 * 3) + (100 * 5) + (units - 200) * 7;
bill -= 80;   
}
break;
case 2:   
if (units <= 100)
{
bill = units * 7;
}
else
{
bill = (100 * 7) + (units - 100) * 10;
}
break;
default:
printf("Invalid connection type");
return 0;
}
printf("Bill ₹%d", bill);
return 0;
}