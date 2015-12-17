#include<stdio.h>
#include<string.h>
int main()
{
    // for administrator
    char a,key[100],u[8],u1[]="bhautik",p[11],p1[]="bhautik123";
    int n,n1,n2,n3,n4,n5;
    for ( ; ;)
    {


        printf("Enter your user name:\t");
        gets(u) ;
        printf("Password\t");
        for (a=0;a<10;a++)
        {
            p[a] = getch() ;
            p[a+1]= '\0' ;
            printf("*");

        }
            printf("\n");

            if(strcmp(p,p1)|| strcmp(u,u1))
            {
                printf("!!*please enter correct passwords or user name!!*\n\n");
                continue ;
            }




            printf("\nEnter no.of question of 1 mark:  ");
            scanf("%d",&n1);
            printf("\nEnter no.of question of 2 mark:  ");
            scanf("%d",&n2);
            printf("\nEnter no.of question of 3 mark:  ");
            scanf("%d",&n3);
            printf("\nEnter no.of question of 4 mark:  ");
            scanf("%d",&n4);
            printf("\nEnter no.of question of 5 mark:  ");
            scanf("%d",&n5);
            n=n1+n2+n3+n4+n5 ;
            printf("\n\n#Enter Answer key#\n\n");
        char i;
            for(i=1;i<=n;i++)
            {
                printf("Q%d-",i);
                fflush (stdin);
                scanf("%c",&key[i]);
            }
            printf("***Your answer key is set***");
            break ;
    }
        char ans[100],j,r[10];
            printf("\n\nEnter your Roll No. :  ");
            fflush(stdin);
            gets(r) ;
            printf("\n\nEnter your answers");
            for(j=1;j<=n;j++)
            {
                printf("\nQ%d-",j);
                fflush (stdin);
                scanf("%c",&ans[j]);
            }
        int m1=0,m2=0,m3=0,m4=0,m5=0,m;
            for (j=1;j<=n1;j++)
            {
                if(ans[j]==key[j])
                {
                    m1++;
                }
            }
            for (j=n1+1;j<=n2+n1;j++)
            {
                if(ans[j]==key[j])
                {
                    m2+=2;
                }
            }
            for (j=n1+n2+1;j<=n3+n2+n1;j++)
            {
                if(ans[j]==key[j])
                {
                    m3+=3;
                }
            }
            for (j=n1+n2+n3+1;j<=n4+n3+n2+n1;j++)
            {
                if(ans[j]==key[j])
                {
                    m4+=4;
                }
            }
            for (j=n1+n2+n3+n4+1;j<=n;j++)
            {
                if(ans[j]==key[j])
                {
                    m5 += 5;
                }
            }

            m =m1+m2+m3+m4+m5 ;
           // printf("\nm1=%d",m1);
           // printf("\nm2=%d",m2);
           // printf("\nm3=%d",m3);
           // printf("\nm4=%d",m4);
           // printf("\nm5=%d",m5);
           printf("\nm=%d",m);
    return(0) ;
}
















