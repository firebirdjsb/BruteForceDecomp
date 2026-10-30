/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7FBF1567D87634C65B8097F43D5ECC50D708187D49B20A25AC85C36553F92F8
 * Entry: 0x00253510, Ghidra index: 8401, label: FUN_00253510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00253510(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  undefined4 uVar3;
  undefined1 local_10 [16];
  
  uVar3 = *(undefined4 *)(unaff_EDI + 0xc);
  iVar1 = FUN_002ea01d(0x3c,uVar3);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0027f5e0(uVar3,local_10,local_10);
  }
  *param_3 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    return 1;
  }
  return 0;
}
