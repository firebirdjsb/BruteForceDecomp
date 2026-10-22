/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94550006C05DAB3359545D334EEF7C4A9B9012CB7BA6F1D6190B74825471B53B
 * Entry: 0x000e1150, Ghidra index: 2764, label: FUN_000e1150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_000e1150(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  do {
    piVar3 = param_3;
    if (piVar3 == param_4) {
      *param_2 = piVar3;
      return;
    }
    param_3 = (int *)*piVar3;
  } while (piVar3 == *(int **)(param_1 + 4));
  *(int *)piVar3[1] = *piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
  if ((piVar3[3] != 0) && ((piVar3[3] & 1U) == 0)) {
    iVar5 = FUN_0008f690();
    piVar3[3] = 0;
    iVar1 = *(int *)(&DAT_00414da0 + iVar5 * 4);
    piVar4 = (int *)(&DAT_00414da0 + iVar5 * 4);
    while (iVar1 != 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == piVar3 + 2) {
        *piVar4 = *(int *)*piVar4;
        break;
      }
      piVar4 = piVar2;
      iVar1 = *piVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar3);
}
