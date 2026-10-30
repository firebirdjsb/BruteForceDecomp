/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA4688E33C22B1AC5C758992A77B9B06E58A1CAC6C04DC7D739CA6451FEDE52F
 * Entry: 0x00345fcc, Ghidra index: 12828, label: FUN_00345fcc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00345fcc(undefined4 param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_8;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
    return 0xffffffff;
  }
  local_8 = 0;
  iVar1 = FUN_003454a2(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (param_5 < 4) {
    uVar2 = (uint)(byte)*param_4;
  }
  else {
    uVar2 = *param_4;
  }
  if (param_2 == 6) {
    if (((*(byte *)(iVar1 + 0xc) & 2) != 0) && (param_3 == 1)) {
      FUN_00345541(0xffdfffff,-(uint)(uVar2 != 0) & 0x200000);
      goto LAB_003461e4;
    }
LAB_003461c1:
    local_8 = 0x273a;
    goto LAB_003461e4;
  }
  if (param_2 == 0xffff) {
    KeRaiseIrqlToDpcLevel();
    if (param_3 < 0x1002) {
      if (param_3 == 0x1001) {
        uVar4 = uVar2;
        uVar2 = *(uint *)(iVar1 + 0x5c);
LAB_0034618f:
        local_8 = FUN_00345757(iVar1,uVar4,uVar2);
        if (local_8 < 0) {
LAB_003461a6:
          KfLowerIrql();
          goto LAB_003461ac;
        }
      }
      else {
        if (param_3 == -0x81) {
          if ((*(byte *)(iVar1 + 0xc) & 2) == 0) goto LAB_0034613f;
          *(ushort *)(iVar1 + 0x80) = (ushort)(uVar2 == 0);
          goto LAB_00346092;
        }
        if (param_3 == -5) {
          if (((*(uint *)(iVar1 + 0xc) & 0x100000) != 0) && (uVar2 != 0)) goto LAB_003461a6;
          uVar2 = -(uint)(uVar2 != 0) & 0x100000;
          uVar3 = 0xffefffff;
        }
        else {
          if (param_3 != 4) {
            if (param_3 == 0x20) {
              if ((*(byte *)(iVar1 + 0xc) & 6) == 0) {
                uVar2 = -(uint)(uVar2 != 0) & 0x20000;
                uVar3 = 0xfffdffff;
                goto LAB_0034616f;
              }
            }
            else if ((param_3 == 0x80) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
              *(uint *)(iVar1 + 0x80) = *param_4;
              goto LAB_00346092;
            }
LAB_0034613f:
            KfLowerIrql();
            goto LAB_003461c1;
          }
          if (((*(uint *)(iVar1 + 0xc) & 0x80000) != 0) && (uVar2 != 0)) goto LAB_003461a6;
          uVar2 = -(uint)(uVar2 != 0) & 0x80000;
          uVar3 = 0xfff7ffff;
        }
LAB_0034616f:
        FUN_00345541(uVar3,uVar2);
      }
    }
    else {
      if (param_3 == 0x1002) {
        uVar4 = *(uint *)(iVar1 + 0x58);
        goto LAB_0034618f;
      }
      if (param_3 == 0x1005) {
        *(uint *)(iVar1 + 0x50) = uVar2;
      }
      else if (param_3 == 0x1006) {
        *(uint *)(iVar1 + 0x54) = uVar2;
      }
      else {
        if ((param_3 != 0x4001) || ((*(byte *)(iVar1 + 0xc) & 4) != 0)) goto LAB_0034613f;
        if ((param_5 == 4) && (param_4 == *(uint **)(in_ECX + 0xae0))) {
          uVar2 = 0x2000000;
          uVar3 = 0xffffffff;
          goto LAB_0034616f;
        }
      }
    }
LAB_00346092:
    KfLowerIrql();
  }
  else {
LAB_003461ac:
    local_8 = 0x2726;
  }
LAB_003461e4:
  *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
  if (local_8 != 0) {
    XAPILIB__SetLastError(local_8);
    return 0xffffffff;
  }
  return 0;
}
