/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A70A62012D9324DC2F8E7F7D8ED9180D3B559FFC9EDF47740D9910BE2AF3CCCA
 * Entry: 0x00347182, Ghidra index: 12845, label: FUN_00347182
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347182(void)

{
  int *piVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 3) & 2) != 0) {
    KeRaiseIrqlToDpcLevel();
    while (piVar1 = *(int **)(in_ECX + 0xbd8), piVar1 != (int *)(in_ECX + 0xbd8)) {
      FUN_00346cd5(piVar1,1);
    }
    while (piVar1 = *(int **)(in_ECX + 0xbe0), piVar1 != (int *)(in_ECX + 0xbe0)) {
      FUN_00346cd5(piVar1,1);
    }
                    /* WARNING: Could not recover jumptable at 0x003471ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    KfLowerIrql();
    return;
  }
  return;
}
