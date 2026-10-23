/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 575D91405AB291568754E08A6668E7D1AA2D9A65268787D905D9596191F85628
 * Entry: 0x001023b0, Ghidra index: 3267, label: FUN_001023b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_00469b58;
void FUN_001023b0(char param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_003c0658;
  if (in_EAX != 0) {
    iVar2 = FUN_00100fc0();
    iVar3 = FUN_0008bbc0();
    iVar1 = DAT_003c0658;
    if (((iVar2 != 4) && (iVar3 != 0x19)) && (iVar1 = iVar3, param_1 != '\0')) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar4 + 0x70))(iVar2);
    }
  }
  DAT_003c0658 = iVar1;
  return;
}
