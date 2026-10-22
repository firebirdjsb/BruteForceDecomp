/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F2F0C1FEC81A01ADC4D224366ED9A35CE7B7FAE48EC4F6C5807F80556B37DFE
 * Entry: 0x000d7cd0, Ghidra index: 2671, label: FUN_000d7cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_000d7cd0(void)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX == (int *)0x0) {
    return true;
  }
  switch(in_EAX) {
  case 0:
    iVar2 = (**(code **)(*in_ECX + 4))();
    return iVar2 != 0;
  case 1:
    iVar2 = (**(code **)(*in_ECX + 4))();
    if (iVar2 != 0) {
      return true;
    }
    piVar1 = (int *)(**(code **)(*in_ECX + 0xc))();
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 7)) {
      iVar2 = (**(code **)(*piVar1 + 0x5c))();
      return iVar2 == 0x11;
    }
    break;
  case 2:
    piVar1 = (int *)(**(code **)(*in_ECX + 0xc))();
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x20))();
      return iVar2 == 0xe;
    }
    break;
  case 3:
    piVar1 = (int *)(**(code **)(*in_ECX + 0xc))();
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x20))();
      return iVar2 == 7;
    }
  }
  return false;
}
