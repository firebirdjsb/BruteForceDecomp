/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 684C0BA0D3CEA3E2A95278405CF237C765AFC74759E01F41D1A7AB8F6B15EC4E
 * Entry: 0x00370b10, Ghidra index: 13368, label: D3DDevice_SetRenderState_Simple
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0037bd40;
extern uint32_t DAT_0037bd44;
void D3D8LTCG__D3DDevice_SetRenderState_Simple(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  while( true ) {
    puVar1 = DAT_0037bd40;
    if (DAT_0037bd40 + 2 < DAT_0037bd44) break;
    D3DDevice_MakeSpace();
  }
  puVar2 = DAT_0037bd40 + 2;
  *DAT_0037bd40 = in_ECX;
  DAT_0037bd40 = puVar2;
  puVar1[1] = in_EDX;
  return;
}
