
#include "Cube.hpp"

// Orthodox Canonical
Cube::Cube()
    : _up_l_b(a), _up_r_b(a), _up_l_f(a), _up_r_f(a), _down_l_b(b),
      _down_r_b(b), _down_l_f(b), _down_r_f(b), _front_l_u(c), _front_r_u(c),
      _front_l_d(c), _front_r_d(c), _back_l_u(d), _back_r_u(d), _back_l_d(d),
      _back_r_d(d), _left_u_f(e), _left_u_b(e), _left_d_f(e), _left_d_b(e),
      _right_u_f(f), _right_u_b(f), _right_d_f(f), _right_d_b(f) {}

Cube::Cube(const Cube &cube)
    : _up_l_b(cube._up_l_b), _up_r_b(cube._up_r_b), _up_l_f(cube._up_l_f),
      _up_r_f(cube._up_r_f), _down_l_b(cube._down_l_b),
      _down_r_b(cube._down_r_b), _down_l_f(cube._down_l_f),
      _down_r_f(cube._down_r_f), _front_l_u(cube._front_l_u),
      _front_r_u(cube._front_r_u), _front_l_d(cube._front_l_d),
      _front_r_d(cube._front_r_d), _back_l_u(cube._back_l_u),
      _back_r_u(cube._back_r_u), _back_l_d(cube._back_l_d),
      _back_r_d(cube._back_r_d), _left_u_f(cube._left_u_f),
      _left_u_b(cube._left_u_b), _left_d_f(cube._left_d_f),
      _left_d_b(cube._left_d_b), _right_u_f(cube._right_u_f),
      _right_u_b(cube._right_u_b), _right_d_f(cube._right_d_f),
      _right_d_b(cube._right_d_b) {}

Cube &Cube::operator=(const Cube &cube) {
  if (this != &cube)
    (*this) = cube;
  return (*this);
}

Cube::~Cube() {}

// Display
void Cube::Display() {
  std::cout << "::::: CUBE status :::::" << std::endl;
  std::cout << "UP :    " << this->_up_l_b << this->_up_r_b << this->_up_l_f
            << this->_up_r_f << std::endl;
  std::cout << "DOWN :  " << this->_down_l_b << this->_down_r_b
            << this->_down_l_f << this->_down_r_f << std::endl;
  std::cout << "FRONT : " << this->_front_l_u << this->_front_r_u
            << this->_front_l_d << this->_front_r_d << std::endl;
  std::cout << "BACK :  " << this->_back_l_u << this->_back_r_u
            << this->_back_l_d << this->_back_r_d << std::endl;
  std::cout << "LEFT :  " << this->_left_u_f << this->_left_u_b
            << this->_left_d_f << this->_left_d_b << std::endl;
  std::cout << "RIGHT : " << this->_right_u_f << this->_right_u_b
            << this->_right_d_f << this->_right_d_b << std::endl;
  std::cout << ":::::::::::::::::::::::" << std::endl;
}

// Check
bool Cube::Check() {
  if ( // up
      this->_up_l_b != this->_up_r_b || this->_up_l_b != this->_up_l_f ||
      this->_up_l_b != this->_up_r_f ||
      // down
      this->_down_l_b != this->_down_r_b ||
      this->_down_l_b != this->_down_l_f ||
      this->_down_l_b != this->_down_r_f ||
      // front
      this->_front_l_u != this->_front_r_u ||
      this->_front_l_u != this->_front_l_d ||
      this->_front_l_u != this->_front_r_d ||
      // back
      this->_back_l_u != this->_back_r_u ||
      this->_back_l_u != this->_back_l_d ||
      this->_back_l_u != this->_back_r_d ||
      // left
      this->_left_u_f != this->_left_u_b ||
      this->_left_u_f != this->_left_d_f ||
      this->_left_u_f != this->_left_d_b ||
      // right
      this->_right_u_f != this->_right_u_b ||
      this->_right_u_f != this->_right_d_f ||
      this->_right_u_f != this->_right_d_b)
    return false;
  return true;
}

