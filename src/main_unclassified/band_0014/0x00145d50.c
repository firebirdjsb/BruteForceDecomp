/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE8B6E7FBD8D4D25973C66E2743ADD7EF71DD6EAF1E0379098D4DAC9116985DB
 * Entry: 0x00145d50, Ghidra index: 4201, label: FUN_00145d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00145d50(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002ea01d(0x1d4);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00145d90();
    (**(code **)(*piVar2 + 4))();
    return piVar2;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
