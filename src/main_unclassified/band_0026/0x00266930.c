/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32A88E03261976E31058EA2ECB5979E63F4BE8A4B85D1B3E137B3C2999147CA7
 * Entry: 0x00266930, Ghidra index: 8740, label: FUN_00266930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004060a4;
extern uint32_t DAT_004698d0;
void FUN_00266930(void)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = DAT_004698d0;
  if ((((*(byte *)(unaff_ESI + 0x1c) & 1) == 0) && (1 < *(int *)(unaff_ESI + 0x28))) &&
     ((DAT_004060a4 != '\0' || (((*(uint *)(unaff_ESI + 0x38) ^ DAT_004698d0) & 3) == 0)))) {
    if ((*(byte *)(unaff_ESI + 0x18) & 0x20) != 0) {
      FUN_002688c0(unaff_ESI);
      *(uint *)(unaff_ESI + 0x34) = uVar1;
      *(uint *)(unaff_ESI + 0x18) = *(uint *)(unaff_ESI + 0x18) | 0x10;
      return;
    }
    FUN_00266bf0(unaff_ESI);
    *(uint *)(unaff_ESI + 0x18) = *(uint *)(unaff_ESI + 0x18) | 0x10;
    *(uint *)(unaff_ESI + 0x34) = uVar1;
  }
  return;
}
