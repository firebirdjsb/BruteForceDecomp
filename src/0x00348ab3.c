/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F6BFE83BCB779F64568134070A507511EE5CAF07DD1812ACB919276163F449C
 * Entry: 0x00348ab3, Ghidra index: 12906, label: FUN_00348ab3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00348ab3(void)

{
  int in_ECX;
  
  KeRaiseIrqlToDpcLevel();
  KeQuerySystemTime(in_ECX + 0xad8);
                    /* WARNING: Could not recover jumptable at 0x00348ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KfLowerIrql();
  return;
}
