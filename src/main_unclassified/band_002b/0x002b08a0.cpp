/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0C40AD12EE84B8FEF24E59983E758A06824E095EA737DAFC360E447FEFDC7E3
 * Entry: 0x002b08a0, Ghidra index: 9728, label: FUN_002b08a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b08a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x20] != 0) {
    param_1[0x20] = param_1[0x20] + -1;
  }
  iVar1 = param_1[0x20];
  if (iVar1 == 0) {
    param_1[0x20] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
