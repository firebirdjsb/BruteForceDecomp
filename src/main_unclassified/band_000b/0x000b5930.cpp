/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4955A156D2841FD0A6917D2F8EDCAA61795D6E72C3D4395D572CC623120A3939
 * Entry: 0x000b5930, Ghidra index: 2189, label: FUN_000b5930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern ulonglong FUN_002ebf10(void);
extern undefined4 FUN_000c9920(void);
extern void FUN_000c9890(int param_1);
extern void FUN_000bb9d0(int *param_1);

void FUN_000b5930(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_10;
  int local_c;
  
  iVar7 = *(int *)(param_1 + 0xbc);
  if (*(int *)(iVar7 + 0x14) == 0) {
    local_c = 0;
  }
  else {
    local_c = (*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x14)) / 0x1c;
  }
  if (*(int *)(iVar7 + 0x24) == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (char)(*(int *)(iVar7 + 0x28) - *(int *)(iVar7 + 0x24) >> 2);
  }
  *(char *)(param_1 + 0x83) = (char)local_c + cVar6;
  bVar3 = *(byte *)(param_1 + 0x82);
  iVar7 = FUN_002ebf10();
  iVar7 = iVar7 - (uint)bVar3;
  iVar9 = 0;
  local_10 = 0;
  if (0 < iVar7) {
    iVar10 = 0x68;
    do {
      iVar9 = (uint)*(byte *)(param_1 + 0x82) + local_10;
      if (iVar9 < local_c) {
        iVar9 = iVar9 * 0x1c;
        iVar4 = *(int *)(*(int *)(param_1 + 0xbc) + 0x14);
        iVar8 = iVar9 + iVar4;
        if (*(uint *)(iVar9 + 0x18 + iVar4) < 8) {
          iVar8 = iVar8 + 4;
        }
        else {
          iVar8 = *(int *)(iVar8 + 4);
        }
        piVar5 = *(int **)(iVar10 + param_1);
        cVar6 = FUN_000c9920();
        if (cVar6 != '\0') {
          fVar1 = (float)piVar5[6];
          iVar9 = piVar5[0xb];
          *(byte *)(piVar5 + 0x12) = *(byte *)(piVar5 + 0x12) & 0xe7;
          fVar2 = *(float *)(iVar9 + 0x40);
          *(float *)(iVar9 + 0x40) = fVar1;
          if (fVar1 != fVar2) {
            FUN_000c9890(iVar9);
          }
          (**(code **)(*piVar5 + 0x30))(iVar8);
        }
      }
      else {
        FUN_000bb9d0(*(undefined4 *)(iVar10 + param_1));
      }
      (**(code **)(**(int **)(iVar10 + param_1) + 0x14))(0x3f800000);
      iVar9 = local_10 + 1;
      iVar10 = iVar10 + 4;
      local_10 = iVar9;
    } while (iVar9 < iVar7);
  }
  *(char *)(param_1 + 0x82) = *(char *)(param_1 + 0x82) + (char)iVar9;
  *(char *)(param_1 + 0x81) = (char)iVar9;
  return;
}
