/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5DA0A3FAF2684AE86CD3153968F544B9C313493E5CE945F0D3A86F5491D66DA
 * Entry: 0x0008c2a0, Ghidra index: 1698, label: FUN_0008c2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
void FUN_0008c2a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0x21c;
  piVar4 = (int *)(param_1 + 0x94);
  do {
    iVar1 = FUN_0008c1b0(param_1);
    if (iVar1 != 9) {
      if (*(char *)(*(int *)(DAT_00469948 + iVar3) + 4) == '\0') {
        iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xbf0);
        if ((*(char *)(iVar1 + 0x84) == '\0') && (*(int *)(iVar1 + 0x8c) != 0)) {
          piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          iVar1 = (**(code **)(*piVar2 + 0x54))(0x15);
          if (iVar1 == 0) {
            piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
            iVar1 = (**(code **)(*piVar2 + 0x54))(0);
            if (iVar1 == 0) goto LAB_0008c35c;
          }
        }
        if ((*piVar4 == 0) &&
           (iVar1 = FUN_0008bd40(*(undefined4 *)(param_1 + 0x48)), *piVar4 != iVar1)) {
LAB_0008c351:
          FUN_0008f6a0(iVar1);
        }
      }
      else if (*piVar4 != 0) {
        iVar1 = 0;
        goto LAB_0008c351;
      }
    }
LAB_0008c35c:
    iVar3 = iVar3 + 4;
    piVar4 = piVar4 + 2;
    if (0x228 < iVar3) {
      return;
    }
  } while( true );
}
