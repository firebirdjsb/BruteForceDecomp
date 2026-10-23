/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E42EF0A51D739145C0EBCDBEC9740A87C7E8DACB11FA959318359CD551508B86
 * Entry: 0x001451b0, Ghidra index: 4188, label: FUN_001451b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001451b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)*in_ECX)();
    (**(code **)(*piVar2 + 8))(param_1 + 0x24);
  }
  iVar1 = (**(code **)(in_ECX[1] + 4))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(in_ECX[1] + 4))();
    (**(code **)(*piVar2 + 0xc))(param_1);
  }
  return;
}
