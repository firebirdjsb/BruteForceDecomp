/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5D8B914C4F07CF2E568E5E538EA662184FB8F4DF3BED268964463746C03AE84
 * Entry: 0x001611d0, Ghidra index: 4599, label: FUN_001611d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001611d0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_EAX + 8) - iVar1 >> 2) < (uint)(*(int *)(in_EAX + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0003efa0(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 4;
    return;
  }
  FUN_0017ca40(*(undefined4 *)(in_EAX + 8),in_EDX);
  return;
}
