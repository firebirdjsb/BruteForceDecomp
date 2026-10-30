/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4FCCF562D7C55C6FB501E90133E6076B99B06367E96A56DA21A9B7C01E0B85A
 * Entry: 0x0008b880, Ghidra index: 1682, label: FUN_0008b880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_0008b880(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(*(int *)(DAT_00469948 + 0x22c + *(int *)(in_EAX + 4) * 4) + 0xc4);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0xbc);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 4);
  }
  return 0;
}