// Spin
void Cube::_spin_u_c() {
  t_color temp_up_l_b = this->_up_l_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_up_l_f = this->_up_l_f;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_front_l_u = this->_front_l_u;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_left_u_f = this->_left_u_f;
  t_color temp_left_u_b = this->_left_u_b;
  t_color temp_back_l_u = this->_back_l_u;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_right_u_f = this->_right_u_f;
  t_color temp_right_u_b = this->_right_u_b;

  this->_up_l_b = temp_up_l_f;
  this->_up_r_b = temp_up_l_b;
  this->_up_l_f = temp_up_r_f;
  this->_up_r_f = temp_up_r_b;
  this->_front_l_u = temp_right_u_f;
  this->_front_r_u = temp_right_u_b;
  this->_left_u_f = temp_front_l_u;
  this->_left_u_b = temp_front_r_u;
  this->_back_l_u = temp_left_u_f;
  this->_back_r_u = temp_left_u_b;
  this->_right_u_f = temp_back_r_u;
  this->_right_u_b = temp_back_l_u;
}

void Cube::_spin_u_cc() {
  t_color temp_up_l_b = this->_up_l_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_up_l_f = this->_up_l_f;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_front_l_u = this->_front_l_u;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_left_u_f = this->_left_u_f;
  t_color temp_left_u_b = this->_left_u_b;
  t_color temp_back_l_u = this->_back_l_u;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_right_u_f = this->_right_u_f;
  t_color temp_right_u_b = this->_right_u_b;

  this->_up_l_b = temp_up_r_b;
  this->_up_r_b = temp_up_r_f;
  this->_up_l_f = temp_up_l_b;
  this->_up_r_f = temp_up_l_f;
  this->_front_l_u = temp_left_u_b;
  this->_front_r_u = temp_left_u_f;
  this->_left_u_f = temp_back_l_u;
  this->_left_u_b = temp_back_r_u;
  this->_back_l_u = temp_right_u_b;
  this->_back_r_u = temp_right_u_f;
  this->_right_u_f = temp_front_l_u;
  this->_right_u_b = temp_front_r_u;
}

void Cube::_spin_d_c() {
  t_color temp_down_l_b = this->_down_l_b;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_down_l_f = this->_down_l_f;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_front_l_d = this->_front_l_d;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_left_d_f = this->_left_d_f;
  t_color temp_left_d_b = this->_left_d_b;
  t_color temp_back_l_d = this->_back_l_d;
  t_color temp_back_r_d = this->_back_r_d;
  t_color temp_right_d_f = this->_right_d_f;
  t_color temp_right_d_b = this->_right_d_b;

  this->_down_l_b = temp_down_r_b;
  this->_down_r_b = temp_down_r_f;
  this->_down_l_f = temp_down_l_b;
  this->_down_r_f = temp_down_l_f;
  this->_front_l_d = temp_left_d_b;
  this->_front_r_d = temp_left_d_f;
  this->_left_d_f = temp_back_l_d;
  this->_left_d_b = temp_back_r_d;
  this->_back_l_d = temp_right_d_b;
  this->_back_r_d = temp_right_d_f;
  this->_right_d_f = temp_front_l_d;
  this->_right_d_b = temp_front_r_d;
}

void Cube::_spin_d_cc() {
  t_color temp_down_l_b = this->_down_l_b;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_down_l_f = this->_down_l_f;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_front_l_d = this->_front_l_d;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_left_d_f = this->_left_d_f;
  t_color temp_left_d_b = this->_left_d_b;
  t_color temp_back_l_d = this->_back_l_d;
  t_color temp_back_r_d = this->_back_r_d;
  t_color temp_right_d_f = this->_right_d_f;
  t_color temp_right_d_b = this->_right_d_b;

  this->_down_l_b = temp_down_l_f;
  this->_down_r_b = temp_down_l_b;
  this->_down_l_f = temp_down_r_f;
  this->_down_r_f = temp_down_r_b;
  this->_front_l_d = temp_right_d_f;
  this->_front_r_d = temp_right_d_b;
  this->_left_d_f = temp_front_l_d;
  this->_left_d_b = temp_front_r_d;
  this->_back_l_d = temp_left_d_f;
  this->_back_r_d = temp_left_d_b;
  this->_right_d_f = temp_back_r_d;
  this->_right_d_b = temp_back_l_d;
}

void Cube::_spin_f_c() {
  t_color temp_front_l_u = this->_front_l_u;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_front_l_d = this->_front_l_d;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_up_l_f = this->_up_l_f;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_down_l_f = this->_down_l_f;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_right_u_f = this->_right_u_f;
  t_color temp_right_d_f = this->_right_d_f;
  t_color temp_left_u_f = this->_left_u_f;
  t_color temp_left_d_f = this->_left_d_f;

  this->_front_l_u = temp_front_l_d;
  this->_front_r_u = temp_front_l_u;
  this->_front_l_d = temp_front_r_d;
  this->_front_r_d = temp_front_r_u;
  this->_up_l_f = temp_left_d_f;
  this->_up_r_f = temp_left_u_f;
  this->_down_l_f = temp_right_d_f;
  this->_down_r_f = temp_right_u_f;
  this->_right_u_f = temp_up_l_f;
  this->_right_d_f = temp_up_r_f;
  this->_left_u_f = temp_down_l_f;
  this->_left_d_f = temp_down_r_f;
}

