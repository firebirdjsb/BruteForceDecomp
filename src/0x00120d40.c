/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F95A311256106C6A0EC121EDACEF058EB382DC96BF531EAAECE4C5EFD06D616
 * Entry: 0x00120d40, Ghidra index: 3649, label: FUN_00120d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00120d40(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_EBX;
  undefined4 uVar5;
  
  iVar2 = unaff_EBX[0xba];
  cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
  if ((((cVar1 != '\0') && (iVar2 = *(int *)(iVar2 + 0x164), iVar2 != 0)) &&
      (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 0x14)) && (iVar2 != 0)) {
    iVar2 = unaff_EBX[0xba];
    cVar1 = (**(code **)(*(int *)(iVar2 + 0x178) + 0x20))();
    if ((cVar1 == '\0') || (*(int *)(iVar2 + 0x198) == 0)) {
      iVar2 = unaff_EBX[0xba];
      cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
      if ((cVar1 == '\0') ||
         ((iVar2 = *(int *)(iVar2 + 0x164), iVar2 == 0 ||
          (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 0x14)))) {
        iVar2 = 0;
      }
      if (-1 < *(int *)(iVar2 + 0x1f8)) {
        iVar2 = FUN_0014d2e0();
        iVar2 = *(int *)(iVar2 + 0x1f8);
        iVar3 = FUN_0014d2e0();
        if (*(int *)(*(int *)(iVar3 + 0x228) + 0xe4) <= iVar2) {
          return 4;
        }
        cVar1 = FUN_00117210();
        if (cVar1 != '\0') {
          uVar5 = 1;
          FUN_0014d2e0(1);
          cVar1 = FUN_0022daf0(uVar5);
          if (cVar1 != '\0') {
            if (unaff_EBX[0x1ea] != 0) {
              FUN_001249b0();
            }
            *(undefined1 *)(unaff_EBX + 0x1fa) = 1;
            unaff_EBX[0x7b] = 7;
            cVar1 = FUN_000d4440();
            if (cVar1 != '\0') {
              FUN_00123f60();
            }
            cVar1 = (**(code **)(*(int *)unaff_EBX[0x169] + 0xf0))();
            iVar3 = 0;
            piVar4 = *(int **)(unaff_EBX[3] + 0x2cc);
            iVar2 = *(int *)(unaff_EBX[3] + 0x2c8);
            if (cVar1 != '\0') {
              if (0 < iVar2) {
                while (*piVar4 != 6) {
                  iVar3 = iVar3 + 1;
                  piVar4 = piVar4 + 0x13;
                  if (iVar2 <= iVar3) {
                    return 1;
                  }
                }
                if ((*(byte *)((int)piVar4 + 0x3d) & 4) == 0) {
                  if (unaff_EBX[0x86] == 0) {
                    unaff_EBX[0x86] = (int)piVar4;
                  }
                }
                else if (unaff_EBX[0x91] == 0) {
                  unaff_EBX[0x91] = (int)piVar4;
                  return 1;
                }
              }
              return 1;
            }
            if (0 < iVar2) {
              do {
                if (*piVar4 == 0x26) {
                  if ((*(byte *)((int)piVar4 + 0x3d) & 4) == 0) {
                    if (unaff_EBX[0x86] == 0) {
                      unaff_EBX[0x86] = (int)piVar4;
                    }
                  }
                  else if (unaff_EBX[0x91] == 0) {
                    unaff_EBX[0x91] = (int)piVar4;
                  }
                  break;
                }
                iVar3 = iVar3 + 1;
                piVar4 = piVar4 + 0x13;
              } while (iVar3 < iVar2);
            }
            iVar2 = (**(code **)(*unaff_EBX + 0xf4))();
            if ((*(byte *)(iVar2 + 0x14) & 2) != 0) {
              FUN_00140a60(*(undefined4 *)(unaff_EBX[2] + 0xbe8),unaff_EBX,0xf53480cb,0);
            }
            return 1;
          }
          iVar2 = FUN_0014d2e0();
          if (*(float *)(*(int *)(iVar2 + 0x228) + 0x14c) != 0.0) {
            iVar2 = FUN_0014d2e0();
            if (*(int *)(iVar2 + 0x1f8) != 0) {
              return 4;
            }
            FUN_0010f7e0(0x53,0);
            return 3;
          }
          iVar2 = FUN_0014d2e0();
          if ((*(int *)(iVar2 + 0x1f8) < 1) && ((char)unaff_EBX[0x1fa] == '\0')) {
            FUN_0010f7e0(0x52,0);
            return 2;
          }
        }
      }
    }
  }
  return 0;
}
