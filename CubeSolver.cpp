
#include "CubeSolver.hpp"

void	init_cube(t_cube_data *cube)
{
	cube->UP_l_b = a;
	cube->UP_r_b = a;
	cube->UP_l_f = a;
	cube->UP_r_f = a;

	cube->DOWN_l_b = b;
	cube->DOWN_r_b = b;
	cube->DOWN_l_f = b;
	cube->DOWN_r_f = b;

	cube->FRONT_l_u = c;
	cube->FRONT_r_u = c;
	cube->FRONT_l_d = c;
	cube->FRONT_r_d = c;

	cube->BACK_l_u = d;
	cube->BACK_r_u = d;
	cube->BACK_l_d = d;
	cube->BACK_r_d = d;

	cube->LEFT_u_f = e;
	cube->LEFT_u_b = e;
	cube->LEFT_d_f = e;
	cube->LEFT_d_b = e;

	cube->RIGHT_u_f = f;
	cube->RIGHT_u_b = f;
	cube->RIGHT_d_f = f;
	cube->RIGHT_d_b = f;
}

void	print_cube(t_cube_data *cube)
{
	printf("::::: CUBE status :::::\n");
	printf("UP :\n%d %d\n%d %d\n",cube->UP_l_b, cube->UP_r_b, cube->UP_l_f, cube->UP_r_f);
	printf("DOWN :\n%d %d\n%d %d\n",cube->DOWN_l_b, cube->DOWN_r_b, cube->DOWN_l_f, cube->DOWN_r_f);
	printf("FRONT :\n%d %d\n%d %d\n",cube->FRONT_l_u, cube->FRONT_r_u, cube->FRONT_l_d, cube->FRONT_r_d);
	printf("BACK :\n%d %d\n%d %d\n",cube->BACK_l_u, cube->BACK_r_u, cube->BACK_l_d, cube->BACK_r_d);
	printf("LEFT :\n%d %d\n%d %d\n",cube->LEFT_u_f, cube->LEFT_u_b, cube->LEFT_d_f, cube->LEFT_d_b);
	printf("RIGHT :\n%d %d\n%d %d\n",cube->RIGHT_u_f, cube->RIGHT_u_b, cube->RIGHT_d_f, cube->RIGHT_d_b);
	printf(":::::::::::::::::::::::\n");
}

void	spin_cube_L_c(t_cube_data *cube)
{
	t_color	temp_LEFT_u_f = cube->LEFT_u_f;
	t_color	temp_LEFT_u_b = cube->LEFT_u_b;
	t_color	temp_LEFT_d_f = cube->LEFT_d_f;
	t_color	temp_LEFT_d_b = cube->LEFT_d_b;

	t_color	temp_UP_l_b = cube->UP_l_b;
	t_color	temp_UP_l_f = cube->UP_l_f;
	t_color	temp_FRONT_l_u = cube->FRONT_l_u;
	t_color	temp_FRONT_l_d = cube->FRONT_l_d;
	t_color	temp_DOWN_l_b = cube->DOWN_l_b;
	t_color	temp_DOWN_l_f = cube->DOWN_l_f;
	t_color	temp_BACK_l_u = cube->BACK_l_u;
	t_color	temp_BACK_l_d = cube->BACK_l_d;

	cube->LEFT_u_f = temp_LEFT_u_b;
	cube->LEFT_d_f = temp_LEFT_u_f;
	cube->LEFT_d_b = temp_LEFT_d_f;
	cube->LEFT_u_b = temp_LEFT_d_b;

	cube->UP_l_b = temp_BACK_l_d;
	cube->UP_l_f = temp_BACK_l_u;
	cube->FRONT_l_u = temp_UP_l_b;
	cube->FRONT_l_d = temp_UP_l_f;
	cube->DOWN_l_b = temp_FRONT_l_d;
	cube->DOWN_l_f = temp_FRONT_l_u;
	cube->BACK_l_u = temp_DOWN_l_b;
	cube->BACK_l_d = temp_DOWN_l_f;
}

void	spin_cube_R_cc(t_cube_data *cube)
{
	t_color	temp_RIGHT_u_f = cube->RIGHT_u_f;
	t_color	temp_RIGHT_u_b = cube->RIGHT_u_b;
	t_color	temp_RIGHT_d_f = cube->RIGHT_d_f;
	t_color	temp_RIGHT_d_b = cube->RIGHT_d_b;

	t_color	temp_UP_r_b = cube->UP_r_b;
	t_color	temp_UP_r_f = cube->UP_r_f;
	t_color	temp_FRONT_r_u = cube->FRONT_r_u;
	t_color	temp_FRONT_r_d = cube->FRONT_r_d;
	t_color	temp_DOWN_r_b = cube->DOWN_r_b;
	t_color	temp_DOWN_r_f = cube->DOWN_r_f;
	t_color	temp_BACK_r_u = cube->BACK_r_u;
	t_color	temp_BACK_r_d = cube->BACK_r_d;

	cube->RIGHT_u_f = temp_RIGHT_u_b;
	cube->RIGHT_d_f = temp_RIGHT_u_f;
	cube->RIGHT_d_b = temp_RIGHT_d_f;
	cube->RIGHT_u_b = temp_RIGHT_d_b;

	cube->UP_r_b = temp_BACK_r_d;
	cube->UP_r_f = temp_BACK_r_u;
	cube->FRONT_r_u = temp_UP_r_b;
	cube->FRONT_r_d = temp_UP_r_f;
	cube->DOWN_r_b = temp_FRONT_r_d;
	cube->DOWN_r_f = temp_FRONT_r_u;
	cube->BACK_r_u = temp_DOWN_r_b;
	cube->BACK_r_d = temp_DOWN_r_f;
}

int	main(int argc, char **argv)
{
	t_cube_data	*cube;

	cube = malloc(sizeof(t_cube_data));
	if (!cube)
		return (2);
	init_cube(cube);
	print_cube(cube);
	spin_cube_L_c(cube);
	print_cube(cube);
	spin_cube_R_cc(cube);
	print_cube(cube);

	free(cube);

	(void)argc;
	(void)argv;
	return (0);
}
