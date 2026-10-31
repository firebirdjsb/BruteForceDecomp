/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99B86FAE389A898E0757E8DBAD9150AF156CA446CEAFF3DA8472C497F12E7E83
 * Entry: 0x00171510, Ghidra index: 4849, label: FUN_00171510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only: FUN_001713d0.cpp draft is void(void).
 * Original Xbox register/stack inputs and runtime ABI remain ABI_UNVERIFIED. */
extern void FUN_001713d0(void);
void FUN_00171510(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 100) {
    FUN_001713d0();
  }
  return;
}
