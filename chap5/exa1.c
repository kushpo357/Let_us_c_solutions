#include <stdio.h>
int main()
{
    // to calculate the overtime pay of workers
    int loop = 1, ho, ov;
    while (loop <= 10) //for 10 workers
    {
        printf("enter hours of work (worker %d) : ", loop);
        scanf("%d", &ho);
	if (ho > 40)
	        ov = (ho - 40) * 12;
	else
		ov = 0;
        printf("over time pay = %d\n", ov);
        loop++;
    }

    printf("All workers have been evaluated\n");

    return 0;
}
