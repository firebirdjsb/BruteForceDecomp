/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 423D23D3754036F3AC4834C194D821CEB2BE53006DC272AA7C7141C457603A01
 * Entry: 0x0036f5b0, Ghidra index: 13326, label: D3DDevice_SetVertexShaderConstant1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0037bd40;
extern uint32_t DAT_0037bd44;
extern uint32_t DAT_0037e038;
extern uint32_t DAT_0037e03c;
extern uint32_t DAT_0037e040;
extern uint32_t DAT_0037e044;
void D3D8LTCG__D3DDevice_SetVertexShaderConstant1(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *in_EDX;
  
  while( true ) {
    puVar2 = DAT_0037bd40;
    if (DAT_0037bd40 + 7 < DAT_0037bd44) break;
    D3DDevice_MakeSpace();
  }
  puVar3 = DAT_0037bd40 + 7;
  *DAT_0037bd40 = 0x41ea4;
  DAT_0037bd40 = puVar3;
  puVar2[1] = in_ECX;
  puVar2[2] = 0x100b80;
  iVar4 = in_ECX * 0x10;
  uVar1 = *in_EDX;
  puVar2[3] = uVar1;
  *(undefined4 *)(&DAT_0037e038 + iVar4) = uVar1;
  uVar1 = in_EDX[1];
  puVar2[4] = uVar1;
  *(undefined4 *)(&DAT_0037e03c + iVar4) = uVar1;
  uVar1 = in_EDX[2];
  puVar2[5] = uVar1;
  *(undefined4 *)(&DAT_0037e040 + iVar4) = uVar1;
  uVar1 = in_EDX[3];
  puVar2[6] = uVar1;
  *(undefined4 *)(&DAT_0037e044 + iVar4) = uVar1;
  return;
}
