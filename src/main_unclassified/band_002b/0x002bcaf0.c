/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EE30D6176DED0752A9E8DE44B976DBAD5E218D3D2132BB4BAB657C38E336D50
 * Entry: 0x002bcaf0, Ghidra index: 9927, label: FUN_002bcaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bcaf0(undefined4 param_1,undefined4 param_2)

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
      (**(code **)(**(int **)(*(int *)(iVar1 + 8) + uVar3 * 4) + 0xc))(param_2);
    } while (((int)uVar3 < 1) || (iVar2 = FUN_002bc920(), iVar2 != 0));
  }
  return;
}
