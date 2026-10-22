/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4EFDFB5A1634C64B4F5E1FA6F2594B2AC120603416EB395A2961A67C8C76298
 * Entry: 0x0035ae30, Ghidra index: 13191, label: FUN_0035ae30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035ae30(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    XAPILIB__ReleaseMutex(*(int *)(param_2 + 4));
  }
  return;
}
