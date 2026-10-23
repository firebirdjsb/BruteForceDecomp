/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A089E976D053E3C19EE8C208B5C9B8B55372BEED4A0C3B2C56493480E8F43459
 * Entry: 0x00348618, Ghidra index: 12898, label: FUN_00348618
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00348618(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || ((char)param_1 != '\0')) {
    uVar2 = 0;
  }
  else {
    KeRaiseIrqlToDpcLevel();
    iVar1 = FUN_00348472(param_1);
    if ((iVar1 == 0) || (*(char *)(iVar1 + 2) == '\x01')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    KfLowerIrql();
  }
  return uVar2;
}
