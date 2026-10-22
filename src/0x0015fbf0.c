/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 535D6D82CCB4C2F45F51E69741846AAE4D2A625FE6FEC17827FC6C2033C97852
 * Entry: 0x0015fbf0, Ghidra index: 4577, label: FUN_0015fbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015fbf0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  in_ECX[0x10] = param_1[0x10];
  iVar1 = *in_ECX;
  uVar2 = (**(code **)(*param_1 + 0x40))();
  (**(code **)(iVar1 + 0x44))(uVar2);
  return;
}
