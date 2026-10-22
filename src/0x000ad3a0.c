/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE5FFA4F9A4310EF58E6487EFDF1CB93B973DBDFECFBEFB939562B7BB30E5CB0
 * Entry: 0x000ad3a0, Ghidra index: 2071, label: FUN_000ad3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469950;
extern uint32_t DAT_00469b58;
extern uint32_t _DAT_004a5b94;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad3a0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  float10 fVar11;
  int local_14;
  short local_10;
  
  if ((param_3 != '\0') || (param_2 != *(int *)(param_1 + 0x74))) {
    *(int *)(param_1 + 0x74) = param_2;
    iVar5 = *(int *)(param_1 + 0x34);
    fVar11 = (float10)FUN_000b2870(iVar5);
    local_14 = (int)fVar11;
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar2 != 0x120785ef) {
      switch(param_2) {
      case 0:
        local_14 = local_14 + 0x80;
        break;
      case 1:
        local_14 = local_14 + 0x60;
        break;
      case 2:
      case 3:
        local_14 = local_14 + 0x40;
      }
    }
    sVar10 = 0x14;
    iVar8 = 0xe;
    sVar7 = 0;
    local_10 = 0xc;
    switch(param_2) {
    case 0:
      sVar10 = 0x10;
      iVar8 = 0xe;
      local_10 = 0xc;
      break;
    case 1:
      sVar10 = 0xe;
      iVar8 = 0xc;
      local_10 = 0xe;
      break;
    case 2:
    case 3:
      sVar10 = 0xc;
      iVar8 = 10;
      local_10 = 0x10;
    }
    iVar9 = 100;
    piVar2 = DAT_00469950;
    do {
      iVar1 = *(int *)(*(int *)(iVar9 + param_1) + 0x2c);
      if ((iVar1 != 0) &&
         (((piVar6 = *(int **)(iVar1 + 0x24), piVar6 == (int *)0x0 || (*piVar6 != 0xc626fd5)) ||
          (piVar6[1] != iVar8)))) {
        piVar6 = piVar2;
        if (iVar8 != 0) {
          piVar4 = piVar2 + 0xb0;
          iVar3 = 0;
          if (0 < *piVar4) {
            do {
              if ((piVar2[1] == iVar8) && (*piVar2 == 0xc626fd5)) {
                piVar4 = DAT_00469950 + iVar3 * 0xb;
                piVar2 = DAT_00469950;
                goto LAB_000ad4df;
              }
              iVar3 = iVar3 + 1;
              piVar2 = piVar2 + 0xb;
              piVar6 = DAT_00469950;
            } while (iVar3 < *piVar4);
          }
        }
        _DAT_004a5b94 = _DAT_004a5b94 + 1;
        piVar4 = (int *)0x0;
        piVar2 = piVar6;
LAB_000ad4df:
        *(int **)(iVar1 + 0x24) = piVar4;
      }
      iVar1 = *(int *)(iVar9 + param_1);
      *(short *)(iVar1 + 6) = sVar7;
      sVar7 = sVar7 + sVar10;
      iVar9 = iVar9 + 4;
      *(undefined2 *)(iVar1 + 4) = 0;
    } while (iVar9 < 0x70);
    fVar11 = (float10)FUN_000b2770(iVar5);
    iVar5 = (int)*(short *)(iVar5 + 0x20) / 2;
    *(short *)(param_1 + 8) = (short)iVar5;
    *(short *)(param_1 + 10) = ((short)(int)fVar11 + sVar10 * -3) - local_10;
    *(int *)(param_1 + 0x70) = local_14 - iVar5;
  }
  return;
}
