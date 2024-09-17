// array.c
// ���������� ������� �������, ��������� � ����������
// ����������������� ���������� �������

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

// ��������� ������������� �������
void InitArray(Array* array) {
  array->len = 0;
  array->current = -1;
  for(int i = 0; i < maxLen; ++i) {
    array->value[i] = NULL;
  }
}

//------------------------------------------------------------------------------
// ���������� �������� � ����� �������
void AppendArray(Array* array, Value* value) {
  if(array->len < maxLen) {
    array->value[array->len++] = value;
  } else {
    perror("Array Overflow\n");
    exit(-1);
  }
}

//------------------------------------------------------------------------------
// �������� �������� �� ������ ������� � ��� �����������
Value* DeleteTailOfArray(Array* array) {
  if(array->len <= 0) {
    return NULL;   // �������� �����������
  }
  Value* value = array->value[array->len];
  array->value[array->len--] = NULL;
  return value;
}

//------------------------------------------------------------------------------
// �������� ���� ��������� ������� (������� �� ������)
void EmptyArray(Array* array) {
  for(int i = 0; i < array->len; ++i) {
    free(array->value[i]);
  }
  array->len = 0;
}

//------------------------------------------------------------------------------
// ����� �������� ���������� ��������, �� ������� ����
void OutCurrentArrayValue(FILE* file, Value* value) {
  if(value == NULL) { // ������� �����������
    fprintf(file, "Element is absent! ");
  } else {
    OutValue<value>(file);
  }
}

//------------------------------------------------------------------------------
// ����� ��������� ������� � ��������� ����, �������
// ������ ���� ������������� ������
void OutArrayValues(FILE* file, Array* array) {
  if(array->len == 0) {
    fprintf(file, "Empty Array of Values\n");
    return;
  }
  fprintf(file, "Array of Values is:\n");
  for(int i = 0; i < array->len; ++i) {
    fprintf(file, "    ");
    OutCurrentArrayValue(file, array->value[i]);
    fprintf(file, "\n");
  }
}
