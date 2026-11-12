/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FF9B08CE0ECEE8E308D5A754FFB9927C4517150F8B9866C80F6DAB2D648B5B1
 * Entry: 0x0020d590, Ghidra index: 7373, label: FUN_0020d590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing C++ draft declaration only; ABI_UNVERIFIED.
 * The original caller also forwards hidden EAX and an extra stack word.
 * Its void source signature loses the returned EAX. These mismatches remain;
 * this declaration does not recover the Xbox register/stack/return ABI. */
extern int FUN_0020db30(int param_1,int param_2);
void FUN_0020d590(undefined4 param_1,undefined4 param_2)

{
  FUN_0020db30(param_1,param_2);
  return;
}
