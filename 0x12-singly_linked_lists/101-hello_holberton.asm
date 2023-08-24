section .data
    hello db "Hello, Holberton", 10, 0  ; Null-terminated string with newline

section .text
    global main
    extern printf

main:
    push rdi            ; Preserve registers
    push rsi
    lea rdi, [hello]    ; Load address of the string
    xor rax, rax        ; Clear RAX for printf return value
    call printf         ; Call printf
    pop rsi             ; Restore registers
    pop rdi
    ret                 ; Return from main
