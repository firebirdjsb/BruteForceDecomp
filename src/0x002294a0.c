/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0268F72434062C6E2B925B6D0ECB2326A6A54A132C00C1C8954D35C063DF00FC
 * Entry: 0x002294a0, Ghidra index: 7667, label: FUN_002294a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003944d4;
extern uint32_t PTR_LAB_003944c0;
extern uint32_t PTR_LAB_003944d0;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_002294a0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002ea01d(0x410);
  if (piVar1 != (int *)0x0) {
    FUN_0022afe0();
    *piVar1 = (int)&PTR_FUN_003944d4;
    piVar1[6] = (int)&PTR_LAB_003944d0;
    piVar1[0x75] = (int)&PTR_LAB_003944c0;
    piVar1[0xfc] = 0;
    piVar1[0xfd] = 0;
    piVar1[1] = 0x1d;
    (**(code **)(*piVar1 + 4))();
    return piVar1;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
