/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E86A4C0AECCDEAF56F2FDC00E2ABF165FE2FB291395206BD126D6C516D97065A
 * Entry: 0x002312e0, Ghidra index: 7751, label: FUN_002312e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_002312e0(int param_1,int *param_2,int *param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c [10];
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  if (param_3 != (int *)0x0) {
    local_7c = *(float *)(param_1 + 0x234 + (int)param_2 * 0xc);
    iVar1 = param_1 + (int)param_2 * 0xc;
    local_80 = *(float *)(iVar1 + 0x230);
    local_84 = *(float *)(iVar1 + 0x22c);
    pfVar6 = *(float **)(iVar1 + 0x260);
    local_74 = *(undefined8 *)(iVar1 + 0x260);
    local_78 = *(float *)(iVar1 + 0x25c);
    if ((*(byte *)(param_1 + 0x225) & 2) != 0) {
      local_7c = *(float *)(param_1 + 0x2e4);
      local_80 = *(float *)(param_1 + 0x2e0);
      local_84 = *(float *)(param_1 + 0x2dc);
      local_74 = *(undefined8 *)(param_1 + 0x2ec);
      local_78 = *(float *)(param_1 + 0x2e8);
      local_6c = param_4 * local_78;
      local_4c[0] = param_4 * *(float *)(param_1 + 0x2f0) + local_7c;
      local_50 = param_4 * *(float *)(param_1 + 0x2ec) + local_80;
      local_54 = local_84 + local_6c;
      FUN_0001d0c0();
      local_60 = local_20;
      local_6c = local_20 * 0.1;
      local_8 = local_8 * 0.1;
      local_68 = CONCAT44(local_8,local_14 * 0.1);
      local_84 = (local_24 * 0.25 + local_84) - local_6c;
      _local_5c = CONCAT44(local_8,local_14);
      local_80 = (local_18 * 0.25 + local_80) - local_14 * 0.1;
      local_7c = (local_c * 0.25 + local_7c) - local_8;
      fVar2 = local_4c[0] - local_7c;
      fVar3 = local_50 - local_80;
      local_78 = local_54 - local_84;
      pfVar6 = &local_78;
      auVar5 = ZEXT416((uint)SQRT(local_78 * local_78 + fVar3 * fVar3 + fVar2 * fVar2));
      auVar5 = rcpss(auVar5,auVar5);
      fVar4 = auVar5._0_4_;
      local_78 = local_78 * fVar4;
      local_74 = CONCAT44(fVar2 * fVar4,fVar3 * fVar4);
    }
    *(undefined4 *)(param_3[0x3a] + 0xc) = 0;
    (**(code **)(*param_3 + 0x38))(&local_84,pfVar6);
    FUN_0001d0c0();
    (**(code **)(*param_2 + 0x3c))(local_4c);
    if (200.0 <= (float)param_2) {
      param_2 = (int *)0x43480000;
    }
    FUN_0021c380((float)param_2 * 0.005);
    return 1;
  }
  return 0;
}
