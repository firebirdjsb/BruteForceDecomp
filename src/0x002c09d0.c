/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B9C17F00DA7959F2043D55346336E5D5313D3289DE7C050282B541DF5A9C704
 * Entry: 0x002c09d0, Ghidra index: 10012, label: FUN_002c09d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c09d0(int param_1,int param_2,undefined4 param_3)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_14 [4];
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar9 = param_2;
  iVar8 = *(int *)(param_2 + 0x24);
  if (iVar8 != 0) {
    psVar1 = (short *)(*(int *)(*(int *)(param_2 + 0x14) + 0xac) + 0x10);
    *psVar1 = *psVar1 + 1;
    iVar7 = FUN_002d30f0(param_1,local_14,&param_1,0,1);
    if (param_1 == 1) {
      iVar9 = *(int *)(param_2 + 0x14);
      uVar5 = *(undefined4 *)(*(short *)(iVar8 + 0xc) + 0x6c + iVar8);
      iVar8 = *(short *)(iVar8 + 0xc) + iVar8;
      uVar6 = *(undefined4 *)(iVar8 + 0x68);
      *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar9 + 0x108);
      *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar9 + 0x10c);
      FUN_002d29f0(iVar8);
      *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
      *(undefined4 *)(iVar8 + 0x54) = 0;
      *(undefined4 *)(iVar7 + 0x58) = param_3;
      *(undefined4 *)(iVar7 + 0x68) = uVar6;
      *(undefined4 *)(iVar7 + 0x6c) = uVar5;
      *(undefined4 *)(iVar8 + 0x68) = uVar6;
      *(undefined4 *)(iVar8 + 0x6c) = uVar5;
      local_4 = 0;
      local_10 = *(float *)(iVar8 + 0x38);
      iVar9 = *(int *)(iVar8 + 0x40);
      local_c = local_10 * *(float *)(iVar9 + 0x74);
      local_8 = local_10 * *(float *)(iVar9 + 0x78);
      local_10 = local_10 * *(float *)(iVar9 + 0x70);
      FUN_002b8d10(&local_10,*(int *)(iVar8 + 0x40) + 0x80,*(undefined4 *)(iVar8 + 0x3c));
      iVar8 = *(int *)(iVar7 + 0x40);
      fVar2 = *(float *)(iVar8 + 0x88);
      fVar3 = *(float *)(iVar8 + 0x84);
      fVar4 = *(float *)(iVar8 + 0x80);
      *(float *)(iVar7 + 0x38) =
           local_10 * *(float *)(iVar8 + 0x70) +
           local_c * *(float *)(iVar8 + 0x74) + local_8 * *(float *)(iVar8 + 0x78);
      *(float *)(iVar7 + 0x3c) = local_10 * fVar4 + local_c * fVar3 + local_8 * fVar2;
      iVar9 = param_2;
    }
    psVar1 = (short *)(*(int *)(*(int *)(iVar9 + 0x14) + 0xac) + 0x10);
    *psVar1 = *psVar1 + -1;
    FUN_002bbdd0();
  }
  return;
}
