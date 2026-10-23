/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F402E9229CC802B9983A1929241BFB16EBDD90F01DE08EB4AD87AAA15558503
 * Entry: 0x002136b0, Ghidra index: 7441, label: FUN_002136b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002136b0(void)

{
  int in_EAX;
  byte bVar1;
  uint uVar2;
  uint *unaff_EDI;
  
  *unaff_EDI = (uint)*(byte *)(in_EAX + 0x3c);
  uVar2 = 0;
  while( true ) {
    bVar1 = *(char *)(in_EAX + 0x3c) + 1;
    *(byte *)(in_EAX + 0x3c) = bVar1;
    if (2 < bVar1) {
      *(undefined1 *)(in_EAX + 0x3c) = 0;
    }
    if (*(int *)(in_EAX + 0x40 + (uint)*(byte *)(in_EAX + 0x3c) * 4) != 0) break;
    bVar1 = *(byte *)(in_EAX + 0x3c) + 1;
    *(byte *)(in_EAX + 0x3c) = bVar1;
    if (2 < bVar1) {
      *(undefined1 *)(in_EAX + 0x3c) = 0;
    }
    if (*(int *)(in_EAX + 0x40 + (uint)*(byte *)(in_EAX + 0x3c) * 4) != 0) break;
    bVar1 = *(byte *)(in_EAX + 0x3c) + 1;
    *(byte *)(in_EAX + 0x3c) = bVar1;
    if (2 < bVar1) {
      *(undefined1 *)(in_EAX + 0x3c) = 0;
    }
    if ((*(int *)(in_EAX + 0x40 + (uint)*(byte *)(in_EAX + 0x3c) * 4) != 0) ||
       (uVar2 = uVar2 + 3, 2 < uVar2)) break;
  }
  return *(int *)(in_EAX + 0x40 + *unaff_EDI * 4) != 0;
}
