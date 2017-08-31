#include <stdio.h>
#include <string.h>

int main(int argc,char **argv)
{
    char str[64];

    while(scanf("%60s",str)>0){
        int i,j;
        int len = strlen(str);
        for(j=1; j <len; j++){
            char key = str[j];
            i = j-1;
            while(i>=0 && str[i]>key){
                str[i+1] = str[i];
                i--;
            }
            str[i+1] = key;
        }
        printf("%s\n",str);
    }

    return 0;
}
