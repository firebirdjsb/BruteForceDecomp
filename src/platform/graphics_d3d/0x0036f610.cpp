/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54F46C2D70CFE2785A780BC51977F8554F131FFB45BB8ECF21E4F106B33495DE
 * Entry: 0x0036f610, Ghidra index: 13327, label: D3DDevice_SetVertexShaderConstant4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_mapped_data_addresses_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0037bd40;
extern uint32_t DAT_0037bd44;
extern uint32_t DAT_0037e038;
extern uint32_t DAT_0037e040;
extern uint32_t DAT_0037e048;
extern uint32_t DAT_0037e050;
extern uint32_t DAT_0037e058;
extern uint32_t DAT_0037e060;
extern uint32_t DAT_0037e068;
extern uint32_t DAT_0037e070;
void D3D8LTCG__D3DDevice_SetVertexShaderConstant4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int in_ECX;
  int iVar11;
  undefined8 *in_EDX;
  
  while( true ) {
    puVar9 = DAT_0037bd40;
    if (DAT_0037bd40 + 0x13 < DAT_0037bd44) break;
    D3DDevice_MakeSpace();
  }
  uVar1 = *in_EDX;
  uVar2 = in_EDX[1];
  uVar3 = in_EDX[2];
  uVar4 = in_EDX[3];
  uVar5 = in_EDX[4];
  uVar6 = in_EDX[5];
  uVar7 = in_EDX[6];
  uVar8 = in_EDX[7];
  puVar10 = DAT_0037bd40 + 0x13;
  *DAT_0037bd40 = 0x41ea4;
  DAT_0037bd40 = puVar10;
  puVar9[1] = in_ECX;
  iVar11 = in_ECX * 0x10;
  puVar9[2] = &LAB_00400b80;
  *(undefined8 *)(puVar9 + 3) = uVar1;
  *(undefined8 *)(&DAT_0037e038 + iVar11) = uVar1;
  *(undefined8 *)(puVar9 + 5) = uVar2;
  *(undefined8 *)(&DAT_0037e040 + iVar11) = uVar2;
  *(undefined8 *)(puVar9 + 7) = uVar3;
  *(undefined8 *)(&DAT_0037e048 + iVar11) = uVar3;
  *(undefined8 *)(puVar9 + 9) = uVar4;
  *(undefined8 *)(&DAT_0037e050 + iVar11) = uVar4;
  *(undefined8 *)(puVar9 + 0xb) = uVar5;
  *(undefined8 *)(&DAT_0037e058 + iVar11) = uVar5;
  *(undefined8 *)(puVar9 + 0xd) = uVar6;
  *(undefined8 *)(&DAT_0037e060 + iVar11) = uVar6;
  *(undefined8 *)(puVar9 + 0xf) = uVar7;
  *(undefined8 *)(&DAT_0037e068 + iVar11) = uVar7;
  *(undefined8 *)(puVar9 + 0x11) = uVar8;
  *(undefined8 *)(&DAT_0037e070 + iVar11) = uVar8;
  return;
}
