/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50E3FE1E1116743E38134DAF73496F8AF217487AE2F13E3D0C2317A513FA41E7
 * Entry: 0x00055610, Ghidra index: 811, label: FUN_00055610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00055610(void)

{
  int in_EAX;
  int iVar1;
  
  if ((*(int *)(in_EAX + 0x24) != 1) && (*(int **)(in_EAX + 0xc) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(in_EAX + 0xc) + 0x40))();
    return iVar1 + 0x24;
  }
  return in_EAX + 0x10;
}
