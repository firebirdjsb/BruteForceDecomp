/* Native i686 reference for the 65-byte original 0x002EBEA0 body.
 * The runner checks the assembled body SHA-256 BEFORE executing the binary.
 * Only the surrounding trampoline uses a host test ABI. No game is loaded. */
.intel_syntax noprefix
/* Same no-handler i686 COFF feature declaration emitted by Clang for a C
 * translation unit. SafeSEH remains enabled; this object installs no handler. */
.def @feat.00;
.scl 3;
.type 0;
.endef
.globl @feat.00
@feat.00 = 1
.text
.p2align 2
.globl _bf_stack_probe_native_begin
.globl _bf_stack_probe_native_end
_bf_stack_probe_native_begin:
    test eax, eax
    je .Lsmall_ret
    cmp eax, 0x1000
    jae .Lpages
    neg eax
    /* 2ebead: ADD EAX,ESP, r32<-r/m32 form. Clang otherwise chooses 01 e0. */
    .byte 0x03, 0xc4
    add eax, 4
    test dword ptr [eax], eax
    xchg esp, eax
    mov eax, dword ptr [eax]
    push eax
.Lsmall_ret:
    ret
.Lpages:
    push ecx
    lea ecx, [esp + 8]
.Lprobe:
    sub ecx, 0x1000
    sub eax, 0x1000
    test dword ptr [ecx], eax
    cmp eax, 0x1000
    jae .Lprobe
    /* 2ebed2: SUB ECX,EAX, original 2b /r direction, not equivalent 29 c1. */
    .byte 0x2b, 0xc8
    /* 2ebed4: MOV EAX,ESP, original 8b /r direction, not equivalent 89 e0. */
    .byte 0x8b, 0xc4
    test dword ptr [ecx], eax
    /* 2ebed8: MOV ESP,ECX, original 8b /r direction, not equivalent 89 cc. */
    .byte 0x8b, 0xe1
    mov ecx, dword ptr [eax]
    mov eax, dword ptr [eax + 4]
    push eax
    ret
_bf_stack_probe_native_end:

/* cdecl(input_state*, output_state*), both arrays have six DWORD fields.
 * The original helper preserves EBX/EDX/ESI/EDI/EBP. EBX retains the normal
 * host stack; EDX retains the output address while ESP points into test memory.
 * All instructions between helper return and PUSHFD are MOV/LEA only. */
.p2align 2
.globl _bf_stack_probe_native_run
.globl _bf_stack_probe_native_resume
_bf_stack_probe_native_run:
    push ebx
    push esi
    push edi
    push ebp
    mov ebx, esp
    mov esi, dword ptr [ebx + 20]
    mov edx, dword ptr [ebx + 24]
    push dword ptr [esi + 16]
    popfd
    mov eax, dword ptr [esi]
    mov ecx, dword ptr [esi + 4]
    mov esp, dword ptr [esi + 8]
    lea esp, [esp + 4]
    call _bf_stack_probe_native_begin
_bf_stack_probe_native_resume:
    mov dword ptr [edx], eax
    mov dword ptr [edx + 4], ecx
    mov dword ptr [edx + 8], esp
    mov esp, ebx
    pushfd
    pop dword ptr [edx + 16]
    lea eax, [_bf_stack_probe_native_resume]
    mov dword ptr [edx + 12], eax
    pop ebp
    pop edi
    pop esi
    pop ebx
    cld
    ret
