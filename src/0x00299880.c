/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84D012FB543FAFD768A6421F2C99B68B447E317F3D0C4B156803E97AD7193FDF
 * Entry: 0x00299880, Ghidra index: 9383, label: FUN_00299880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_local_variables_00404098[];
void FUN_00299880(void)

{
  int iVar1;
  int in_EAX;
  undefined4 unaff_EBX;
  
  iVar1 = *(int *)(in_EAX + 8);
  FUN_00299250(s_local_variables_00404098);
  *(undefined4 *)(iVar1 + 0x124 + *(int *)(iVar1 + 0x14) * 4) = unaff_EBX;
  FUN_00299830();
  *(int *)(*(int *)(in_EAX + 8) + 0x14) = *(int *)(*(int *)(in_EAX + 8) + 0x14) + 1;
  return;
}
