/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF4991DF3AEEB767DD68838FCF6717665978DF859D84E593B4CF59B9000A2C08
 * Entry: 0x000b2770, Ghidra index: 2150, label: FUN_000b2770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
float10 FUN_000b2770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 8) + 0x22);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar2 != 0) {
    iVar1 = *(int *)(DAT_00469ab0 + 0x1374);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x48) + 0x18))();
    fVar4 = (float)(*(int *)(iVar2 + 0xc) + -0x1de + iVar1);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    return (float10)iVar3 - ((float10)fVar4 + (float10)3.0);
  }
  return (float10)iVar3;
}
