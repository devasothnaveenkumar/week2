#include <stdio.h>

int main()
 {
    int a, b, c;

    //let a,b,c are the techniques
    printf("Enter the points for the 3 techniques: ");
    scanf("%d %d %d", &a, &b, &c);

    int m = a;
    //m be the maximum points
    if (b > m)
	 {
        m = b;
    }
    if (c > m) 
	{
        m = c;
    }

    printf("The maximum point value is: %d\n", m);

    return 0;
}

