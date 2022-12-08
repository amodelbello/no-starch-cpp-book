#include <cstdio>

struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
      new_element->next = next;
      next = new_element;
    }
    char prefix[2];
    short operating_number;
};

struct College {
    char name[256];
};
void print_name(College* college_ptr) {
  printf("%s College\n", college_ptr->name);
}

void print_names(College *colleges, size_t n_colleges) {
  for (size_t i = 0; i < n_colleges; i++) {
    printf("%s College\n", colleges[i].name);
  }
}

class ClocOfTheLongNow {
private:
    int year;
public:
    ClocOfTheLongNow() {
      year = 2019;
    }
    explicit ClocOfTheLongNow(int year) {
      if (!set_year(year)) {
        this->year = 2019;
      }
    }
    void add_year() {
      year++;
    }

    bool set_year(int year) {
      if (year < 2019) return false;
      return true;
    }

    [[nodiscard]] int get_year() const {
      return year;
    }
};

int main() {
  College best_colleges[] = {"Magdalen", "Nuffield", "Kellogg"};
  print_name(best_colleges);
  print_names(best_colleges, sizeof(best_colleges) / sizeof(College));

  int key_to_the_universe[] = {3, 6, 9};
  int *key_ptr = key_to_the_universe;

  ClocOfTheLongNow clock;
  ClocOfTheLongNow* clock_ptr = &clock;
  clock_ptr->set_year(2020);
  printf("Address of clock: %p\n", clock_ptr);
  printf("Value of clock's year: %d\n", clock_ptr->get_year());


  int* gettysburg_address = nullptr;
  printf("The value of gettysburg_address is %p.\n", gettysburg_address);

  int gettysburg{};
  printf("gettysburg: %d\n", gettysburg);
  gettysburg_address = &gettysburg;
  printf("&gettysburg: %p\n", gettysburg_address);

  *gettysburg_address = 17325;
  printf("gettysburg: %d\n", gettysburg);

  return 0;
}
