/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AD1A82DD7CCEDE16A1F586B19612FD1B249530D11EFFF4B461DDD5B71E30360
 * Entry: 0x003118df, Ghidra index: 11897, label: FUN_003118df
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra source-matched call only; original guest ABI_UNVERIFIED. */
extern undefined4 * FUN_003148cf(undefined4 param_1,uint param_2,int param_3);
void FUN_003118df(undefined4 param_1)

{
  FUN_003148cf(0x626f5344,param_1,1);
  return;
}
