/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E572D5234FF114E0FFACA95C9DB3B4132163C9564FB6DCBA831F1D7D992F13EB
 * Entry: 0x00170ca0, Ghidra index: 4839, label: FUN_00170ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00170ca0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x60) + 0x38) - *(int *)(*(int *)(param_1 + 0x60) + 0x10);
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_34 = 0;
  local_2c = 0xbf800000;
  local_30 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  local_4 = puVar1[3];
  local_8 = puVar1[2];
  local_c = puVar1[1];
  local_10 = *puVar1;
  uVar5 = puVar1[4] + (int)(fVar2 * 0.01);
  pfVar3 = (float *)FUN_0001fb70(&local_10,local_1c,&local_34);
  local_38 = pfVar3[2];
  local_3c = pfVar3[1];
  local_40 = *pfVar3;
  if (uVar5 < *(uint *)(*(int *)(param_1 + 0x60) + 0x38)) {
    do {
      FUN_00170e50();
      FUN_0001fb70(&local_10,&local_28,&local_34);
      local_14 = local_20 - local_38;
      uVar5 = uVar5 + (int)(fVar2 * 0.01);
      local_18 = local_24 - local_3c;
      *(float *)(param_1 + 0x58) =
           SQRT((local_28 - local_40) * (local_28 - local_40) +
                local_18 * local_18 + local_14 * local_14) + *(float *)(param_1 + 0x58);
      local_38 = local_20;
      local_40 = local_28;
      local_3c = local_24;
    } while (uVar5 < *(uint *)(*(int *)(param_1 + 0x60) + 0x38));
  }
  return;
}
