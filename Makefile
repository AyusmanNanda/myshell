shell:
	gcc -o myshell src/main.c
	chmod +x ./myshell
	./myshell

clean:
	rm -r myshell

