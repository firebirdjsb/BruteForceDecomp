/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB0AB9EFA04F8F43837A67846AFC18CC4FDAE54E18B0258E2CCD64C79A79438C
 * Entry: 0x002e49c0, Ghidra index: 10458, label: FUN_002e49c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */
extern undefined4 FUN_002e4550(undefined4 param_1);
uint FUN_002e49c0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_002e4550(param_1);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  iVar2 = (**(code **)*in_ECX)();
  iVar1 = iVar1 - iVar2 >> 4;
  *param_3 = in_ECX[iVar1 * 4 + 0x15];
  if (param_2 != (int *)0x0) {
    iVar1 = in_ECX[(iVar1 + 5) * 4];
    *param_2 = iVar1;
    return (iVar1 != 0) - 1 & 0x80004005;
  }
  return 0;
}
