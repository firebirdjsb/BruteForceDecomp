/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A523168E01C1812BDCCE9E0A7531FE429BAF563034B349936F643FBAD7AD1D2
 * Entry: 0x0014af20, Ghidra index: 4310, label: FUN_0014af20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014af20(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[8];
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x5c))();
    (**(code **)(**(int **)(iVar2 + 0x15c) + 0x20))(iVar1);
    (**(code **)(*in_ECX + 0x30))();
  }
  return;
}
