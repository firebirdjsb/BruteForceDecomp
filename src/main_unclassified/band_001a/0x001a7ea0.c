/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FC12C214F6B6CFF08DDF667CFDD6236B53891DD4C83684BC1B56A5AB5AF1A74
 * Entry: 0x001a7ea0, Ghidra index: 5421, label: FUN_001a7ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7ea0(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  undefined4 in_stack_fffffff4;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 3;
    if (iVar1 != 0) goto LAB_001a7ec8;
  }
  FUN_001acd40(in_ECX);
  in_stack_fffffff4 = in_ECX;
LAB_001a7ec8:
  FUN_001b5300(0,in_stack_fffffff4);
  return *(int *)(in_EAX + 4) + iVar1 * 8;
}
