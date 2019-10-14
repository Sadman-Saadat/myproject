#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int p, q, n, e=0, Q, i, j, u, d=1;
    char w[500], t, g[500];
    printf("Enter two prime number: ");
    scanf("%d %d", &p, &q);
    fflush(stdin);
    n=p*q;
    Q = (p-1)*(q-1);
    for(i=2; i<Q; i++)
    {
        if(n%i!=0&&Q%i!=0)
        {
            for(j=i-1; j>=2; j--)
            {
                if(i%j==0)
                {
                    d=0;

                }
            }
            if(d==1)
            {
                e=i;
                break;
            }
            d=1;
        }

    }

    printf("Type the message to be encrypted: ");
    gets(w);
    printf("The encrypted message is: ");
    for(i=0; i<strlen(w); i++)
    {
       g[i] =((((int)(pow((w[i]-64),e))%n))%26+64);
       printf("%c", g[i]);
    }

    for(i=2;;i++)
    {
        if((e*i)%Q==1)
        {
            d=i;
            break;
        }
    }
    //code for Decryption
    printf("\n");
    printf("The decrypted message is: ");
    for(i=0; i<strlen(w); i++)
    {
       t =((((int)(pow((g[i]-64),d))%n))+64);
       printf("%c", t);
    }
}











//            if(u==0)
//            {
//                u=1;
//                continue;
//            }
//            e=i;
//            break;
//        }
//    }
//    for(i=2;; i++)
//    {
//        if(((i*e)%Q)==1)
//        {
//            d=i;
//            break;
//        }
//    }
//    gets(w);
//    for(i=0; i<strlen(w); i++)
//    {
//        if(w[i]>='A' && w[i]<='Z')
//        {
//            d=pow((w[i]-'A'),e);
//            d = d%n;
//            printf("%c",d+'A');
//        }
//        else if(w[i]>='a' && w[i]<='z')
//        {
//            d=pow((w[i]-'a'),e);
//            d = d%n;
//            printf("%c",d+'a');
//        }
//        else
//            printf("%c",w[i]);
//    }
//
//}





