#include "Cube.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  Cube cube;

  cube.Display();

  cube.Spin("uc");
  cube.Display();
  std::cout << "IsSolved : " << cube.IsSolved() << std::endl;

  cube.Spin("ucc");
  cube.Display();
  std::cout << "IsSolved : " << cube.IsSolved() << std::endl;

  cube.Spin("dc");
  cube.Display();
  std::cout << "IsSolved : " << cube.IsSolved() << std::endl;

  cube.Spin("dcc");
  cube.Display();
  std::cout << "IsSolved : " << cube.IsSolved() << std::endl;
  return (0);
}