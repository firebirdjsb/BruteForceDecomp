.section .text
.code32
.global _start, normal_return, alternate_return
_start:
    # Read one fixed-size request from the regular-file input.
    mov $3, %eax
    xor %ebx, %ebx
    mov $request, %ecx
    mov $48, %edx
    int $0x80
    test %eax, %eax
    jz done
    cmp $48, %eax
    jne failed

    mov $3, %eax
    xor %ebx, %ebx
    mov $0x460000, %ecx
    mov $0x10000, %edx
    int $0x80
    cmp $0x10000, %eax
    jne failed

    pushl request+40
    popf
    mov request+4, %eax
    mov request+8, %ebx
    mov request+12, %ecx
    mov request+16, %edx
    mov request+20, %esi
    mov request+24, %edi
    mov request+28, %ebp
    mov %esp, host_stack
    mov request+32, %esp
    jmp *request+36

normal_return:
    movl $normal_return, result+32
    jmp returned
alternate_return:
    movl $alternate_return, result+32
returned:
    mov %eax, result+0
    mov %ebx, result+4
    mov %ecx, result+8
    mov %edx, result+12
    mov %esi, result+16
    mov %edi, result+20
    mov %ebp, result+24
    mov %esp, result+28
    mov host_stack, %esp
    pushf
    popl result+36
    cld

    mov $4, %eax
    mov $1, %ebx
    mov $result, %ecx
    mov $40, %edx
    int $0x80
    cmp $40, %eax
    jne failed

    mov $4, %eax
    mov $1, %ebx
    mov $0x460000, %ecx
    mov $0x10000, %edx
    int $0x80
    cmp $0x10000, %eax
    jne failed
    jmp _start

failed:
    mov $1, %ebx
    jmp exit
done:
    xor %ebx, %ebx
exit:
    mov $1, %eax
    int $0x80

.section .bss
.lcomm request, 48
.lcomm result, 40
.lcomm host_stack, 4