void Cube::_spin_f_cc() {
  t_color temp_front_l_u = this->_front_l_u;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_front_l_d = this->_front_l_d;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_up_l_f = this->_up_l_f;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_down_l_f = this->_down_l_f;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_right_u_f = this->_right_u_f;
  t_color temp_right_d_f = this->_right_d_f;
  t_color temp_left_u_f = this->_left_u_f;
  t_color temp_left_d_f = this->_left_d_f;

  this->_front_l_u = temp_front_r_u;
  this->_front_r_u = temp_front_r_d;
  this->_front_l_d = temp_front_l_u;
  this->_front_r_d = temp_front_l_d;
  this->_up_l_f = temp_right_u_f;
  this->_up_r_f = temp_right_d_f;
  this->_down_l_f = temp_left_u_f;
  this->_down_r_f = temp_left_d_f;
  this->_right_u_f = temp_down_r_f;
  this->_right_d_f = temp_down_l_f;
  this->_left_u_f = temp_up_r_f;
  this->_left_d_f = temp_up_l_f;
}

void Cube::_spin_b_c() {
  t_color temp_back_l_u = this->_back_l_u;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_back_l_d = this->_back_l_d;
  t_color temp_back_r_d = this->_back_r_d;
  t_color temp_up_l_b = this->_up_l_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_down_l_b = this->_down_l_b;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_right_u_b = this->_right_u_b;
  t_color temp_right_d_b = this->_right_d_b;
  t_color temp_left_u_b = this->_left_u_b;
  t_color temp_left_d_b = this->_left_d_b;

  this->_back_l_u = temp_back_r_u;
  this->_back_r_u = temp_back_r_d;
  this->_back_l_d = temp_back_l_u;
  this->_back_r_d = temp_back_l_d;
  this->_up_l_b = temp_right_u_b;
  this->_up_r_b = temp_right_d_b;
  this->_down_l_b = temp_left_u_b;
  this->_down_r_b = temp_left_d_b;
  this->_right_u_b = temp_down_r_b;
  this->_right_d_b = temp_down_l_b;
  this->_left_u_b = temp_up_r_b;
  this->_left_d_b = temp_up_l_b;
}

void Cube::_spin_b_cc() {
  t_color temp_back_l_u = this->_back_l_u;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_back_l_d = this->_back_l_d;
  t_color temp_back_r_d = this->_back_r_d;
  t_color temp_up_l_b = this->_up_l_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_down_l_b = this->_down_l_b;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_right_u_b = this->_right_u_b;
  t_color temp_right_d_b = this->_right_d_b;
  t_color temp_left_u_b = this->_left_u_b;
  t_color temp_left_d_b = this->_left_d_b;

  this->_back_l_u = temp_back_l_d;
  this->_back_r_u = temp_back_l_u;
  this->_back_l_d = temp_back_r_d;
  this->_back_r_d = temp_back_r_u;
  this->_up_l_b = temp_left_d_b;
  this->_up_r_b = temp_left_u_b;
  this->_down_l_b = temp_right_d_b;
  this->_down_r_b = temp_right_u_b;
  this->_right_u_b = temp_up_l_b;
  this->_right_d_b = temp_up_r_b;
  this->_left_u_b = temp_down_l_b;
  this->_left_d_b = temp_down_r_b;
}

void Cube::_spin_l_c() {
  t_color temp_left_u_f = this->_left_u_f;
  t_color temp_left_u_b = this->_left_u_b;
  t_color temp_left_d_f = this->_left_d_f;
  t_color temp_left_d_b = this->_left_d_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_back_r_d = this->_back_r_d;

  this->_left_u_f = temp_left_u_b;
  this->_left_d_f = temp_left_u_f;
  this->_left_d_b = temp_left_d_f;
  this->_left_u_b = temp_left_d_b;
  this->_up_r_b = temp_back_r_d;
  this->_up_r_f = temp_back_r_u;
  this->_front_r_u = temp_up_r_b;
  this->_front_r_d = temp_up_r_f;
  this->_down_r_b = temp_front_r_d;
  this->_down_r_f = temp_front_r_u;
  this->_back_r_u = temp_down_r_b;
  this->_back_r_d = temp_down_r_f;
}

