section .data
message: db 'Hello Holberton', 0x00
format:  db '%s', 0x0A, 0x00

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	mov rdi, format
	mov rsi, text
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xoe eax, eax
	ret
