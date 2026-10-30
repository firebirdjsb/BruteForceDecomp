/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2320E22B5E80F4E80C3D7A2A009347F11B598CDE495AE46CB09FAE85F28507B
 * Entry: 0x00038fd0, Ghidra index: 391, label: FUN_00038fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000e1910(void);
extern void FUN_000389d0(void);

extern uint32_t DAT_00414da0;
void FUN_00038fd0(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_10;
  uint local_c;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    uVar4 = *param_2;
    local_c = 0;
    if ((uVar4 != 0) && (local_c = uVar4, (uVar4 & 1) == 0)) {
      uVar4 = uVar4 * 0x19660d + 0x3c6ef35f >> 0x15;
      local_10 = *(int *)(&DAT_00414da0 + uVar4 * 4);
      *(int **)(&DAT_00414da0 + uVar4 * 4) = &local_10;
    }
    iVar1 = *(int *)(param_4 + 4);
    iVar5 = FUN_000e1910(param_4,iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    if ((local_c != 0) && ((local_c & 1) == 0)) {
      iVar1 = *(int *)(&DAT_00414da0 + (local_c * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar3 = (int *)(&DAT_00414da0 + (local_c * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar1 != 0) {
        piVar2 = (int *)*piVar3;
        if (piVar2 == &local_10) {
          *piVar3 = *(int *)*piVar3;
          break;
        }
        piVar3 = piVar2;
        iVar1 = *piVar2;
      }
    }
    param_2 = param_2 + 1;
    if (param_2 == param_3) {
      *param_1 = param_4;
      return;
    }
  } while( true );
}
