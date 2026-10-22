/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75DE2E2E0677FFC02756108B09FE1297C8E0555A9F1EA89E080C9C0EEF0C6D61
 * Entry: 0x001b04e0, Ghidra index: 5584, label: FUN_001b04e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b04e0(void)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  
  if (in_EAX == 0) {
    FUN_0017c510();
    return;
  }
  if (*in_ECX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      FUN_001c6840(iVar1);
      *in_ECX = iVar1;
      FUN_0017caf0();
      return;
    }
    *in_ECX = 0;
    FUN_0017caf0();
  }
  return;
}
