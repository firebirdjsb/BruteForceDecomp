/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FFB9F781C057D67016BD3942D5AB121E0C407E5739F9AC0B588424B1D17FAE4
 * Entry: 0x0007f5b0, Ghidra index: 1502, label: FUN_0007f5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b5c;
extern uint32_t _DAT_0046999c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007f5b0(void)

{
  char *pcVar1;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x5c0) != 0) {
    FUN_0007f620();
  }
  pcVar1 = *(char **)(in_EAX + 0x6b4);
  if ((*(int *)(pcVar1 + 0x48) != 0) && (pcVar1[0xc] == '\0')) {
    if (*pcVar1 == '\0') {
      *(undefined4 *)(in_EAX + 0x5c0) = 0;
    }
    else {
      *(undefined4 *)(in_EAX + 0x5c0) = *(undefined4 *)(pcVar1 + 8);
    }
    _DAT_0046999c = *(undefined4 *)(in_EAX + 0x5c0);
    DAT_00469b5c = _DAT_0046999c;
    FUN_000d6520(_DAT_0046999c);
    return 0;
  }
  return 0x80004005;
}
