/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DD19173D6ACE943FEE4891B71F4CBCDBFF5607E7F7963F1EBC79DB06A6A1569
 * Entry: 0x0020d550, Ghidra index: 7371, label: FUN_0020d550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing C++ draft declaration only; ABI_UNVERIFIED.
 * The original caller also forwards hidden EAX and an extra stack word.
 * Its void source signature loses the returned EAX. These mismatches remain;
 * this declaration does not recover the Xbox register/stack/return ABI. */
extern int FUN_0020d870(int param_1,int param_2);
void FUN_0020d550(undefined4 param_1,undefined4 param_2)

{
  FUN_0020d870(param_1,param_2);
  return;
}
