#ifndef CPP2_S21_CONTAINERS_1_SRC_S21_QUEUE_S21_QUEUE_H_
#define CPP2_S21_CONTAINERS_1_SRC_S21_QUEUE_S21_QUEUE_H_

#include "../list/s21_list.h"

namespace s21 {
template <class T>
class queue {
 private:
  list<T> base;

 public:
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using size_type = size_t;

  // member func:
  queue() : base(){};
  queue(std::initializer_list<value_type> const &items) : base(items){};
  queue(const queue &q) : base(q.base){};
  queue(queue &&q) : base(std::move(q.base)){};
  ~queue(){};
  queue &operator=(queue &&q);
  queue &operator=(const queue &q);
  // Queue Element access:
  const_reference front() { return base.front(); };
  const_reference back() { return base.back(); };
  // Queue Capacity:
  bool empty() { return base.empty(); };
  size_type size() { return base.size(); };
  // Queue Modifiers:
  void push(const_reference value);
  void pop();
  void swap(queue &other);

  template <typename... Args>
  void insert_many_back(Args &&...args);
};
};  // namespace s21

#include "s21_queue.tpp"

#endif  // CPP2_S21_CONTAINERS_1_SRC_S21_QUEUE_S21_QUEUE_H_
