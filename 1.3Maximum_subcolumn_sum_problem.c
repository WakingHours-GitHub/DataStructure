//
// Created by HP on 2021/1/8.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

// 暴力算法1 时间复杂度:O(n^3)
int MaxSubSeqSum_one(int A[], int n){
    int thisSum ,maxSum = 0;
    for(int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            thisSum = 0;
            for (int k = i; k <= j; k++)
                thisSum += A[k];
            if (thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}
// 暴力算法2 时间复杂度:O(n^2)
int MaxSubSeqSum_two(int A[], int n){
    int thisSum ,maxSum = 0;
    for(int i = 0; i < n; i++) {
// i是子列左端的位置
        thisSum = 0; // thisSum是A[i]到A[j]的子列和

        for (int j = i; j < n; j++) {
            thisSum += A[j];
 //对于相同的i,不同的j,只要在j-1此循环的基础上累加1项即可

            if (thisSum > maxSum)
                maxSum = thisSum; // 更新结果
        }// j循环结束
    }// i循环结束
    return maxSum;
}

// 分而治之 时间复杂度:O(n*logn)
int MaxSubSeqSum_three(int A[], int n){

}

// 在线处理 时间复杂度:O(n)
// 在线的意思是指每输入一个数据就进行及时处理,在任何一个地方中止输入,算法都能给出当前的正确解
int MaxSubSeqSum_fore(int A[], int n) {
    int thisSum = 0, maxSum;
    for (int i = 0, maxSum = 0; i < n; i++) {
        thisSum += A[i];
// 向右累加

        if (thisSum > maxSum)
            maxSum = thisSum; // 更新结果
        else if (thisSum < 0)
// 如果当前子列和为负
            thisSum = 0;
// 则不可能是后面的部分和增大,则抛弃

    }
    return maxSum;
}


void toString(int a[], int len){
    for(int i = 0; i < len; i++){
        printf("[%d] ",a[i]);
    }
}
int main(int argc, char *argv[]) {
    int x[N];
//    srand(getpid(0));

    for(int i = 0; i < N; i++){
        srand(time(NULL));// 获取种子
        x[i] = rand()%50; // 产生<50的随机数，放到数组x中
    }
    toString(x,sizeof(x)/sizeof(x[0]));
    int maxSum = MaxSubSeqSum_one(x,sizeof(x)/sizeof(x[0]));
    printf("\n%d",maxSum);

    return 0;
}
