/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F68D9F6BD049679436474D3D6100938240FBBC8FEE6DACC0AA0AF81B576A1EE
 * Entry: 0x002e5630, Ghidra index: 10472, label: FUN_002e5630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b68f8;
void FUN_002e5630(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  uint uVar2;
  
  if ((*in_ECX != 0) && (uVar2 = 0, in_ECX[2] != 0)) {
    puVar1 = &DAT_003b68f8;
    do {
      FUN_002e7b00(*puVar1,in_ECX[1]);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 6;
    } while (uVar2 < (uint)in_ECX[2]);
  }
  *in_ECX = 0;
  return;
}
