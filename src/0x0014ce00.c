/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9738E5FDC8AAA62F92D824EB763D214590F91162BBEA8E9D840ACAB6BD3FA02F
 * Entry: 0x0014ce00, Ghidra index: 4348, label: FUN_0014ce00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014ce00(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *unaff_ESI;
  
  cVar1 = (**(code **)(*unaff_ESI + 0x20))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_ESI + 0x34))(1);
  }
  (**(code **)(*unaff_ESI + 0x28))(param_2);
  (**(code **)(*unaff_ESI + 0x24))(param_2);
  return (int)*(short *)((int)unaff_ESI + 0x1a);
}
