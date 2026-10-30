/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC0BE1414BACB1018F60C1DA98E53B350993C9F57D60E7AF5E56B04C8AA42CE0
 * Entry: 0x00021b20, Ghidra index: 190, label: FUN_00021b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00021b20(void)

{
  undefined4 in_EAX;
  int iVar1;
  int in_ECX;
  undefined1 *unaff_EDI;
  
  iVar1 = FUN_00022790(in_EAX,unaff_EDI);
  if (iVar1 != 1) {
    *(undefined4 *)(in_ECX + 0x72c) = 0x400ccccd;
    *(undefined4 *)(in_ECX + 0x724) = 0x400ccccd;
    *(byte *)(in_ECX + 0x728) = *(byte *)(in_ECX + 0x728) & 0xf9 | 1;
    *(undefined4 *)(in_ECX + 0x6ac) = 0xd;
    *unaff_EDI = 1;
  }
  return;
}
