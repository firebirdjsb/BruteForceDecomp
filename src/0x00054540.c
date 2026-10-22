/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1D8B352D9B4A9C597FCA133965EB59258A020B428892F804B1C5D9E758A2B2B
 * Entry: 0x00054540, Ghidra index: 793, label: FUN_00054540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00054540(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  int unaff_EBX;
  
  while (unaff_EBX < in_EAX) {
    iVar6 = (in_EAX + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar6 * 0x14);
    if (param_2 <= *(float *)(param_1 + iVar6 * 0x14)) break;
    *(undefined4 *)(param_1 + in_EAX * 0x14) = *puVar1;
    uVar4 = puVar1[3];
    iVar2 = param_1 + in_EAX * 0x14;
    uVar5 = puVar1[2];
    *(undefined4 *)(iVar2 + 4) = puVar1[1];
    *(undefined4 *)(iVar2 + 8) = uVar5;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = puVar1[4];
    in_EAX = iVar6;
  }
  pfVar3 = (float *)(param_1 + in_EAX * 0x14);
  *pfVar3 = param_2;
  pfVar3[1] = param_3;
  pfVar3[2] = param_4;
  pfVar3[3] = param_5;
  pfVar3[4] = param_6;
  return;
}
