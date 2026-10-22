/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAFA7531A787FFB12C54F488B0157ED930AFB1FD38665168F901895540E84A45
 * Entry: 0x0004a3a0, Ghidra index: 597, label: FUN_0004a3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0004a3a0(undefined4 param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  ushort uVar9;
  float10 fVar10;
  float fVar11;
  float local_18;
  
  local_18 = 0.0;
  if (param_2 == (int *)0x0) {
    return (float10)0.0;
  }
  iVar3 = (**(code **)(*param_2 + 0xf8))();
  if ((iVar3 == 0) || ((*(byte *)(param_2 + 0x1c) & 1) != 0)) {
    return (float10)0.0;
  }
  piVar4 = (int *)FUN_000120f0();
  if (param_3 == (float *)0x0) {
    iVar5 = (**(code **)(*param_2 + 0x40))();
    iVar6 = (**(code **)(*piVar4 + 0x40))();
    fVar11 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar5 + 0x2c);
    fVar1 = *(float *)(iVar6 + 0x28) - *(float *)(iVar5 + 0x28);
    fVar2 = *(float *)(iVar6 + 0x24) - *(float *)(iVar5 + 0x24);
    fVar11 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar11 * fVar11);
  }
  else {
    fVar11 = *param_3;
  }
  bVar8 = false;
  iVar5 = FUN_0014d2e0();
  if ((*(int *)(iVar3 + 0x42c) == 0) || (iVar6 = FUN_00055ae0(), *(int *)(iVar6 + 0x5c) != 0x72)) {
    if (iVar5 != 0) {
      if (((*(byte *)(iVar3 + 0x464) & 4) == 0) || (50.0 <= fVar11)) {
        iVar6 = *(int *)(iVar5 + 0x228);
        fVar10 = (float10)FUN_00232520();
        if ((float10)fVar11 < fVar10) {
          if (*(int *)(iVar6 + 0xdc) == 0) {
            fVar1 = *(float *)(iVar6 + 0xcc);
          }
          else {
            fVar1 = (float)*(int *)(iVar6 + 0xdc) * *(float *)(iVar6 + 0xcc);
          }
          fVar2 = *(float *)(iVar6 + 0x18);
          fVar10 = (float10)FUN_00024ae0(iVar3);
          fVar10 = fVar10 * (float10)(fVar1 * fVar2);
          if (fVar10 <= (float10)20.0) {
            if (fVar10 <= (float10)10.0) {
              local_18 = 0.3;
              if (fVar10 <= (float10)5.0) {
                local_18 = 0.1;
              }
            }
            else {
              local_18 = 0.5;
            }
          }
          else {
            local_18 = 1.0;
          }
        }
        if (*(float *)(iVar6 + 0x24) <= 9.0) {
          if (6.0 < *(float *)(iVar6 + 0x24)) {
            local_18 = local_18 + local_18;
          }
          else if (3.0 < *(float *)(iVar6 + 0x24)) {
            local_18 = local_18 * 1.5;
          }
          else if (0.01 < *(float *)(iVar6 + 0x24)) {
            local_18 = local_18 * 1.25;
          }
        }
        else {
          local_18 = local_18 * 2.5;
        }
        if ((float)*(int *)(iVar6 + 8) < 80.0) {
          local_18 = local_18 * 0.6666667;
        }
      }
      else if (35.0 <= fVar11) {
        local_18 = 0.5;
      }
      else {
        local_18 = 1.5;
      }
      bVar8 = *(int *)(*(int *)(iVar5 + 0x228) + 0x16c) != 0;
      if (*(int *)(*(int *)(iVar5 + 0x228) + 0x40) == 2) {
        local_18 = local_18 * 1.25;
      }
    }
  }
  else if (15.0 <= fVar11) {
    if (25.0 <= fVar11) {
      local_18 = 0.25;
    }
    else {
      local_18 = 1.0;
    }
  }
  else {
    local_18 = 2.0;
  }
  piVar7 = (int *)FUN_00049ca0();
  fVar10 = (float10)local_18;
  if (piVar7 == piVar4) {
    fVar10 = fVar10 * (float10)1.5;
  }
  if (bVar8) {
    if (60.0 < fVar11) {
      fVar11 = 0.5;
      if (0.5 <= (float)(fVar10 * (float10)1.5)) {
        fVar11 = (float)(fVar10 * (float10)1.5);
      }
      return (float10)fVar11;
    }
    if (fVar11 <= 35.0) {
      uVar9 = (ushort)(fVar11 < 15.0) << 8 | (ushort)(fVar11 == 15.0) << 0xe;
LAB_0004a766:
      if (uVar9 == 0) {
        fVar10 = fVar10 * (float10)0.75;
      }
      return fVar10;
    }
  }
  else {
    if (fVar11 < 15.0) {
      fVar11 = 0.5;
      if (0.5 <= (float)(fVar10 * (float10)1.5)) {
        fVar11 = (float)(fVar10 * (float10)1.5);
      }
      return (float10)fVar11;
    }
    if (35.0 <= fVar11) {
      uVar9 = (ushort)(fVar11 < 50.0) << 8 | (ushort)(fVar11 == 50.0) << 0xe;
      goto LAB_0004a766;
    }
  }
  return fVar10 * (float10)1.1;
}
