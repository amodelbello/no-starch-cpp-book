#include <cstdio>

struct Book {
  char name[256];
  int year;
  int pages;
  bool hardcover;
};

enum class Race {
  Dinan,
  Teklan,
  Ivyn,
  Moiran,
  Camite,
  Julian,
  Aidan,
};

class ClocOfTheLongNow {
private:
    int year;
public:
    explicit ClocOfTheLongNow(int year_in) {
      if (!set_year(year_in)) {
        year = 2019;
      }
    }
    void add_year() {
      year++;
    }

    bool set_year(int new_year) {
      if (new_year < 2019) return false;
      year = new_year;
      return true;
    }

    [[nodiscard]] int get_year() const {
      return year;
    }
};

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide,
};

struct Calculator {
    Calculator(Operation op) {
      operation = op;
    }

    int calculate(int a, int b) {
      switch(operation) {
        case Operation::Add:
          return a + b;
          break;
        case Operation::Subtract:
          return a - b;
          break;
        case Operation::Multiply:
          return a * b;
          break;
        case Operation::Divide:
          return a / b;
          break;
        default:
          return 0;
          break;
      }
    }
private:
    Operation operation;
};

int main() {
  Calculator plus{Operation::Add};
  int added = plus.calculate(44, 88);
  printf("This is added: %d\n", added);

  Calculator divide{Operation::Divide};
  int divided = divide.calculate(99, 10);
  printf("This is divided: %d\n", divided);

//  ClocOfTheLongNow hello(2009);
//  ClocOfTheLongNow clock{2009};
//  clock.set_year(2019);
//  clock.add_year();
//
//  printf("year: %d\n", clock.get_year());
//  clock.add_year();
//  printf("year: %d\n", clock.get_year());
//
//  Book neuromancer{};
//  neuromancer.pages = 271;
//  printf("Neuromancer has %d pages.\n", neuromancer.pages);
//
//  Race race = Race::Aidan;
//
//  switch (race) {
//    case Race::Dinan: {
//      printf("You work hard.");
//    } break;
//    case Race::Aidan: {
//      printf("What an enigma.\n");
//    } break;
//    default: {
//      printf("Error: unknown race!");
//    }
//  }
//  size_t size_c = sizeof (char);
//  printf("hey: %zu\n", size_c);
//
//  int my_array[] = { 1, 2, 3, 4};
//
//  printf("some int: %d\n", my_array[2]);
//
//  for (size_t item : my_array) {
//    printf("%d\n", item);
//  }
//
//  size_t n = sizeof(my_array) / sizeof(int);
//  printf("Size of the array: %d\n", n);
//  printf("Size of int: %lu\n", sizeof(int));
}