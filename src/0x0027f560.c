/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C7AAD69E6E324F6C30E3F2BD7388BE806439155C49D987435481FB70B75D0A5
 * Entry: 0x0027f560, Ghidra index: 9020, label: FUN_0027f560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391b50;
bool FUN_0027f560(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[3] = 1;
    *puVar1 = &PTR_LAB_00391b50;
    puVar1[4] = unaff_ESI;
    puVar1[5] = param_1;
    if (unaff_ESI != 0) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + 1;
      *param_2 = puVar1;
      return puVar1 != (undefined4 *)0x0;
    }
  }
  *param_2 = puVar1;
  return puVar1 != (undefined4 *)0x0;
}
