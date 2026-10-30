/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 660F5D5980C43097FBF92BB892D6ABF84ADB9C4E5D2E5A9593E0321849DDEC58
 * Entry: 0x00072210, Ghidra index: 1276, label: FUN_00072210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_001e7880(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00414da0;
extern uint32_t DAT_00469948;
void FUN_00072210(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  
  iVar6 = param_1;
  iVar9 = *(int *)(param_1 + 0xcc);
  if (iVar9 != 0) {
    piVar8 = (int *)(DAT_00469948 + 8);
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      FUN_001e7880();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar9);
  }
  iVar9 = *(int *)(param_1 + 0xd0);
  if (iVar9 != 0) {
    piVar8 = (int *)(DAT_00469948 + 0xc);
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      FUN_001e7880();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar9);
  }
  iVar9 = 7;
  piVar8 = (int *)(param_1 + 200);
  do {
    uVar1 = piVar8[-1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      piVar8[-1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar5 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar5;
        if (piVar3 == piVar8 + -2) {
          *piVar5 = *(int *)*piVar5;
          break;
        }
        piVar5 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar9 = iVar9 + -1;
    piVar8 = piVar8 + -2;
  } while (iVar9 != 0);
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(iVar6 + 0x70) != 0) {
    FUN_0008f6e0();
  }
  iVar9 = 7;
  piVar8 = (int *)(iVar6 + 0x6c);
  do {
    uVar1 = piVar8[-1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      piVar8[-1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar5 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar5;
        if (piVar3 == piVar8 + -2) {
          *piVar5 = *(int *)*piVar5;
          break;
        }
        piVar5 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar9 = iVar9 + -1;
    piVar8 = piVar8 + -2;
    if (iVar9 == 0) {
      puVar4 = *(undefined4 **)(iVar6 + 0xc);
      if (puVar4 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar4;
      }
      FUN_001298b0(&param_1,uVar7,puVar4);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(iVar6 + 0xc));
    }
  } while( true );
}
