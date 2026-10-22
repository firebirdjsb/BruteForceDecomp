/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9F54EFD55855318853B6F0DF8794FA559439997B6B7C368118815E6C9C5FBC3
 * Entry: 0x002994d0, Ghidra index: 9375, label: FUN_002994d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
int FUN_002994d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_4 < 0x100) {
    iVar4 = 2;
  }
  else {
    iVar4 = (uint)(0xffff < param_4) * 2 + 3;
  }
  iVar4 = iVar4 + -2;
  if (0 < iVar4) {
    piVar1 = *(int **)(param_1 + 8);
    iVar2 = *piVar1;
    uVar3 = FUN_00294b10(1,s_code_size_overflow_004040f0);
    *(undefined4 *)(*piVar1 + 0x10) = uVar3;
    _memmove((void *)(*(int *)(iVar2 + 0x10) + iVar4 + param_2),
             (void *)(*(int *)(iVar2 + 0x10) + param_2),piVar1[2] - param_2);
    piVar1[2] = piVar1[2] + iVar4;
  }
  FUN_002993f0(param_1,param_3,0);
  return iVar4;
}
