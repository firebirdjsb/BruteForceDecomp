/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D50CA60990D456188B9C7CA3249C9232F025CEA771EB351170DA4CAF5B2EDDA
 * Entry: 0x0014d230, Ghidra index: 4355, label: FUN_0014d230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014d230(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 2:
    break;
  case 3:
    return in_EAX + 0x44;
  case 4:
    return in_EAX + 0x110;
  case 5:
    return in_EAX + 0x144;
  case 6:
    return *(int *)(in_EAX + 0x1ac);
  case 7:
    return in_EAX + 0x178;
  case 8:
    return in_EAX + 0x88;
  case 9:
    return in_EAX + 0xbc;
  default:
    in_EAX = 0;
  }
  return in_EAX;
}
