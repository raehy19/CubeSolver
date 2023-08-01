
#include "Cube.hpp"

Cube::Cube() :
		_up_l_b(a),
		_up_r_b(a),
		_up_l_f(a),
		_up_r_f(a),
		_down_l_b(b),
		_down_r_b(b),
		_down_l_f(b),
		_down_r_f(b),
		_front_l_u(c),
		_front_r_u(c),
		_front_l_d(c),
		_front_r_d(c),
		_back_l_u(d),
		_back_r_u(d),
		_back_l_d(d),
		_back_r_d(d),
		_left_u_f(e),
		_left_u_b(e),
		_left_d_f(e),
		_left_d_b(e),
		_right_u_f(f),
		_right_u_b(f),
		_right_d_f(f),
		_right_d_b(f) {
}

Cube::Cube(const Cube &cube) :
		_up_l_b(cube._up_l_b),
		_up_r_b(cube._up_r_b),
		_up_l_f(cube._up_l_f),
		_up_r_f(cube._up_r_f),
		_down_l_b(cube._down_l_b),
		_down_r_b(cube._down_r_b),
		_down_l_f(cube._down_l_f),
		_down_r_f(cube._down_r_f),
		_front_l_u(cube._front_l_u),
		_front_r_u(cube._front_r_u),
		_front_l_d(cube._front_l_d),
		_front_r_d(cube._front_r_d),
		_back_l_u(cube._back_l_u),
		_back_r_u(cube._back_r_u),
		_back_l_d(cube._back_l_d),
		_back_r_d(cube._back_r_d),
		_left_u_f(cube._left_u_f),
		_left_u_b(cube._left_u_b),
		_left_d_f(cube._left_d_f),
		_left_d_b(cube._left_d_b),
		_right_u_f(cube._right_u_f),
		_right_u_b(cube._right_u_b),
		_right_d_f(cube._right_d_f),
		_right_d_b(cube._right_d_b) {
}

Cube &Cube::operator=(const Cube &cube) {
	if (this != &cube)
		(*this) = cube;
	return (*this);
}

Cube::~Cube() {
}