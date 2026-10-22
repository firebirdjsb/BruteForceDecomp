/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B68C2BA939D34A9470E2FBB99C5B1B962823F7E53658F87AE3127FA036AC6BF
 * Entry: 0x00347a1c, Ghidra index: 12870, label: FUN_00347a1c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_00347a1c(undefined4 param_1)

{
  int iVar1;
  undefined1 local_1f0 [492];
  
  if (DAT_0040f5b4 != 0) {
    iVar1 = FUN_00347918(local_1f0);
    if (iVar1 != 0) {
      iVar1 = FUN_0035027b(local_1f0,param_1);
      if (iVar1 != 0) {
        FUN_00347871(local_1f0);
      }
    }
  }
  return 1;
}
