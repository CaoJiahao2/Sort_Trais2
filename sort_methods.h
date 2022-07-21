//
// Created by caojiahao on 2022/7/21.
//

#ifndef BUBBLE_SORT_SORT_METHODS_H
#define BUBBLE_SORT_SORT_METHODS_H

#define len 100
#define dataType int
int count=0,i,j,k;dataType temp;

void Bubble_sort(dataType list[]){//冒泡排序
    for(i=1;i<len;i++){
        for(j=1;j<len+1-i;j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
                count++;
            }
        }

    }
}
void Swap_sort(dataType list[]){//选择排序
    int min;
    for(i=1;i<len;i++){
        min=list[i];
        for(j=i+1;j<=len;j++){
            if(list[j]<min){k=j;min=list[j];}
        }
        if(k!=i){
            temp=list[k];
            list[k]=list[i];
            list[i]=temp;
            count++;
        }
    }
}
void InsertSort(dataType list[]){//插入排序
    for(i=2;i<=len;i++){
        list[0]=list[i];
        j=i-1;
        while (list[0]<list[j]&&j>0){
            list[j+1]=list[j];
            j--;
            count++;
        }
        list[j+1]=list[0];
    }
}
void QuickSort(dataType list[],int low,int high){//快速排序
    if(low<high){
        i=low;j=high;temp=list[i];
        do {
            while (i<j&&list[j]>=temp)j--;
            if(i<j){
                list[i]=list[j];//list[j]
                i++;count++;
                while (i<j&&list[i]<=temp)i++;
                if(i<j)
                {
                    list[j]=list[i];
                    j--;count++;
                }
            }
        } while (i!=j);
        list[i]=temp;
        QuickSort(list,low,i-1);QuickSort(list,i+1,high);
    }
}
void merge( dataType list1[],int low,int mid,int high){
    dataType list2[len+1];
    i=k=low;j=mid+1;
    while (i<=mid&&j<=high){
        if(list1[i]<=list1[j]){
            list2[k++]=list1[i++];count++;
        } else{
            list2[k++]=list1[j++];count++;
        }
    }
    while (i<=mid)list2[k++]=list1[i++];
    while (j<=high)list2[k++]=list1[j++];
    for(i=low;i<=high;i++)
        list1[i]=list2[i];
}
void merge_sort(dataType list[],int p,int q){//归并排序
    int mid;
    if(list==NULL||p>=q)return;
    mid=(p+q)/2;
    merge_sort(list,p,mid);
    merge_sort(list,mid+1,q);
    merge(list,p,mid,q);
}
#endif //BUBBLE_SORT_SORT_METHODS_H
