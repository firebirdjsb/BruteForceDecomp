/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 121A4D050D4F2BCA337B74EAC1FD9F69509CA1E4D041466E834E5E1BA8EDC565
 * Entry: 0x000d5f60, Ghidra index: 2661, label: FUN_000d5f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000d5f60(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_ESI;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_00469b58 + 8);
  cVar1 = (**(code **)(*piVar2 + 0x24))();
  if (cVar1 != '\0') {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x58))();
    if (*piVar2 == 0x120785ef) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        pbVar4 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar3);
        if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) &&
           (iVar5 = FUN_000d4590(*(int *)(pbVar4 + 0x9c) + 0x20), iVar5 != 0)) {
          iVar5 = iVar5 + 4;
          if (*(int *)(unaff_ESI + 0xbfc) == 0) {
            iVar6 = FUN_002ea01d(0x70);
            if (iVar6 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_000d6150();
            }
            *(undefined4 *)(unaff_ESI + 0xbfc) = uVar7;
          }
          FUN_000764c0(iVar5);
          FUN_000764c0(iVar5);
          FUN_000764c0(iVar5);
          FUN_000764c0(iVar5);
          FUN_000764c0(iVar5);
          FUN_000764c0(iVar5);
        }
      } while (iVar3 < 8);
      return;
    }
    if (*piVar2 == -0x104e72d8) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        pbVar4 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar3);
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) {
          uStack_4 = *(undefined4 *)(pbVar4 + 0x14);
          iVar5 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x108))(&uStack_4);
          if (iVar5 != 0) {
            iVar5 = iVar5 + 0x18;
            if (*(int *)(unaff_ESI + 0xbfc) == 0) {
              iVar6 = FUN_002ea01d(0x70);
              if (iVar6 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_000d6150();
              }
              *(undefined4 *)(unaff_ESI + 0xbfc) = uVar7;
            }
            FUN_000764c0(iVar5);
            FUN_000764c0(iVar5);
            FUN_000764c0(iVar5);
            FUN_000764c0(iVar5);
            FUN_000764c0(iVar5);
            FUN_000764c0(iVar5);
          }
        }
      } while (iVar3 < 8);
    }
  }
  return;
}
