

#pragma once
#ifndef CUBE_HPP
#define CUBE_HPP

#include <iostream>
#include <cmath>

typedef enum {
	a = 1,
	b,
	c,
	d,
	e,
	f
} t_color;

class Cube {
private:
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
public:
	// Orthodox Canonical
	Cube();

	Cube(const Cube &cube);

	Cube &operator=(const Cube &cube);

	~Cube();

};

#endif
