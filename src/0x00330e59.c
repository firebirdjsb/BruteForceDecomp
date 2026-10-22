/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 946EDC8DAA174C7948A0F24C17AEBDD350CAEE72ECC7C6C8B3C95448471E5214
 * Entry: 0x00330e59, Ghidra index: 12380, label: FUN_00330e59
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00330e59(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00330c53(*(int *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0xb0));
  }
  FUN_0033ea20(param_1);
  return;
}