void Cube::_spin_l_cc() {
  t_color temp_left_u_f = this->_left_u_f;
  t_color temp_left_u_b = this->_left_u_b;
  t_color temp_left_d_f = this->_left_d_f;
  t_color temp_left_d_b = this->_left_d_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_back_r_d = this->_back_r_d;

  this->_left_u_f = temp_left_d_f;
  this->_left_d_f = temp_left_d_b;
  this->_left_d_b = temp_left_u_b;
  this->_left_u_b = temp_left_u_f;
  this->_up_r_b = temp_front_r_u;
  this->_up_r_f = temp_front_r_d;
  this->_front_r_u = temp_down_r_f;
  this->_front_r_d = temp_down_r_b;
  this->_down_r_b = temp_back_r_u;
  this->_down_r_f = temp_back_r_d;
  this->_back_r_u = temp_up_r_f;
  this->_back_r_d = temp_up_r_b;
}

void Cube::_spin_r_c() {
  t_color temp_right_u_f = this->_right_u_f;
  t_color temp_right_u_b = this->_right_u_b;
  t_color temp_right_d_f = this->_right_d_f;
  t_color temp_right_d_b = this->_right_d_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_back_r_d = this->_back_r_d;

  this->_right_u_f = temp_right_d_f;
  this->_right_d_f = temp_right_d_b;
  this->_right_d_b = temp_right_u_b;
  this->_right_u_b = temp_right_u_f;
  this->_up_r_b = temp_front_r_u;
  this->_up_r_f = temp_front_r_d;
  this->_front_r_u = temp_down_r_f;
  this->_front_r_d = temp_down_r_b;
  this->_down_r_b = temp_back_r_u;
  this->_down_r_f = temp_back_r_d;
  this->_back_r_u = temp_up_r_f;
  this->_back_r_d = temp_up_r_b;
}

void Cube::_spin_r_cc() {
  t_color temp_right_u_f = this->_right_u_f;
  t_color temp_right_u_b = this->_right_u_b;
  t_color temp_right_d_f = this->_right_d_f;
  t_color temp_right_d_b = this->_right_d_b;
  t_color temp_up_r_b = this->_up_r_b;
  t_color temp_up_r_f = this->_up_r_f;
  t_color temp_front_r_u = this->_front_r_u;
  t_color temp_front_r_d = this->_front_r_d;
  t_color temp_down_r_b = this->_down_r_b;
  t_color temp_down_r_f = this->_down_r_f;
  t_color temp_back_r_u = this->_back_r_u;
  t_color temp_back_r_d = this->_back_r_d;

  this->_right_u_f = temp_right_u_b;
  this->_right_d_f = temp_right_u_f;
  this->_right_d_b = temp_right_d_f;
  this->_right_u_b = temp_right_d_b;
  this->_up_r_b = temp_back_r_d;
  this->_up_r_f = temp_back_r_u;
  this->_front_r_u = temp_up_r_b;
  this->_front_r_d = temp_up_r_f;
  this->_down_r_b = temp_front_r_d;
  this->_down_r_f = temp_front_r_u;
  this->_back_r_u = temp_down_r_b;
  this->_back_r_d = temp_down_r_f;
}

void Cube::Spin(std::string direction) {
  void (Cube::*spin[12])(void) = {
      &Cube::_spin_u_c, &Cube::_spin_u_cc, &Cube::_spin_d_c, &Cube::_spin_d_cc,
      &Cube::_spin_f_c, &Cube::_spin_f_cc, &Cube::_spin_b_c, &Cube::_spin_b_cc,
      &Cube::_spin_l_c, &Cube::_spin_l_cc, &Cube::_spin_r_c, &Cube::_spin_r_cc};

  if (direction == "uc")
    (this->*spin[0])();
  else if (direction == "ucc")
    (this->*spin[1])();
  else if (direction == "dc")
    (this->*spin[2])();
  else if (direction == "dcc")
    (this->*spin[3])();
  else if (direction == "fc")
    (this->*spin[4])();
  else if (direction == "fcc")
    (this->*spin[5])();
  else if (direction == "bc")
    (this->*spin[6])();
  else if (direction == "bcc")
    (this->*spin[7])();
  else if (direction == "lc")
    (this->*spin[8])();
  else if (direction == "lcc")
    (this->*spin[9])();
  else if (direction == "rc")
    (this->*spin[10])();
  else if (direction == "rcc")
    (this->*spin[11])();
}
