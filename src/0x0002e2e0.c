/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD5263BA1DEE64FE787153F621618ABC5FC26F87BC8FB64E4ECD8FFE11F1C19E
 * Entry: 0x0002e2e0, Ghidra index: 302, label: FUN_0002e2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0002e2e0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_EDX;
  
  if (in_EDX == 0) goto LAB_0002e314;
  in_EAX = *(uint *)(in_EDX + 0x44);
  uVar1 = in_EAX;
  switch(in_EAX) {
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x41:
    break;
  default:
    if (in_EAX != 0x13) {
      if (in_EAX == 0x78) {
        in_EAX = *(uint *)(in_EDX + 0x798);
        uVar1 = 0;
        if (in_EAX == 0) break;
      }
LAB_0002e314:
      return in_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}
