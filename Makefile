shell:
	gcc -o myshell src/main.c src/input.c
	chmod +x ./myshell
	./myshell

clean:
	rm -r myshell

