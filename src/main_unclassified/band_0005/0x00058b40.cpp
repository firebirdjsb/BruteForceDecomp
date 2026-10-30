/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FCC392EA10D628994CD52BA744EBF3832933225BC0A4F5123A7A8751BE8FA16
 * Entry: 0x00058b40, Ghidra index: 880, label: FUN_00058b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00058b40(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00058b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x14) + 8) + 4))();
    return iVar1;
  }
  return in_ECX + 4;
}
