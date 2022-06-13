#include <criterion/criterion.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);

Test(getlines, five_lines)
{
	FILE *fp = fopen("test.gnl", "r");

	cr_assert_eq();
	cr_assert_eq();
	cr_assert_str_eq();
}
