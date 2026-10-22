/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE945C147F1108B7C3B761609331D5F69A92CF5DDB204013D3BB749F39CB599B
 * Entry: 0x001e97c0, Ghidra index: 6858, label: FUN_001e97c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f7d4;
extern uint32_t DAT_00469970;
extern uint32_t *DAT_0046d0f8;
extern uint32_t PTR_DAT_003bc940;
int * FUN_001e97c0(void)

{
  int *piVar1;
  int *in_ECX;
  int *unaff_EBX;
  int *piVar2;
  undefined4 *puVar3;
  int *local_4;
  
  local_4 = in_ECX;
  if (((DAT_00469970 != 0) &&
      (piVar2 = *(int **)(DAT_00469970 + 8),
      FUN_001e9a10(&local_4,*(undefined4 *)(DAT_00469970 + 4),piVar2,0), local_4 != piVar2)) &&
     (*local_4 == *unaff_EBX)) {
    if ((uint)local_4[7] < 8) {
      piVar2 = local_4 + 2;
    }
    else {
      piVar2 = (int *)local_4[2];
    }
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
  }
  piVar2 = (int *)0x0;
  if (DAT_0046d0f8 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*DAT_0046d0f8;
  }
  if (puVar3 != DAT_0046d0f8) {
    do {
      piVar1 = *(int **)(puVar3[2] + 8);
      FUN_001e9a10(&local_4,*(undefined4 *)(puVar3[2] + 4),piVar1,0);
      if ((local_4 != piVar1) && (*local_4 == *unaff_EBX)) {
        if ((uint)local_4[7] < 8) {
          piVar2 = local_4 + 2;
        }
        else {
          piVar2 = (int *)local_4[2];
        }
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != DAT_0046d0f8);
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
  }
  piVar2 = *(int **)(DAT_0041f7d4 + 8);
  FUN_001e9a10(&local_4,*(undefined4 *)(DAT_0041f7d4 + 4),piVar2,0);
  if ((local_4 != piVar2) && (*local_4 == *unaff_EBX)) {
    if (7 < (uint)local_4[7]) {
      return (int *)local_4[2];
    }
    return local_4 + 2;
  }
  return (int *)PTR_DAT_003bc940;
}
