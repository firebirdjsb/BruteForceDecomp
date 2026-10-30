/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E11D7EB4830BF670A8862D136F4A33A453686CAA598DA744B0D6D2B3F66774B5
 * Entry: 0x00106550, Ghidra index: 3353, label: FUN_00106550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00106550(void)

{
  int in_EAX;
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = (int *)(in_EAX + 4);
  piVar2 = piVar1;
  if (7 < *(uint *)(in_EAX + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (7 < *(uint *)(in_EAX + 0x18)) {
    piVar1 = (int *)*piVar1;
  }
  FUN_00106590(local_4,piVar1,(int)piVar2 + *(int *)(in_EAX + 0x14) * 2);
  return;
}
