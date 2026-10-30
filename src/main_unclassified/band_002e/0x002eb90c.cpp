/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB9846504952BF5D0DA8596CC2DBA74F18ACBC29BA3238E7C6446BF59D3E844D
 * Entry: 0x002eb90c, Ghidra index: 10630, label: _longjmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Library: Visual Studio 2003 Release */

/* The original Xbox 32-bit context has no relationship to glibc's
 * __jmp_buf_tag. Offsets below come from original x86 0x002EB90C-0x002EB981.
 * This is guest storage ONLY: native SEH, EAX/EBP/EBX/EDI/ESI/ESP restore,
 * and indirect EIP transfer still require a verified ABI implementation. */
typedef struct bf_xbox_jump_context {
  uint32_t saved_ebp;       /* +0x00 */
  uint32_t saved_ebx;       /* +0x04 */
  uint32_t saved_edi;       /* +0x08 */
  uint32_t saved_esi;       /* +0x0c */
  uint32_t saved_esp;       /* +0x10 */
  uint32_t saved_eip;       /* +0x14 */
  uint32_t seh_frame;       /* +0x18 */
  uint32_t unwind_level;    /* +0x1c */
  uint32_t unwind_cookie;   /* +0x20 */
  uint32_t unwind_callback; /* +0x24 */
} bf_xbox_jump_context;
_Static_assert(sizeof(bf_xbox_jump_context) == 0x28, "guest jump record width");
_Static_assert(offsetof(bf_xbox_jump_context, seh_frame) == 0x18, "guest SEH slot");
_Static_assert(offsetof(bf_xbox_jump_context, unwind_cookie) == 0x20, "guest cookie slot");
_Static_assert(offsetof(bf_xbox_jump_context, unwind_callback) == 0x24, "guest callback slot");

void _longjmp(bf_xbox_jump_context *__env,int __val)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  
  iVar1 = __env->seh_frame;
  if (iVar1 != *unaff_FS_OFFSET) {
    __global_unwind2(iVar1);
  }
  if (iVar1 != 0) {
    iVar3 = __rt_probe_read4_4(&__env->unwind_cookie);
    if ((iVar3 == 0) || (__env->unwind_cookie != 0x56433230)) {
      __local_unwind2(iVar1,__env->unwind_level);
    }
    else {
      pcVar2 = (code *)(uintptr_t)__env->unwind_callback;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(__env);
      }
    }
  }
  /* 0x2EB95E-0x2EB981 additionally passes saved_eip in EAX to
   * FUN_002EF9D2, restores guest registers/ESP and jumps to saved_eip.
   * The existing draft call below does not model those register effects. */
  FUN_002ef9d2(0);
                    /* WARNING: Could not recover jumptable at 0x002eb981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uintptr_t)__env->saved_eip)();
  return;
}
