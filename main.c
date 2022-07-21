#include <stdio.h>
#include "sort_methods.h"
#include "stdlib.h"
#include "List_functions.h"

int main() {
    dataType list[len+1]={};
    initList(list);
    int choices,flag=1;
    printf("please input you choices:\n1:Bubble_sort\n2:Swap_sort\n3:InsertSort\n4:QuickSort\n5:merge_sort\nmy choice:");
    scanf("%d",&choices);
    switch (choices) {
        case 1:
            Bubble_sort(list);//2360
            break;
        case 2:
            Swap_sort(list);//99
            break;
        case 3:
            InsertSort(list);//2360
            break;
        case 4:
            QuickSort(list,1,len);//256
            break;
        case 5:
            merge_sort(list,1,8);//17
            break;
        default:
            printf("error input!!!\n");
            flag=0;
            break;
    }
    if(flag==1){
        printList(list);
        printf("swap %d times in total!\n",count);
        checkList(list);
    }
    return 0;
}