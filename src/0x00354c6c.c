/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA33741C4092592CF964BFBF1D27D796D518718E73BC65EC7BE85E9A5F5E5274
 * Entry: 0x00354c6c, Ghidra index: 13114, label: FUN_00354c6c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00354c6c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((((param_2 == 0) && (2 < *(byte *)(param_1 + 0x7c))) &&
      ((*(short *)(param_1 + 0x80) == 0 || (*(short *)(param_1 + 0x82) != 0)))) &&
     (iVar1 = FUN_00354426(param_1,0x18,0), -1 < iVar1)) {
    if (*(short *)(param_1 + 0x80) == 0) {
      uVar2 = (uint)*(byte *)(in_ECX + 0x32);
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 0x82);
    }
    uVar3 = FUN_0034c3bf(param_1 + 0x6c,uVar2 * 5);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    return 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_0035343c(param_1,0);
  }
  else {
    FUN_00353101(param_1);
  }
  FUN_0034c35a(param_1 + 0x6c,0xffffffff);
  return 1;
}
