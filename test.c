#include <stdio.h>
int main()
{
    int t, n, m;
    scanf("%d",&t); //takes the no. of test case
    while(t>0)
    {
        t--;
        scanf("%d",&n); //takes the no. of songs to be taken
        int i, j, x , y, b;
        long int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%ld",&arr[i]);

        }
        scanf("%d", &b);
        y=arr[b-1];

        for(i=0; i<n; i++)            //2 7 5 9 3
        {
            for(j=0; j<n-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    x=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=x;
                }
            }
        }

         for(int m=0; m<n; m++)
        {
            if(y==arr[m])
            {
                printf("%d\n", m+1);
            }

        }

    }
    return 0;
}
