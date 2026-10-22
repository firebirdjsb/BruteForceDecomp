/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39E738E34C948CE9B6CCFD2227ECBE011689F613CF5421D8C491F260D94C5842
 * Entry: 0x002899a0, Ghidra index: 9137, label: FUN_002899a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
undefined4 FUN_002899a0(void)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX == 0) {
    return 0;
  }
  if ((*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10) != -1) &&
     (iVar1 = FUN_00292690(), iVar1 != 0)) {
    return 0;
  }
  return 1;
}
