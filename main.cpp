#include "Cube.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  Cube cube;

  cube.Display();

  cube.Spin("uc");
  cube.Display();

  cube.Spin("ucc");
  cube.Display();

  cube.Spin("dc");
  cube.Display();

  cube.Spin("dcc");
  cube.Display();
  return (0);
}