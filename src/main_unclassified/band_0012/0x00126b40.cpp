/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E56F117B44ADB82684B03716A186E3738FCE213023A318F828BE4FF1088414C
 * Entry: 0x00126b40, Ghidra index: 3723, label: FUN_00126b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00126b40(void)

{
  int in_EAX;
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)(*(int *)(in_EAX + 0x1f8) + -4) >> 8);
  switch(*(int *)(in_EAX + 0x1f8)) {
  case 4:
  case 0x1c:
  case 0x1d:
  case 0x20:
  case 0x21:
  case 0x2f:
    return CONCAT31(uVar1,1);
  default:
    return (uint)uVar1 << 8;
  }
}
