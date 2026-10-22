/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34A176354C48A212AD60583CE09D0B7E942B6EFD57BBFAD2D75693CBCBA75DBD
 * Entry: 0x002b54f0, Ghidra index: 9793, label: FUN_002b54f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002b54f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002ea01d(0xa0);
  if (iVar1 != 0) {
    uVar2 = FUN_002ccc70(iVar1,**(undefined4 **)(param_1 + 0xc),param_4);
    return uVar2;
  }
  return 0;
}
