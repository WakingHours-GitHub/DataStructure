//
// Created by HP on 1/29/2021.
//

#include "stdlink.h"

int main() {
    Link *head = linkCreate(10);
    linkTraverse(head);
    printf("此线性表长度：%d\n",length(head));
    printf("==========================================\n");
//    int key = 0;
//    printf("请输入您要添加的元素：\n");
//    scanf("%d",&key);
//    addNode(head, key);
//    linkTraverse(head);
//    printf("此线性表长度：%d\n",length(head));
//    printf("==========================================\n");
//
//    deleteNode(head);
//    linkTraverse(head);
//    printf("此线性表长度：%d\n",length(head));

    printf("==========================================\n");

    int x = 0;
    int key = 0;
    printf("输入查找的节点序号（节点从0开始，不包括头尾节点）：");
    scanf("%d",&x);
    Link *temp = NULL;
    temp = findSeq(head, x) ;
    if(!temp) printf("没找着你说的序号\n");
    else printf("序号为%d的节点的值为：%d\n",x,temp->date);

    printf("==========================================\n");

    printf("请输入你要插入节点的序号，我将在在你输入的序号之前插入这个序号：");
    scanf("%d",&x);

    printf("请输入你要插入的数据：key：");
    scanf("%d",&key);

    if(!insert(head, x, key)) printf("插入失败\n");
    else printf("插入成功\n");

    printf("\n");

//    linkTraverse(head);





    return 0;
}