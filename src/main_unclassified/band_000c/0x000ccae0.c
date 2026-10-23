/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FF8E7DA8F7548FD22D58A3EF46EBDB2C578FB6C1806FF4D34DFAD548D60BC85
 * Entry: 0x000ccae0, Ghidra index: 2529, label: FUN_000ccae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_000ccae0(int param_1,ushort *param_2,float *param_3,float *param_4,int param_5,float param_6)

{
  ushort uVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  float local_14;
  float local_10;
  
  if (((param_2 == (ushort *)0x0) || (param_3 == (float *)0x0)) || (param_4 == (float *)0x0)) {
    return 0x80070057;
  }
  *param_3 = 0.0;
  *param_4 = 0.0;
  iVar4 = *(int *)(param_1 + 0x10) + 1;
  local_10 = (float)iVar4;
  local_14 = 0.0;
  if (iVar4 < 0) {
    local_10 = local_10 + 4.2949673e+09;
  }
  local_10 = local_10 * param_6;
  uVar3 = *param_2;
  do {
    if (uVar3 == 0) {
      return 0;
    }
    puVar5 = param_2 + 1;
    if (uVar3 == 10) {
      if (param_5 != 0) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0x10) + 1;
      fVar2 = (float)iVar4;
      local_14 = 0.0;
      if (iVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      local_10 = fVar2 * param_6 + local_10;
    }
    else if (uVar3 == 9) {
      local_14 = (float)(0x32 - (int)local_14 % 0x32) * param_6 + local_14;
    }
    else if (uVar3 == 0x5e) {
      uVar3 = *puVar5;
      if (uVar3 == 99) {
        if (param_2[2] == 0) {
          return 0;
        }
        puVar5 = param_2 + 3;
      }
      else if (uVar3 == 0x66) {
        puVar5 = param_2 + 2;
        if (*puVar5 == 0x28) {
          puVar5 = param_2 + 3;
        }
        if (*puVar5 == 0) {
          return 0;
        }
        puVar5 = puVar5 + 1;
      }
      else if (uVar3 == 0x29) {
        puVar5 = param_2 + 2;
      }
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x1c);
      if ((uVar3 < uVar1) || (*(ushort *)(param_1 + 0x1e) < uVar3)) {
        if (uVar3 == 0x20) {
          uVar3 = 0x31;
          if ((0x31 < uVar1) || (*(ushort *)(param_1 + 0x1e) < 0x31)) goto LAB_000cccfe;
        }
        else {
          uVar3 = 0x82;
        }
      }
      iVar4 = *(int *)(param_1 + 0x24) + ((uint)uVar3 - (uint)uVar1) * 0x18;
      local_14 = (float)(int)*(short *)(iVar4 + 0x14) * param_6 +
                 (float)(int)*(short *)(iVar4 + 0x10) * param_6 + local_14 + param_6 * 0.0;
      if (*param_3 < local_14) {
        *param_3 = local_14;
      }
      if (*param_4 < local_10) {
        *param_4 = local_10;
      }
    }
LAB_000cccfe:
    uVar3 = *puVar5;
    param_2 = puVar5;
  } while( true );
}
