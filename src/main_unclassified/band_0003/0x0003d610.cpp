/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB1D934313275D889AC89D630B54F5624CBE1D1D43AA1377CB93037F5A458895
 * Entry: 0x0003d610, Ghidra index: 447, label: FUN_0003d610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00049ca0(void);

undefined4 FUN_0003d610(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)*in_ECX)();
    iVar1 = (**(code **)(*piVar2 + 0xf4))();
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x14) & 2) != 0)) {
      uVar3 = FUN_00049ca0();
      return uVar3;
    }
  }
  return 0;
}
