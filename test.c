#include <stdio.h>


int main(){
    char test[] = "abcdef";
    int List[] = {1,2,3,4,5,6,7};

    printf("==========================\n");
    printf("test length: %lu\n",sizeof(test));
    for(int i=0;i<sizeof(test);i++){
        printf("test[%d]->%c\n",i,test[i]);
    }

    printf("==========================\n");
    printf("List length: %lu\n",sizeof(List));
    for(int i=0;i<sizeof(List);i++){
        printf("List[%d]->%d\n",i,List[i]);
    }
}