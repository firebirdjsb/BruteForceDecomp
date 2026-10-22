/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CA7B2E3797A6104956E04A9F111C0D223CBF74F401149A65940414277C4EA03
 * Entry: 0x000b28e0, Ghidra index: 2153, label: FUN_000b28e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
float10 FUN_000b28e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 8) + 0x20);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar2 != 0) {
    iVar1 = *(int *)(DAT_00469ab0 + 0x1378);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x48) + 0x18))();
    fVar4 = (float)(*(int *)(iVar2 + 8) + -0x283 + iVar1);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    return (float10)iVar3 - ((float10)fVar4 + (float10)3.0);
  }
  return (float10)iVar3;
}
