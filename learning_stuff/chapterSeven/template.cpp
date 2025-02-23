#include <iostream>

// Обобщенная функция
template<class X> void show(X arg)
{
  std::cout << arg << std::endl;
}

int main()
{
  // Вызов обобщенной функции с символьным аргументом:
  show('A');
  // Вызов обобщенной функции с числовым аргументом:
  show(123);
  // Вызов обобщенной функции с текстовым аргументом:
  show("Text");

  return 0;
}
