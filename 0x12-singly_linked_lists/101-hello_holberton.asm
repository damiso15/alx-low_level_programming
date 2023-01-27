section .data
	msg db "Hello, Holberton", 10		; 10 is the ASCII code for a new line (LF)
	msglen: equ $ - msg

section .text
	global main

main:
	mov rax, 1		; write(
	mov rdi, 1		;	STDOUT_FILENO;
	mov rsi, msg		;	"Hello, Holberton\n"
	mov rdx, msglen		;	sizeof("Hello, Holberton!\n")
	syscall			; );

	mov rax, 60		; exit (
	mov rdi, 0		;	EXIT_SUCCESS
	syscall			; );
