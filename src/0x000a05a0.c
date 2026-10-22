/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA844D568E39EE7B5325750EEB7D951921BF71285C15BA2F6AF1496ED38EBEF7
 * Entry: 0x000a05a0, Ghidra index: 1895, label: FUN_000a05a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000a05a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  undefined4 *unaff_EDI;
  
  iVar6 = in_EAX - (int)unaff_EDI;
  iVar5 = -(iVar6 >> 0x1f);
  while (1 < iVar6 / 0xc) {
    puVar1 = (undefined4 *)((int)unaff_EDI + iVar6 + -0xc);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    *puVar1 = *unaff_EDI;
    puVar1[1] = unaff_EDI[1];
    puVar1[2] = unaff_EDI[2];
    FUN_000a0990((iVar6 + -0xc) / 0xc,uVar2,uVar3,uVar4,param_1);
    iVar6 = iVar6 + -0xc;
    iVar5 = iVar6 * 0x2aaaaaab;
  }
  return iVar5;
}
