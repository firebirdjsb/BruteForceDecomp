/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D593C9E50555D9C190A606604413C2245219811822D6627EF3A2DF6BE18012FD
 * Entry: 0x001f7f60, Ghidra index: 7056, label: FUN_001f7f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001f7f60(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_EAX;
  int iVar5;
  int in_ECX;
  int iVar6;
  
  iVar6 = in_ECX - (int)in_EAX;
  iVar5 = -(iVar6 >> 0x1f);
  while (1 < iVar6 / 0xc) {
    puVar1 = (undefined4 *)((int)in_EAX + iVar6 + -0xc);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    *puVar1 = *in_EAX;
    puVar1[1] = in_EAX[1];
    puVar1[2] = in_EAX[2];
    FUN_001f8290((iVar6 + -0xc) / 0xc,uVar2,uVar3,uVar4,param_1);
    iVar6 = iVar6 + -0xc;
    iVar5 = iVar6 * 0x2aaaaaab;
  }
  return iVar5;
}
