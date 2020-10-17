all:
	gcc -o story story.c -Wall -Wextra -Werror

run:
	@gcc -o story story.c -Wall -Wextra -Werror
	@./story || true
	@rm -f story

clean:
	rm -f story