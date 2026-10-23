/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 945B37BB2F0DC8548782C788C5770571EC80C0A598ABC6A7DC4DF83F294F94BE
 * Entry: 0x00315f97, Ghidra index: 12125, label: FUN_00315f97
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315f97(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x6e0);
  iVar2 = *piVar1;
  FUN_003118c0(param_1);
  piVar3 = (int *)*piVar1;
  if (piVar3 == piVar1) {
    KeCancelTimer(in_ECX + 0x720);
    KeRemoveQueueDpc(in_ECX + 0x748);
  }
  else if (param_1 == iVar2) {
    KeSetTimer(in_ECX + 0x720,piVar3[6],piVar3[7],in_ECX + 0x748);
  }
  return;
}
