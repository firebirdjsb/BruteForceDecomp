/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D301099EC2446E3FA81E80B35D5EFC25EEC546FD56453F30B45AE7CDE50DEDE
 * Entry: 0x0024bae0, Ghidra index: 8265, label: FUN_0024bae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing C++ draft declaration only; ABI_UNVERIFIED.
 * The original caller also forwards hidden EAX and an extra stack word.
 * Its void source signature loses the returned EAX. These mismatches remain;
 * this declaration does not recover the Xbox register/stack/return ABI. */
extern int FUN_0024c750(int param_1,int param_2);
void FUN_0024bae0(undefined4 param_1,undefined4 param_2)

{
  FUN_0024c750(param_1,param_2);
  return;
}
