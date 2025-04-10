# s21_containers (C++ STL-like containers)

Собственная реализация аналогов STL-контейнеров на C++17 с расширенными возможностями

## Реализованные контейнеры

| Контейнер      | Описание |
|---------------|----------|
| `s21::vector` | Динамический массив с автоматическим изменением размера |
| `s21::array`  | Статический массив фиксированного размера |
| `s21::list`   | Двусвязный список |
| `s21::map`    | Ассоциативный контейнер (красно-черное дерево) |
| `s21::set`    | Множество уникальных элементов |
| `s21::queue`  | Очередь (FIFO) |
| `s21::stack`  | Стек (LIFO) |


**Дополнительные возможности:**
- Пакетная вставка элементов `insert_many()`
- Полная поддержка итераторов
- Гарантии безопасности исключений
- Совместимость с STL-алгоритмами

## Установка и использование

### Требования
- Компилятор с поддержкой C++17 (GCC/Clang)
- CMake 3.10+
- Google Test (для тестов)

```bash
git clone https://github.com/yourusername/s21_containers.git
cd s21_containers

make test        # Запуск unit-тестов
make gcov_report # Отчет о покрытии кода
make valgrind    # Проверка на утечки памяти
make apclang      # Форматирование кода (clang-format)
make clean       # Очистка сборки
```

## Примеры использования
```cpp
#include "s21_vector.h"

s21::vector<int> vec = {1, 2, 3};
vec.push_back(4);
vec.insert_many(vec.begin(), 5, 6, 7);

for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
}
```
## Тестирование и качество кода

- Покрытие тестами >80%

- Проверка стиля кода (Google Style)

- Статический анализ (cppcheck)

- Проверка памяти (valgrind)