/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE72CD0DEE22DC6E4B659B766C9E0BDE01CB92563725ABAB856EAF24C6D671F0
 * Entry: 0x0014ce40, Ghidra index: 4349, label: FUN_0014ce40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014ce40(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar2 = FUN_00160da0(0xffffffff,1);
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x20))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_ESI + 0x34))(1);
  }
  (**(code **)(*unaff_ESI + 0x28))(iVar2);
  (**(code **)(*unaff_ESI + 0x24))(param_1);
  return (int)*(short *)((int)unaff_ESI + 0x1a);
}
