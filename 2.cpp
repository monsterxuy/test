//    链表创建函数定义
PNode CreateList(void) {
    int len ;    //    用于定义链表长度
    int val ;    //    用于存放节点数值
    PNode PHead = (PNode)malloc(sizeof(Node));    //    创建分配一个头节点内存空间
//头节点相当于链表的哨兵，不存放数据，指向首节点（第一个节点）
    if (PHead == NULL)    //    判断是否分配成功
    {
        printf("空间分配失败 \n");
        exit(-1);
    }

    PNode PTail = PHead;    //    链表的末尾节点，初始指向头节点
    PTail->Next = NULL;    //    最后一个节点指针置为空
    len=3;       //    输入节点个数
    for (int i = 0; i < len; i++) {

        PNode pNew = (PNode)malloc(sizeof(Node));    //    分配一个新节点
        if (pNew == NULL) {
            printf("分配新节点失败\n");
            exit(-1);
        }
        printf("请输入第 %d 个节点的数据：", i + 1);
        scanf("%d", &val);    //    输入链表节点的数据

        pNew->Element = val;    //    把数据赋值给节点数据域
        PTail->Next = pNew;    //    末尾节点指针指向下一个新节点
        pNew->Next = NULL;        //    新节点指针指向为空
        PTail = pNew;    //    将新节点复制给末尾节点        
    }   
    printf("创建链表成功\n");
    return PHead;    //    返回头节点
}

