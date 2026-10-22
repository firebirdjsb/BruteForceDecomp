/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F083C3BF0860287144C72A633D67F11E4B4BCC360D5C881F7EE5A1FF96863158
 * Entry: 0x000cd4c0, Ghidra index: 2532, label: FUN_000cd4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
float10 FUN_000cd4c0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  cVar1 = (**(code **)(*(int *)DAT_00469b58[2] + 0x24))(0);
  if (cVar1 != '\0') {
    fVar4 = (float10)(**(code **)(*DAT_00469b58 + 0x44))();
    return fVar4;
  }
  piVar2 = (int *)(**(code **)(*(int *)DAT_00469b58[2] + 0x78))();
  iVar3 = (**(code **)(*piVar2 + 0x54))();
  if (iVar3 != 0) {
    return (float10)*(float *)(iVar3 + 0x8c);
  }
  return (float10)0.0;
}
