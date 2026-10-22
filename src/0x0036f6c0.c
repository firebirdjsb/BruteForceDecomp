/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B91A9E7EC37A6311DCF0C8F8FDD28D638CCD89FEBC9B482BF0C9826DC09E3FF6
 * Entry: 0x0036f6c0, Ghidra index: 13328, label: D3DDevice_SetVertexShaderConstantNotInlineFast
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
void D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint in_ECX;
  uint *in_EDX;
  
  if (DAT_0037bd44 <= DAT_0037bd40) {
    DAT_0037bd40 = (uint *)D3DDevice_MakeSpace();
  }
  *DAT_0037bd40 = 0x41ea4;
  DAT_0037bd40[1] = in_ECX;
  DAT_0037bd40 = DAT_0037bd40 + 2;
  if (param_1 < 0x10) {
LAB_0036f6eb:
    *DAT_0037bd40 = param_1 << 0x12 | 0xb80;
    for (; DAT_0037bd40 = DAT_0037bd40 + 1, param_1 != 0; param_1 = param_1 - 1) {
      *DAT_0037bd40 = *in_EDX;
      in_EDX = in_EDX + 1;
    }
  }
  else {
    while( true ) {
      uVar1 = *(undefined8 *)in_EDX;
      uVar2 = *(undefined8 *)(in_EDX + 2);
      uVar3 = *(undefined8 *)(in_EDX + 4);
      uVar4 = *(undefined8 *)(in_EDX + 6);
      uVar5 = *(undefined8 *)(in_EDX + 8);
      uVar6 = *(undefined8 *)(in_EDX + 10);
      uVar7 = *(undefined8 *)(in_EDX + 0xc);
      uVar8 = *(undefined8 *)(in_EDX + 0xe);
      *DAT_0037bd40 = (uint)&LAB_00400b80;
      *(undefined8 *)(DAT_0037bd40 + 1) = uVar1;
      *(undefined8 *)(DAT_0037bd40 + 3) = uVar2;
      *(undefined8 *)(DAT_0037bd40 + 5) = uVar3;
      *(undefined8 *)(DAT_0037bd40 + 7) = uVar4;
      *(undefined8 *)(DAT_0037bd40 + 9) = uVar5;
      *(undefined8 *)(DAT_0037bd40 + 0xb) = uVar6;
      *(undefined8 *)(DAT_0037bd40 + 0xd) = uVar7;
      *(undefined8 *)(DAT_0037bd40 + 0xf) = uVar8;
      DAT_0037bd40 = DAT_0037bd40 + 0x11;
      param_1 = param_1 - 0x10;
      if (param_1 == 0) break;
      in_EDX = in_EDX + 0x10;
      if (param_1 < 0x10) goto LAB_0036f6eb;
      if (DAT_0037bd44 <= DAT_0037bd40) {
        DAT_0037bd40 = (uint *)D3DDevice_MakeSpace();
      }
    }
  }
  return;
}
