/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06612EE38527491B9F87F06B2CC231D87BD78DD81A9F0EABE971C92BC647B004
 * Entry: 0x00126a40, Ghidra index: 3718, label: FUN_00126a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00126a40(void)

{
  int in_EAX;
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)(*(int *)(in_EAX + 0x1f8) + -3) >> 8);
  switch(*(int *)(in_EAX + 0x1f8)) {
  case 3:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
  case 0x22:
    return CONCAT31(uVar1,1);
  default:
    return (uint)uVar1 << 8;
  }
}
