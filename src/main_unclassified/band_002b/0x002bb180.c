/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09B08AC79AFCB8B6CCF751D54AC889D7860857E26D709595BE6B6298DCE64796
 * Entry: 0x002bb180, Ghidra index: 9899, label: FUN_002bb180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb180(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  
  uVar1 = *(undefined4 *)(*(int *)(in_EAX + 0xc) + 0x108);
  uVar2 = *(undefined4 *)(*(int *)(in_EAX + 0xc) + 0x10c);
  *(undefined4 *)(in_EAX + 0x178) = uVar1;
  *(undefined4 *)(in_EAX + 0x17c) = uVar2;
  *(undefined4 *)(in_EAX + 0x180) = uVar1;
  *(undefined4 *)(in_EAX + 0x184) = uVar2;
  return;
}
