/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C4142ADE8268864777C50E12EBAC98C775E9BC7C768E1B025ACF169B3B6042E
 * Entry: 0x002bca90, Ghidra index: 9926, label: FUN_002bca90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bca90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_002bc920();
  if (iVar1 != 0) {
    uVar3 = (uint)*(ushort *)(iVar1 + 6);
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      (**(code **)**(undefined4 **)(*(int *)(iVar1 + 8) + uVar3 * 4))(param_2);
    } while (((int)uVar3 < 1) || (iVar2 = FUN_002bc920(), iVar2 != 0));
  }
  return;
}
