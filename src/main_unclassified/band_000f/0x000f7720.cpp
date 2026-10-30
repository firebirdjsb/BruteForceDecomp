/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C0DDBC75005069193FE904E28C0BCC34A32E7EC53989FCECD21973D758876AE
 * Entry: 0x000f7720, Ghidra index: 3103, label: FUN_000f7720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000f7720(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x90))();
  if ((*piVar2 != DAT_0046d064) && (*piVar2 != *(int *)(unaff_EBX + 0x24))) {
    cVar1 = FUN_002e5a70();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&DAT_0046d064);
      return;
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    FUN_00100f90();
    iVar3 = FUN_001016d0();
    if (iVar3 != 0) {
      FUN_000ffe10(unaff_EBX);
      FUN_00109660();
    }
  }
  return;
}
