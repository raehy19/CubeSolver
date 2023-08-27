

#pragma once
#ifndef CUBE_HPP
#define CUBE_HPP

#include <cmath>
#include <iostream>

typedef enum { a = 1, b, c, d, e, f } t_color;

class Cube {
private:
  // color
  t_color _up_l_b;
  t_color _up_r_b;
  t_color _up_l_f;
  t_color _up_r_f;
  t_color _down_l_b;
  t_color _down_r_b;
  t_color _down_l_f;
  t_color _down_r_f;
  t_color _front_l_u;
  t_color _front_r_u;
  t_color _front_l_d;
  t_color _front_r_d;
  t_color _back_l_u;
  t_color _back_r_u;
  t_color _back_l_d;
  t_color _back_r_d;
  t_color _left_u_f;
  t_color _left_u_b;
  t_color _left_d_f;
  t_color _left_d_b;
  t_color _right_u_f;
  t_color _right_u_b;
  t_color _right_d_f;
  t_color _right_d_b;

  // spin`
  void _spin_u_c(void);

  void _spin_u_cc(void);

  void _spin_d_c(void);

  void _spin_d_cc(void);

  void _spin_f_c(void);

  void _spin_f_cc(void);

  void _spin_b_c(void);

  void _spin_b_cc(void);

  void _spin_l_c(void);

  void _spin_l_cc(void);

  void _spin_r_c(void);

  void _spin_r_cc(void);

public:
  // Orthodox Canonical
  Cube();

  Cube(const Cube &cube);

  Cube &operator=(const Cube &cube);

  ~Cube();

  // Display
  void Display(void);

  // Check
  bool Check(void);

  // Spin Select
  void Spin(std::string direction);
};

#endif
