//
// Created by caojiahao on 2022/7/21.
//

#ifndef BUBBLE_SORT_LIST_FUNCTIONS_H
#define BUBBLE_SORT_LIST_FUNCTIONS_H
void printList(dataType list[]){
    for(i=1;i<=len;i++){
        printf("%d\t",list[i]);
        if(i%15==0)printf("\n");
    }
}
void initList(dataType list[]){
    for(i=1;i<=len;i++)
    {
//        printf("input the %dth number:\n",i);
//        scanf("%d",&list[i]);
//        srand(rand());
        list[i] = rand();
    }
}
void checkList(const dataType list[]){
    int flag=1;
    for(i=2;i<len;i++)
        if(list[i]<list[i-1]){
            flag=0;
            break;
        }
    if(flag)printf("sort correct!\n");
    if(!flag)printf("sort correct!\n");
}
#endif //BUBBLE_SORT_LIST_FUNCTIONS_H
