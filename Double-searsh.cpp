#include "pch.h"
#include <iostream>
using namespace std;

int Search(int a[], int left, int right, int k){
  int m = 0;
  while (1){
    m = (left + right) / 2;
    if (k < a[m])                      // если искомое меньше значения в ячейке
      right = m - 1;                     // смещаем правую границу поиска
    else if (k > a[m])                  // если искомое больше значения в ячейке
      left = m + 1;                    // смещаем левую границу поиска32
    else                         // иначе (значения равны)
      return m;                       // функция возвращает индекс ячейки
    if (left > right)                 // если границы сомкнулись 
      return -1;
  }}
int main(){
  setlocale(LC_ALL, "rus");
  const int SIZE = 20;
  int array[SIZE] = {};
  int key = 0;
  int index = 0;                        // индекс ячейки с искомым значением
  for (int i = 0; i < SIZE; i++) {                 // заполняем и показываем массив
    array[i] = i + 1;
  }
                                  //cout << array[i] << " ; ";}
  cout << "Введите любое число от 1 до 20: ";
  cin >> key;
  index = Search(array, 0, SIZE, key);
  if (index >= 0)
    cout << "Индекс ячейки: " << index << endl;
  else
    cout << "Error!" <<endl;
  return 0;}
