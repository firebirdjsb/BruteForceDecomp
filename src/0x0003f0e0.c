/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCDA3CF09D39198A7FB8E0516FBEF2EA594502676F5FDBADA628A5194AE7D8DA
 * Entry: 0x0003f0e0, Ghidra index: 470, label: FUN_0003f0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0003f0e0(char param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  undefined3 uVar3;
  
  iVar1 = FUN_000120f0();
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), (*(byte *)(uVar2 + 0x1a9) & 1) != 0)) {
    uVar3 = (undefined3)(uVar2 >> 8);
    uVar2 = CONCAT31(uVar3,param_1);
    *(char *)(unaff_ESI + 0x3cc) = param_1;
    if (*(char *)(unaff_ESI + 0x3cd) != param_1) {
      *(undefined4 *)(unaff_ESI + 0x3dc) = 0;
      *(undefined4 *)(unaff_ESI + 0x3d4) = 0;
      *(byte *)(unaff_ESI + 0x3d8) = *(byte *)(unaff_ESI + 0x3d8) & 0xfa | 2;
      return CONCAT31(uVar3,1);
    }
  }
  return uVar2 & 0xffffff00;
}
