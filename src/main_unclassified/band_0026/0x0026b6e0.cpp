/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD42D9CA03D9D00E936E9B44F8D3777003161D55AB3B5496EBD9BDC5D36C87D4
 * Entry: 0x0026b6e0, Ghidra index: 8764, label: FUN_0026b6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0026b6e0(undefined1 *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0026b210();
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    fVar2 = (float10)FUN_002899f0();
    if ((float10)0.0 < fVar2) {
      *param_1 = 1;
      return;
    }
    *param_1 = 0;
  }
  return;
}
