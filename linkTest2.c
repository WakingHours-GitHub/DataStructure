//
// Created by HP on 1/29/2021.
//

#include "stdlink.h"

int main() {
    Link *head = linkCreate(10);
    linkTraverse(head);
    printf("�����Ա��ȣ�%d\n",length(head));
    printf("==========================================\n");
//    int key = 0;
//    printf("��������Ҫ��ӵ�Ԫ�أ�\n");
//    scanf("%d",&key);
//    addNode(head, key);
//    linkTraverse(head);
//    printf("�����Ա��ȣ�%d\n",length(head));
//    printf("==========================================\n");
//
//    deleteNode(head);
//    linkTraverse(head);
//    printf("�����Ա��ȣ�%d\n",length(head));

    printf("==========================================\n");

    int x = 0;
    int key = 0;
    printf("������ҵĽڵ���ţ��ڵ��0��ʼ��������ͷβ�ڵ㣩��");
    scanf("%d",&x);
    Link *temp = NULL;
    temp = findSeq(head, x) ;
    if(!temp) printf("û������˵�����\n");
    else printf("���Ϊ%d�Ľڵ��ֵΪ��%d\n",x,temp->date);

    printf("==========================================\n");

    printf("��������Ҫ����ڵ����ţ��ҽ���������������֮ǰ���������ţ�");
    scanf("%d",&x);

    printf("��������Ҫ��������ݣ�key��");
    scanf("%d",&key);

    if(!insert(head, x, key)) printf("����ʧ��\n");
    else printf("����ɹ�\n");

    printf("\n");

//    linkTraverse(head);





    return 0;
}