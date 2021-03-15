#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(){
    int n;
    do{
        scanf("%d", &n);
    }while(n<2 || n>10);
    
    int **m = malloc(sizeof(int*)*n);
    
    for(int i=0; i<n; i++)
        m[i] = malloc(sizeof(int)*n);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                m[i][j] = 1;
                printf("%d ", m[i][j]);
                continue;
            }
            m[i][j] = 0;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++)
        free(m[i]);
    free(m);
    return 0;
}
*/

int main()
{
    int m, n;
    do
    {
        scanf("%d %d", &m, &n);
    } while ((m < 3 || m > 10) && (n < 3 || n > 10));

    char **a = malloc(sizeof(char *) * m);
    int **r = malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        a[i] = malloc(sizeof(char) * n + 1);
        r[i] = malloc(sizeof(int) * n);
    }

    for (int i = 0; i < m; i++)
    {
       memset(r[i], 0, sizeof(int)*n);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%s", a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '*')
            {
                r[i][j] = -1;
                for (int k = -1; k < 2; k++)
                {
                    for (int l = -1; l < 2; l++)
                    {
                        if (i + k < 0 || j + l < 0 || i + k > m || j + l > m)
                        {
                            continue;
                        }
                        else if (a[i + k][j + l] == '.')
                        {
                            r[i + k][j + l] += 1;
                        }
                        else if (a[i + k][j + l] == '*')
                        {
                            r[i + k][j + l] = -1;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (r[i][j] == -1)
            {
                printf("*");
                continue;
            }
            printf("%d", r[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        free(a[i]);
        free(r[i]);
    }
    free(a);
    free(r);
    return 0;
}