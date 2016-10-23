//
//  List.h
//  Data-Structures
//
//  Created by 李恺林 on 2016/10/22.
//  Copyright © 2016年 李恺林. All rights reserved.
//

#ifndef List_h
#define List_h

#define ElementType int
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);
Position Find (ElementType X, List L);
void Delete(ElementType X, List L);
Position FindPrevious (ElementType X, List L);
void DeleteList (List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

struct Node {
    ElementType Element;
    Position Next;
};

int IsEmpty(List L)
{
    return L->Next == NULL;
}


int IsLast (Position P, List L)
{
    return P->Next == NULL;
}

Position Find (ElementType X, List L)
{
    Position P;
    P = L->Next;
    while (P != NULL && P ->Element != X) {
        P = P->Next;
    }
    return P;
}

void Delete(ElementType X, List L)
{
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if (!IsLast(P, L)) {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }
}

Position FindPrevious (ElementType X, List L)
{
    Position P;
    P = L;
    while (P->Next != NULL && P->Next->Element != X) {
        P = P->Next;
    }
    return P;
}

void Insert(ElementType X, List L, Position P)
{
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL) {
        printf("Out of space\n");
    }
    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}


#endif /* List_h */

