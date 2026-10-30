/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A76F7541966C175F8655AA2091F59D4AB5562EF7B8A1D806607357B1C736EF0
 * Entry: 0x00295560, Ghidra index: 9319, label: FUN_00295560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9630;
extern uint32_t DAT_003b9634;
extern char s_tableEM_00404610[];
undefined4 FUN_00295560(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  
  iVar2 = 0;
  iVar1 = DAT_003b9630;
  while( true ) {
    if (0x7ffffffc < iVar1) {
      FUN_0028ab50(s_tableEM_00404610);
      return 0;
    }
    if (in_EDX < iVar1) break;
    iVar1 = (&DAT_003b9634)[iVar2];
    iVar2 = iVar2 + 1;
  }
  return (&DAT_003b9630)[iVar2];
}
