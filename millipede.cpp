#include <iostream>
#include <string>
#include <array>

#ifndef MILLIPEDE_SIZE
# define MILLIPEDE_SIZE 20
#endif

using namespace std::string_literals;

static const std::array<std::string, 8> offsets = {
  "  "s, " "s, ""s, " "s, "  "s, "   "s, "    "s, "   "s
};

template<int N>
struct Millipede
{
  static const std::string value;
};

template<>
const std::string Millipede<-1>::value = "    ╚⊙ ⊙╝\n"s;

template<int N>
const std::string Millipede<N>::value = Millipede<N-1>::value + offsets[N%8] + "╚═(███)═╝\n"s;

int main()
{
  std::cout << Millipede<MILLIPEDE_SIZE>::value << std::endl;
  return 0;
}
