/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63D6FFC0E95CC63420BE656278FD69EA476D57B63F2D8F62911CCE13AC2326AF
 * Entry: 0x003468f1, Ghidra index: 12834, label: FUN_003468f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003468f1(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_003454a2(param_1);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      KeRaiseIrqlToDpcLevel();
      FUN_00345e88(iVar2,*(undefined4 *)(iVar2 + 0x20),0x80072777);
      FUN_00345e88(iVar2,*(undefined4 *)(iVar2 + 0x30),0x80072777);
      KfLowerIrql();
      *(undefined4 *)(iVar2 + 8) = 0x2b434f53;
      uVar1 = 0;
    }
  }
  return uVar1;
}
