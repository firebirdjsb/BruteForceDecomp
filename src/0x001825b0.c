/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B6F454C67186CF2B966301828BF3C8B20112105C1766FB4FEF1C1B479E65561
 * Entry: 0x001825b0, Ghidra index: 5178, label: FUN_001825b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001825b0(undefined4 param_1,int param_2)

{
  char in_AL;
  char cVar1;
  int in_ECX;
  int iVar2;
  
  if (in_ECX != 0) {
    iVar2 = *(int *)(in_ECX + 8 + param_2 * 4);
    if ((in_AL != '\0') && (iVar2 == 1)) {
      iVar2 = -1;
    }
    iVar2 = FUN_00182200(iVar2);
    if (iVar2 != 0) {
      cVar1 = FUN_00181db0(param_2);
      if (cVar1 != '\0') {
        FUN_00182550();
        return iVar2;
      }
    }
  }
  return 0;
}
