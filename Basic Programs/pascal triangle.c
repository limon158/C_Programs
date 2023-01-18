/* C Program to Display Pascal triangle */

    #include <stdio.h>

    void main()

    {

        int array[15][15], x, j, rows, num = 25, k;

        printf("\n enter the number of rows:");

        scanf("%d", &rows);

        for (x = 0; x < rows; x++)

        {

            for (k = num - 2 * x; k >= 0; k--)

                printf(" ");

    	    for (j = 0; j <= x; j++)

    	    {

                    if (j == 0 || x == j)

    		{

                        array[x][j] = 1;

                    }

                    else

                    {

                        array[x][j] = array[x - 1][j - 1] + array[x - 1][j];

    		}

    		printf("%4d", array[x][j]);

                }

                printf("\n");

        }
        return 0;

    }