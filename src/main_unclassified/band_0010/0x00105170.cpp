/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4757803A66D14BEED38D725EF3E5B797FE3913582157D8D5A4763612868416C8
 * Entry: 0x00105170, Ghidra index: 3338, label: FUN_00105170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00105170(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  
  puVar2 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e8))();
  *puVar2 = *unaff_ESI;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(unaff_ESI + 1);
  puVar2[2] = unaff_ESI[2];
  puVar2[3] = unaff_ESI[3];
  puVar2[4] = unaff_ESI[4];
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(unaff_ESI + 5);
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1ec))();
  if (cVar1 != '\0') {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}
