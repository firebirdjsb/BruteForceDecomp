/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 268923F99B7F2B06B9A7BBD2032FA63D996F2BF7E65432433E24FD6973665BF9
 * Entry: 0x0008b9a0, Ghidra index: 1684, label: FUN_0008b9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008b9a0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x60) != 0) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar1 + 0x14))(*(undefined4 *)(unaff_ESI + 0x60));
  }
  return;
}
