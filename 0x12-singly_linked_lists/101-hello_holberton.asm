section .data
	hello db "Hello, Holberton", 0
	fmt db "%s\n", 0

section .text
	global main
	extern printf

main:
	push rdi            ; Preserve registers
	push rsi
	lea rsi, [hello]    ; Load address of the string
	lea rdi, [fmt]      ; Load format string
	xor rax, rax        ; Clear RAX for printf return value
	call printf         ; Call printf
	pop rsi             ; Restore registers
	pop rdi
	ret                 ; Return from main
