/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08D60D0C2706699F2C477EE7220142692AE5B214EFF4A05AEB00BD6A589A6593
 * Entry: 0x00294a10, Ghidra index: 9300, label: FUN_00294a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9768;
extern uint32_t DAT_00469888;
extern uint32_t PTR_DAT_003b9760;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_00469884;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00294a10(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  piVar1 = *(int **)(DAT_00469888 + 0x60);
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      puVar2 = *(undefined **)(piVar1[2] + iVar3 * 4);
      if (puVar2 != &DAT_003b9768) {
        PTR_DAT_003b9760 = (undefined *)0x404874;
        _DAT_00469884 = 0x40;
        (*(code *)PTR_FUN_003bc654)(puVar2);
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  PTR_DAT_003b9760 = (undefined *)0x404874;
  _DAT_00469884 = 0x40;
  (*(code *)PTR_FUN_003bc654)(piVar1[2]);
  return;
}
