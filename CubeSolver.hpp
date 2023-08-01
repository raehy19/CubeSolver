
#pragma once
#ifndef CUBESOLVER_HPP
# define CUBESOLVER_HPP

#include <iostream>

typedef enum {
	a = 1,
	b,
	c,
	d,
	e,
	f
} t_color;

typedef struct s_cube_data {
	t_color	UP_l_b;
	t_color	UP_r_b;
	t_color	UP_l_f;
	t_color	UP_r_f;

	t_color	DOWN_l_b;
	t_color	DOWN_r_b;
	t_color	DOWN_l_f;
	t_color	DOWN_r_f;

	t_color	FRONT_l_u;
	t_color	FRONT_r_u;
	t_color	FRONT_l_d;
	t_color	FRONT_r_d;

	t_color	BACK_l_u;
	t_color	BACK_r_u;
	t_color	BACK_l_d;
	t_color	BACK_r_d;

	t_color	LEFT_u_f;
	t_color	LEFT_u_b;
	t_color	LEFT_d_f;
	t_color	LEFT_d_b;

	t_color	RIGHT_u_f;
	t_color	RIGHT_u_b;
	t_color	RIGHT_d_f;
	t_color	RIGHT_d_b;

} t_cube_data;

#endif
