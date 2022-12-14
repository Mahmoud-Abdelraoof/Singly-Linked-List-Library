#ifndef SLL_H
#define SLL_H



#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "ERROR_STATE.h"


typedef struct node
{
	s32 Value;
	struct node *Next;
}Node_t;


typedef struct list
{
	u32 Size;
	Node_t *Head;
}List_t;

typedef enum
{
	LIST_EMPTY,
	LIST_NEMPTY
}List_State_t;


extern Error_State_t DisplayData(List_t *List);
extern Error_State_t CreateList(List_t **ListAddress);
static Error_State_t List_Empty(List_t *list , List_State_t *ReturnValue);
extern Error_State_t AddToFront(List_t *List,s32 Data);
extern Error_State_t RemoveFromFront(List_t *List, s32 *Ret_Data);
extern Error_State_t AddToBack(List_t *List,s32 Data);
extern Error_State_t RemoveFromBack(List_t *List ,s32 *Ret_Data);
extern Error_State_t RemoveFromPosistion(List_t *List,s32 *Ret_Data,u8 Pos);









#endif
