/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 141118F210F9D42DE383BE133B98A7B44A22700DFDEC2CB2FFE1EBB019BA1EC7
 * Entry: 0x00072750, Ghidra index: 1280, label: FUN_00072750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00072750(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar7 = param_1;
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = (undefined4 *)**(undefined4 **)(param_1 + 0xc);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  for (; puVar12 != puVar1; puVar12 = (undefined4 *)*puVar12) {
    if ((undefined4 *)puVar12[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar12[2])(1);
    }
  }
  puVar12 = *(undefined4 **)(iVar7 + 0xc);
  if (puVar12 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar12;
  }
  FUN_001298b0(&param_1,uVar9,puVar12);
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0xc);
  puVar10 = (uint *)(iVar7 + 0x38);
  iVar11 = 7;
  do {
    uVar2 = *puVar10;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        *puVar10 = 0;
        uVar3 = *(uint *)(&DAT_00414da0 + (uVar2 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        puVar6 = (uint *)(&DAT_00414da0 + (uVar2 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (uVar3 != 0) {
          puVar4 = (uint *)*puVar6;
          if (puVar4 == puVar10 + -1) {
            *puVar6 = *(uint *)*puVar6;
            break;
          }
          puVar6 = puVar4;
          uVar3 = *puVar4;
        }
      }
      *puVar10 = 0;
    }
    puVar10 = puVar10 + 2;
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      uVar2 = *(uint *)(iVar7 + 0x70);
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          *(undefined4 *)(iVar7 + 0x70) = 0;
          piVar8 = (int *)(&DAT_00414da0 + (uVar2 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          if (*(int *)(&DAT_00414da0 + (uVar2 * 0x19660d + 0x3c6ef35f >> 0x15) * 4) != 0) {
            while (piVar5 = (int *)*piVar8, piVar5 != (int *)(iVar7 + 0x6c)) {
              piVar8 = piVar5;
              if (*piVar5 == 0) {
                *(undefined4 *)(iVar7 + 0x70) = 0;
                return;
              }
            }
            *piVar8 = *(int *)*piVar8;
          }
        }
        *(undefined4 *)(iVar7 + 0x70) = 0;
      }
      return;
    }
  } while( true );
}
