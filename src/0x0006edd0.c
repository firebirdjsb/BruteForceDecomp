/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B45E742EF4B9C60489C2C04D31AE9C12828BB4FC1F455782FAC922222949C5DC
 * Entry: 0x0006edd0, Ghidra index: 1253, label: FUN_0006edd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e038;
undefined4 FUN_0006edd0(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  
  if (in_EAX == 1) {
    D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
    return 0;
  }
  if (in_EAX != 4) {
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      puVar2 = (undefined4 *)(&DAT_0037e038 + (in_ECX + 0x60) * 0x10);
      for (iVar1 = in_EAX << 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *in_EDX;
        in_EDX = in_EDX + 1;
        puVar2 = puVar2 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(in_EAX << 2);
    return 0;
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  return 0;
}
