/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F29EFAA87C43DF40EC9BFC1FCB60D04BCF023DFEFFA9B9FCC20CE91A51B112DC
 * Entry: 0x0008d7c0, Ghidra index: 1715, label: FUN_0008d7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t PTR_LAB_003a3fb4;
void FUN_0008d7c0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar1 == 0x17506391) {
    ppuStack_1c = &PTR_LAB_003a3fb4;
    uStack_c = 0xffffffff;
    uStack_18 = 0x2f;
    uStack_10 = 0;
    uStack_14 = 0;
    FUN_001fe370(&ppuStack_1c);
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x200))(1);
    iVar3 = 1;
    do {
      iVar2 = (**(code **)(*in_ECX + 8))(iVar3);
      if (iVar2 != 0) {
        FUN_0008ab50(iVar2);
        FUN_0008a890(iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
  }
  return;
}
