/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E38C941CBEA7EFB1CEE4CFF8A3ADE2517E2899E006E311A4B9A1BF32E7E685A
 * Entry: 0x00106590, Ghidra index: 3354, label: FUN_00106590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00106590(int *param_1,int param_2)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(in_EAX + 4);
  piVar2 = piVar1;
  if (7 < *(uint *)(in_EAX + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_2 - (int)piVar2 >> 1;
  }
  FUN_00087a00();
  if (7 < *(uint *)(in_EAX + 0x18)) {
    *param_1 = *piVar1 + iVar3 * 2;
    return;
  }
  *param_1 = (int)piVar1 + iVar3 * 2;
  return;
}
