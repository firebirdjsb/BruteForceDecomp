/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24707930B4E3455FD42BC4A6CA90AF6266D72B8D1D1ED0443383EC7CED0E2249
 * Entry: 0x00293ff0, Ghidra index: 9275, label: FUN_00293ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00293ff0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(DAT_00469888 + 0x70)) {
    iVar2 = 0;
    iVar1 = DAT_00469888;
    do {
      if (*(int *)(*(int *)(iVar1 + 0x6c) + 0x10 + iVar2) == 0) {
        FUN_00294270(*(int *)(iVar1 + 0x6c) + iVar2);
        iVar1 = DAT_00469888;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 < *(int *)(iVar1 + 0x70));
  }
  return;
}
