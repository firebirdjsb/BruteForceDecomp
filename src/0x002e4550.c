/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F79363D100A97886D461B8A1A252FBA5AD7B43C078B54C8BBD74DDB794B4488F
 * Entry: 0x002e4550, Ghidra index: 10446, label: FUN_002e4550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e4550(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = (**(code **)(*in_ECX + 8))();
  if (iVar1 != 0) {
    do {
      iVar1 = (**(code **)(*in_ECX + 4))(uVar4);
      iVar1 = __stricmp(param_1,*(undefined4 *)(iVar1 + 4));
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*in_ECX + 4))(uVar4);
        return uVar3;
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*in_ECX + 8))();
    } while (uVar4 < uVar2);
  }
  return 0;
}
