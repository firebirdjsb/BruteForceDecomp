/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97E87C7AC33CE867026823D088AD560560686DF841CAED82B5EE60AB799F36DD
 * Entry: 0x000f68f0, Ghidra index: 3083, label: FUN_000f68f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000f68f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  uVar3 = (**(code **)(*unaff_ESI + 4))();
  if (uVar3 != 3) {
    return uVar3 & 0xffffff00;
  }
  iVar2 = *(int *)(param_1 + 0xbf0);
  if (unaff_ESI[0x1c] == 0) {
    *(undefined1 *)(iVar2 + 0x84) = 1;
  }
  else {
    if (*(char *)(iVar2 + 0x84) == '\0') goto LAB_000f6935;
    *(undefined1 *)(iVar2 + 0x84) = 0;
  }
  *(undefined1 *)(iVar2 + 200) = 1;
LAB_000f6935:
  *(byte *)(iVar1 + 100) = *(byte *)(iVar1 + 100) | 4;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
