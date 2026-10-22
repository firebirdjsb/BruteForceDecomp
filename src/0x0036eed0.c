/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAF5014F77AA464638EA7DD12EB8F974085D647E1E8E7513058AB797246673E5
 * Entry: 0x0036eed0, Ghidra index: 13317, label: FUN_0036eed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037e038;
void FUN_0036eed0(void)

{
  int in_EAX;
  uint *puVar1;
  uint *puVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_8;
  uint *local_4;
  
  puVar1 = (uint *)(in_EAX + 0x114);
  local_4 = (uint *)(in_ECX * 0x10 + 0xc58 + D3D8__D3D_g_pDevice);
  do {
    uVar5 = *puVar1 >> 0x12;
    puVar2 = puVar1 + 1;
    if (uVar5 == 1) {
      local_8 = (uint *)(&DAT_0037e038 + *puVar2 * 0x10);
    }
    else {
      uVar4 = uVar5;
      puVar6 = puVar2;
      puVar8 = local_8;
      puVar7 = local_4;
      if ((*puVar1 & 0xffff) == 0xb00) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)puVar7 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        local_4 = local_4 + uVar5;
      }
      else {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        local_8 = local_8 + uVar5;
      }
    }
    puVar1 = puVar2 + uVar5;
  } while (puVar2[uVar5] != 0);
  return;
}
