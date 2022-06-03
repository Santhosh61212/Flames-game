
#include <stdio.h>
#include <string.h>

void main()
{
    char name1[100],name2[100];
    printf("enter your name :");
    scanf("%s",name1);
    printf("enter your partner name :");
    scanf("%s",name2);
    //printf("%ld",strlen(name1));
    int count1=0,count2=0;
    for(int i=0;name1[i]!='\0';i++)
    {
        for(int j=0;name2[j]!='\0';j++)
        {
            if(name1[i]==name2[j])
            {
                //count++
                name2[j]='0';
                name1[i]='0';
                break;
                
            }
        }
        //printf("%c",name1[i]);
    }
    for(int i=0;name1[i]!='\0';i++)
    {
        if(name1[i]!='0')
        {
            count1++;
        }
    }
    for(int i=0;name2[i]!='\0';i++)
    {
        if(name2[i]!='0')
        {
            count2++;
        }
    }
    int tc=count1+count2; //tc=total count
    //printf("%d",tc);
    char F[]="flames";
    int fc=6;   //fc=flames count
    char G[fc];
    tc=tc-1;
    int i=0,ri,k,s;
    while(i<5){
        ri=tc%fc;
        for( k=ri;k<(fc-1);k++){
            F[k]=F[k+1];
        }
        F[k]='\0';
        fc--;
        for(s=0,k=ri;k<(fc+ri);k++,s++){
            G[s]=F[k%fc];
        }
        G[fc]='\0';
        strcpy(F,G);
        i++;
        
    }
    switch(F[0]){
        case 'f':
            printf("\n friends");
            break;
        case 'l':
            printf("\n love");
            break;
        case 'a':
            printf("\n affection");
            break;
        case 'm':
            printf("\n marriage");
            break;
        case 'e':
            printf("\n enemies");
            break;
        case 's':
            printf("sister");
            break;
    }
}
