/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06CC18A298C5AEA96408D582A6CA9199E067AC7E5BA884D49A245CD6E07D1B6B
 * Entry: 0x00144ec0, Ghidra index: 4181, label: FUN_00144ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 * FUN_00144ec0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_000120f0();
  if (iVar1 != 0) {
    uVar2 = FUN_000120f0();
    uVar2 = uVar2 & -(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0);
    if (uVar2 != 0) {
      return (undefined4 *)(uVar2 + 4);
    }
  }
  return &DAT_0046d064;
}
