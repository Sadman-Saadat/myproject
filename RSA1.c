#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int p, q, n, e, Q, i, j, u, d;
    char w[500];
    scanf("%d %d", &p, &q);
    n=p*q;
    Q = (p-1)*(q-1);
    for(i=2; i<Q; i++)
    {
        if(n%i!=0&&Q%i!=0)
        {
            for( j=i-1 ; j>1 ; j-- )
            {
                if(i%j==0)
                {
                    u=0;
                    break;
                }

            }
            if(u==0)
            {
                u=1;
                continue;
            }
            e=i;
            break;
        }
    }
    for(i=2;; i++)
    {
        if(((i*e)%Q)==1)
        {
            d=i;
            break;
        }
    }
    gets(w);
    for(i=0; i<strlen(w); i++)
    {
        if(w[i]>='A' && w[i]<='Z')
        {
            d=pow((w[i]-'A'),e);
            d = d%n;
            printf("%c",d+'A');
        }
        else if(w[i]>='a' && w[i]<='z')
        {
            d=pow((w[i]-'a'),e);
            d = d%n;
            printf("%c",d+'a');
        }
        else
            printf("%c",w[i]);
    }

}




