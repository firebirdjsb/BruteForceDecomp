/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04F88688940C99737D011615B549BF7DBCB839A25043E9F35BB13A33C88BE65D
 * Entry: 0x001242e0, Ghidra index: 3681, label: FUN_001242e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469984;
extern uint32_t DAT_0046d100;
void FUN_001242e0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x78c) == 0) && (*(int *)(*(int *)(unaff_ESI + 0xc) + 0x25c) != 0)) {
    uVar1 = FUN_0017c170(DAT_00469984);
    *(undefined4 *)(unaff_ESI + 0x78c) = uVar1;
    FUN_0017c110(&DAT_0046d100,1);
  }
  return;
}
