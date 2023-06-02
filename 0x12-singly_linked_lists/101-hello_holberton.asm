section .data	;data section, initialized variables

	msg db 'Hello, Holberton', 0 ;null terminated string 'message'
	frmt db '%s', 0 ;format string which is null terminated
	newline db 10, 0 ;newline string

section .text
	extern printf  ; the C function to be called

global main
main:
	sub rsp, 8	;alignes the stack
	mov rdi, fmt
	mov rsi, msg
	xor eax, eax
	call printf

	mov rdi, newline
	xor eax, eax
	call printf

	add rsp, 8	;restores the stack
	xor eax, eax
	ret
