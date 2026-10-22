/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA17F0AD73C7FBED99CE68DF80D1304681D61F32503C86396B7B3EE89BC6431B
 * Entry: 0x000b2870, Ghidra index: 2152, label: FUN_000b2870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
float10 FUN_000b2870(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float fVar5;
  
  fVar4 = (float10)0.0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_00469ab0 + 0x1378);
    piVar3 = (int *)(**(code **)(*(int *)(iVar1 + 0x48) + 0x18))();
    fVar5 = (float)(iVar2 - *piVar3);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar4 = (float10)fVar5 + (float10)3.0;
  }
  return fVar4;
}
