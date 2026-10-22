/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CA9F0AD1DE76FC3B27D6B7D04A386F0E94503A9AEC07E3936D6B6852F01D19F
 * Entry: 0x00052d50, Ghidra index: 756, label: FUN_00052d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00052d50(void)

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
  FUN_00052ed0(*(undefined4 *)(in_EAX + 8),in_EDX);
  return;
}
