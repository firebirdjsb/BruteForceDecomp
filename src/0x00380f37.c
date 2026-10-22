/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F42F3999A755312D4FAD55D13904CEA37A7E05F639DE3A1372FB987054AE30B2
 * Entry: 0x00380f37, Ghidra index: 13542, label: FUN_00380f37
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_0037ecb4;
extern uint32_t PTR_DAT_0037ecc0;
undefined * FUN_00380f37(undefined4 param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_DAT_0037ecb4;
  while (((pcVar1 = *ppuVar2, pcVar1 == (char *)0x0 || ((char)((uint)param_1 >> 8) != pcVar1[1])) ||
         ((char)param_1 != *pcVar1))) {
    ppuVar2 = ppuVar2 + 1;
    if ((undefined **)((int)&PTR_DAT_0037ecc0 + 3) < ppuVar2) {
      return (undefined *)0x0;
    }
  }
  return *ppuVar2;
}
