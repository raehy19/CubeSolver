
#include "CubeSolver.h"

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

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1) ;

	printf("input :\n") ;
	for (int i = 1; i < argc ; ++i) {
		printf("%d\n", atoi(argv[i]));
	}

	t_cube_data	*cube;

	cube = malloc(sizeof(t_cube_data));
	if (!cube)
		return (2);
	init_cube(cube);

	free(cube);
	return (0);
}
