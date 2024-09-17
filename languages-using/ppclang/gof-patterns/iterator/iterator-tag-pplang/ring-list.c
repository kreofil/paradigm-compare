// list.c
// ���������� ������� �������, ��������� � ����������
// ����������������� ���������� ������

#include <stdio.h>
#include <stdlib.h>
#include "ring-list.h"

// ��������� ������������� ������
void InitRingList(RingList* list) {
  list->tail = NULL;
  list->previous = NULL;
  list->current = NULL;
}

//------------------------------------------------------------------------------
// ���������� �������� � ����� ������
void AppendRingList(RingList* list, Value* value) {
  Node* tmpNode = malloc(sizeof(Node));
  tmpNode->value = value;
  if(list->tail == 0)  // ����� ������ ������
    tmpNode->next = tmpNode;  // �������� ������ �� ����
  else {
    tmpNode->next = (list->tail)->next;
    (list->tail)->next = tmpNode;
  }
  list->previous = list->tail;
  list->tail = tmpNode;
  list->current = tmpNode;
}

//------------------------------------------------------------------------------
// �������� �������� �� ������ ������ � ��� �����������
Value* DeleteHeadOfRingList(RingList* list) {
  if(list->tail == NULL) return NULL; // ������ ����.
  Node* tmpNodePtr = list->tail->next;
  Value* value = tmpNodePtr->value;
  if(list->tail == list->tail->next) {
    // � ������ ���� �������. ������ ���������
    list->tail = 0;
  } else { // ��������� �� ������ ����
    list->tail->next = list->tail->next->next;
  }
  free(tmpNodePtr); // �������� ����
  return value;
}

//------------------------------------------------------------------------------
// �������� ���� ��������� ������ (������� �� ������)
void EmptyRingList(RingList* list) {
  while(list->tail != NULL) {
    Value* value = DeleteHeadOfRingList(list);
    free(value);
  }
}

//------------------------------------------------------------------------------
// ����� �������� ���������� ��������, �� ������� ����
void OutCurrentRingListValue(FILE* file, Value* value) {
  if(value == NULL) { // ������� �����������
    fprintf(file, "Element is absent! ");
  } else {
    OutValue<value>(file);
  }
}

//------------------------------------------------------------------------------
// ����� ��������� ������ � ��������� ����, �������
// ������ ���� ������������� ������
void OutRingListValues(FILE* file, RingList* list) {
  Node* tmpPtr;
  fprintf(file, "List content:\n");
  if(list->tail == NULL) {
    fprintf(file, "    List is empty.\n");
  } else {
    tmpPtr = list->tail;
    do {
      fprintf(file, "    ");
      OutCurrentRingListValue(file, tmpPtr->next->value);
      fprintf(file, "\n");
      tmpPtr = tmpPtr->next;
    } while(tmpPtr != list->tail);
  }
}
