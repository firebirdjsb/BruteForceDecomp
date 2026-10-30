/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D205A7F9F747353088695CF6DF386BFF659143E376C211663E9D74713FB56A0
 * Entry: 0x003797cb, Ghidra index: 13486, label: FUN_003797cb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003797cb(uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX;
  int *in_EDX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_c;
  undefined4 *local_8;
  
  uVar2 = in_EDX[0x40];
  iVar3 = *in_EDX;
  uVar5 = 0;
  *(undefined4 *)(iVar3 + 0x2500) = 0;
  do {
    iVar4 = uVar5 + 0x1c0000;
    uVar5 = uVar5 + 1;
    *(undefined4 *)(iVar3 + (iVar4 + in_EDX[0x43] * 4) * 4) = 0;
  } while (uVar5 < 0xdfc);
  *(int *)(iVar3 + (uVar2 + 0x1c0000 + in_EDX[0x50] * 4) * 4) = in_EDX[0x43];
  in_EDX[uVar2 + 0x4e] = in_EDX[0x43];
  local_c = 0x10;
  puVar6 = (undefined4 *)(uVar2 * 0x40 + in_EDX[0x4a] + iVar3);
  local_8 = puVar6;
  do {
    local_c = local_c + -1;
    *local_8 = 0;
    local_8 = local_8 + 1;
  } while (local_c != 0);
  puVar6[3] = *(undefined4 *)(param_3 + 0xc);
  if (param_1 < 8) {
    param_1 = 8;
  }
  if (0x100 < param_1) {
    param_1 = 0;
  }
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  if (0x100 < param_2) {
    param_2 = 0;
  }
  if (0xf < in_EAX) {
    in_EAX = 0xf;
  }
  iVar4 = (((in_EAX & 0x1f) << 3 | (param_2 >> 5) - 1 & 7) << 10 | (param_1 >> 3) - 1 & 0x1f) << 3;
  puVar6[5] = iVar4;
  uVar5 = 1 << ((byte)uVar2 & 0x1f);
  in_EDX[0x41] = in_EDX[0x41] | uVar5;
  *(int *)(iVar3 + 0x2504) = in_EDX[0x41];
  *(undefined4 *)(iVar3 + 0x3200) = 0;
  *(undefined4 *)(iVar3 + 0x3250) = 0;
  puVar1 = (uint *)(iVar3 + 0x3204);
  *puVar1 = uVar2 & 0x1f;
  if ((in_EDX[0x41] & uVar5) != 0) {
    *puVar1 = *puVar1 | 0x100;
  }
  *(undefined4 *)(iVar3 + 0x3240) = 0;
  *(undefined4 *)(iVar3 + 0x3244) = 0;
  *(undefined4 *)(iVar3 + 0x322c) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(iVar3 + 0x3230) = 0;
  *(undefined4 *)(iVar3 + 0x3228) = 0;
  *(undefined4 *)(iVar3 + 0x3280) = 0;
  *(int *)(iVar3 + 0x3224) = iVar4;
  if ((in_EDX[0x41] & uVar5) != 0) {
    *(undefined4 *)(iVar3 + 0x3220) = 1;
  }
  *(undefined4 *)(iVar3 + 0x3250) = 1;
  *(undefined4 *)(iVar3 + 0x3200) = 1;
  *(undefined4 *)(iVar3 + 0x2500) = 1;
  in_EDX[0x42] = in_EDX[0x42] | uVar5;
  return;
}
