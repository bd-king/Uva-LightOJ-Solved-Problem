#include<stdio.h>
#include<string.h>
char arr[24000][24000];
int main()
{
    int i,a,j,hater,k,b,c,m,n,x,y,cas;
    char arr1[24000]="1",arr2[24000]="1",temp[24000],result[24000];
    strcpy(arr[0],arr1);
    strcpy(arr[1],arr2);
    for(x=2;x<=10000;++x)
    {
            hater=0;
            a=strlen(arr1);
            b=strlen(arr2);
        if(a<b)
        {
            for(i=0,j=0,k=0;i<a;++i,++j,++k)
            {
                if((arr1[i]-48+arr2[j]-48+hater)>9)
                {
                    result[k]=((arr1[i]-48+arr2[j]-48+hater)%10)+48;
                    hater=1;
                }
                else
                {
                    result[k]=((arr1[i]-48+arr2[j]-48+hater)%10)+48;
                    hater=0;
                }
            }
        while(j<b)
        {
            if((arr2[j]-48+hater)>9)
            {
                result[k]=((arr2[j]-48+hater)%10)+48;
                hater=1;
            }
            else
            {
                result[k]=(arr2[j]-48+hater)+48;
                hater=0;
            }
            ++j;++k;
        }
        if(hater==1)
        {
            result[k]='1';
            result[k+1]='\0';
        }
        else
        result[k]='\0';
            }

        else
        {
            for(i=0,j=0,k=0;i<a&&j<b;++k,++i,++j)
            {
                if((arr1[i]-48+arr2[j]-48+hater)>9)
            {
                result[k]=((arr1[i]-48+arr2[j]-48+hater)%10)+48;
                hater=1;
            }
            else
            {
                result[k]=arr1[i]-48+arr2[j]+hater;
                hater=0;
            }
            }
            if(hater==1)
            {
                result[k]='1';
                result[k+1]='\0';
            }
            else
            result[k]='\0';
        }
            strcpy(arr1,arr2);
            strcpy(arr2,result);

        c=strlen(result);
            for(i=0,j=c-1;j>=0;--j,++i)
            temp[i]=result[j];
            temp[i]='\0';
            strcpy(arr[x],temp);
        }
        while(scanf("%d",&x)==1)
            {
                if(x==0)
                break;
                printf("%s\n",arr[x]);
            }
    return 0;
}
