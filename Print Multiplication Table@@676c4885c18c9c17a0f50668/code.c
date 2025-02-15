#include <stdio.h>
int main(){
    int count,num;
    scanf("%d", &num);
    for(count=1; count<=10; count++){
        printf("%d x %d = %d\n", num,count,count*num);
    }
    return 0;
}