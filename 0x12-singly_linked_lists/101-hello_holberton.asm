section .data
    LC0 db "Hello, Holberton", 0

section .text
    global print_string
    extern puts

print_string:
    push rbp
    mov rbp, rsp
    lea rdi, [LC0]
    call puts
    nop
    pop rbp
    ret

global main
extern print_string

main:
    push rbp
    mov rbp, rsp
    call print_string
    mov eax, 0
    pop rbp
    ret
