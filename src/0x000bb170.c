/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 706FC979B9CCA597381A52AC7BAAE650BAFD817B16F9291924016C62E99ECBEF
 * Entry: 0x000bb170, Ghidra index: 2266, label: FUN_000bb170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
float10 FUN_000bb170(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = DAT_00469ab0;
  fVar4 = (float10)*(byte *)(in_ECX + 0x12) * (float10)*(byte *)(in_ECX + 0x10) *
          (float10)1.53787e-05;
  if (fVar4 == (float10)0.0) {
    return (float10)0.0;
  }
  piVar1 = *(int **)(in_ECX + 0x28);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 != 0) {
      fVar5 = (float10)FUN_000bb170();
      return fVar5 * (float10)(float)fVar4;
    }
    fVar4 = (float10)(float)fVar4;
  }
  if ((piVar1 != *(int **)(iVar2 + 0x135c)) && (piVar1 != (int *)(iVar2 + 0x130c))) {
    fVar4 = fVar4 * (float10)*(float *)(iVar2 + 0x13f8);
  }
  return fVar4;
}
