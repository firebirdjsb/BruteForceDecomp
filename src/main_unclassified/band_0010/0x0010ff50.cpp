/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEC3A22CD971645093C97F7D9033BAF917585868DD0FE067718AB21AAEF448C0
 * Entry: 0x0010ff50, Ghidra index: 3547, label: FUN_0010ff50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0010ff50(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 0x6f) & 1) != 0) {
    return in_ECX + 0x6c;
  }
  iVar1 = (**(code **)(*in_ECX + 0x40))();
  return (int *)(iVar1 + 0x24);
}
