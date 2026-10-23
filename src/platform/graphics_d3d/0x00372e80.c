/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9130A43D7250D339F8122E6D98997C459570C3C32B4EEC27829384ADE0C9A106
 * Entry: 0x00372e80, Ghidra index: 13403, label: FUN_00372e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df60;
extern uint32_t DAT_0037df64;
extern uint32_t PTR_caseD_1_000c17b0;
/* WARNING: Removing unreachable block (ram,0x00372eef) */
/* WARNING: Removing unreachable block (ram,0x00372ecc) */
/* WARNING: Removing unreachable block (ram,0x00372f11) */

void FUN_00372e80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *in_EAX;
  uint in_ECX;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  iVar7 = D3D8__D3DRS_TwoSidedLighting;
  uVar5 = DAT_0037df64;
  iVar4 = D3D8__D3D_g_pDevice;
  *in_EAX = 0xc0a10;
  in_EAX[4] = &LAB_000c03a8;
  iVar6 = iVar4 + 0xab0;
  in_EAX[8] = 0x403b4;
  while( true ) {
    local_c = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
    local_8 = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
    fVar3 = (float)(uVar5 & 0xff) * 0.003921569;
    if ((in_ECX & 0xc) == 0) {
      fVar1 = local_c * *(float *)(iVar6 + 0x10);
      if ((in_ECX & 3) == 0) {
        fVar1 = fVar1 + *(float *)(iVar6 + 0x30);
        local_c = 0.0;
        fVar2 = local_8 * *(float *)(iVar6 + 0x14);
        local_8 = 0.0;
        local_4 = 0.0;
        fVar2 = fVar2 + *(float *)(iVar6 + 0x34);
        local_14 = fVar3 * *(float *)(iVar6 + 0x18) + *(float *)(iVar6 + 0x38);
      }
      else {
        local_c = 1.0;
        fVar2 = local_8 * *(float *)(iVar6 + 0x14);
        local_8 = 1.0;
        local_4 = 1.0;
        local_14 = fVar3 * *(float *)(iVar6 + 0x18);
      }
    }
    else {
      fVar1 = *(float *)(iVar6 + 0x30);
      fVar2 = *(float *)(iVar6 + 0x34);
      local_14 = *(float *)(iVar6 + 0x38);
      local_4 = fVar3;
    }
    in_EAX[3] = local_14;
    in_EAX[1] = fVar1;
    in_EAX[5] = local_c;
    in_EAX[2] = fVar2;
    in_EAX[6] = local_8;
    in_EAX[7] = local_4;
    in_EAX[9] = *(undefined4 *)(iVar6 + 0xc);
    uVar5 = DAT_0037df60;
    if (iVar7 == 0) break;
    in_EAX[10] = 0xc17a0;
    in_EAX[0xe] = &PTR_caseD_1_000c17b0;
    in_ECX = in_ECX >> 8;
    iVar6 = iVar4 + 0xaf4;
    in_EAX[0x12] = 0x417ac;
    in_EAX = in_EAX + 10;
    iVar7 = iVar7 + -1;
  }
  return;
}
