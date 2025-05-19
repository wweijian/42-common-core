all:
	clear
	cc -Wall -Werror -Wextra get_next_line_bonus.c get_next_line_utils_bonus.c main.c -D BUFFER_SIZE=5
	./a.out

valgrind:
	clear
	cc -Wall -Werror -Wextra -g -O0 -D BUFFER_SIZE=5 get_next_line_bonus.c get_next_line_utils_bonus.c main.c 
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out 

clean:
	rm -a.out

.PHONY: valgrind