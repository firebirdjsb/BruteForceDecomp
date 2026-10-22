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

void _longjmp(__jmp_buf_tag *__env,int __val)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  
  iVar1 = __env->__mask_was_saved;
  if (iVar1 != *unaff_FS_OFFSET) {
    __global_unwind2(iVar1);
  }
  if (iVar1 != 0) {
    iVar3 = __rt_probe_read4_4((__env->__saved_mask).__val + 1);
    if ((iVar3 == 0) || ((__env->__saved_mask).__val[1] != 0x56433230)) {
      __local_unwind2(iVar1,(__env->__saved_mask).__val[0]);
    }
    else {
      pcVar2 = (code *)(__env->__saved_mask).__val[2];
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(__env);
      }
    }
  }
  FUN_002ef9d2(0);
                    /* WARNING: Could not recover jumptable at 0x002eb981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)__env->__jmpbuf[5])();
  return;
}
