#include <greeter/make_greeting.h>

#include <iostream>

int main(int argc, char **argv) {

  if (greeter::make_greeting("Tobi") != "Hello Tobi!") {
    return 1;
  } else {
    std::cout << greeter::make_greeting("Tobi") << std::endl;
    return 0;
  }
}
