/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 183E4868D876BB9678320A946FCD4B1B5D9604E96500E89F8356F560E6E3500A
 * Entry: 0x0029a990, Ghidra index: 9411, label: FUN_0029a990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
int FUN_0029a990(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  
  FUN_00299360();
  piVar1 = *(int **)(in_EAX + 8);
  iVar2 = piVar1[2];
  uVar3 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar1 + 0x10) = uVar3;
  *(int *)(*(int *)(in_EAX + 8) + 8) = *(int *)(*(int *)(in_EAX + 8) + 8) + 2;
  return iVar2;
}
