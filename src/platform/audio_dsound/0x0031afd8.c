/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15462E4C322F910A88EEDB5699260315825E1764F24B7E49960840A59E4B0012
 * Entry: 0x0031afd8, Ghidra index: 12286, label: FUN_0031afd8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032ff08;
void FUN_0031afd8(int param_1)

{
  int *piVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -0x10);
  FUN_003118f0();
  *DAT_0032ff08 = *DAT_0032ff08 - *(int *)(param_1 + -8);
  *(undefined4 *)(param_1 + -4) = 0;
  for (; ((piVar1 = (int *)*piVar2, piVar1 != in_ECX + 4 && (piVar1[3] == 0)) &&
         ((int *)(piVar2[2] + (int)piVar2) == piVar1)); piVar2 = (int *)FUN_0031ae9c(piVar2,piVar1))
  {
  }
  for (; ((piVar1 = (int *)piVar2[1], piVar1 != in_ECX + 4 && (piVar1[3] == 0)) &&
         ((int *)(piVar1[2] + (int)piVar1) == piVar2)); piVar2 = (int *)FUN_0031ae9c(piVar1,piVar2))
  {
  }
  if ((in_ECX[6] == 0) || (*(uint *)(in_ECX[6] + 8) < (uint)piVar2[2])) {
    in_ECX[6] = (int)piVar2;
  }
  (**(code **)(*in_ECX + 8))();
  FUN_00311923();
  return;
}
