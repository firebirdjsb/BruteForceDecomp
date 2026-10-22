/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12B1A41869546406D2B81EE4A633C427B1EF07DAF572DFD3B3D23C744E94A834
 * Entry: 0x003855b3, Ghidra index: 13672, label: FUN_003855b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
void FUN_003855b3(undefined4 param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  iVar2 = *param_2;
  local_8 = param_2[0x10e];
  param_2[0x10e] = 0;
  FUN_00384f99();
  if ((local_8 & 2) != 0) {
    uVar6 = *(uint *)(param_2[2] + 0x84) & 0xfffffff0;
    *(uint *)(param_2[2] + 0x84) = 0;
    iVar8 = 0;
    if (uVar6 != 0) {
      do {
        iVar7 = DAT_004a8fc0 + uVar6;
        uVar6 = *(uint *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar8;
        iVar8 = iVar7;
      } while (uVar6 != 0);
      do {
        pbVar1 = (byte *)(iVar7 + 2);
        iVar7 = *(int *)(iVar7 + 8);
        if ((*pbVar1 & 1) == 0) {
          FUN_0038524e();
        }
        else {
          FUN_00385c35();
        }
      } while (iVar7 != 0);
    }
    local_8 = local_8 & 0xfffffffd;
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(*param_2 + 8) = 6;
  }
  if ((local_8 & 4) != 0) {
    local_8 = local_8 & 0xfffffffb;
    *(undefined4 *)(iVar2 + 0xc) = 4;
    *(undefined4 *)(iVar2 + 0x14) = 4;
  }
  FUN_00384f75();
  cVar3 = FUN_003852fa();
  cVar4 = FUN_00385452();
  cVar5 = FUN_003854d9();
  if (cVar5 != '\0' || (cVar4 != '\0' || cVar3 != '\0')) {
    *(undefined4 *)(*param_2 + 0xc) = 4;
    *(undefined4 *)(*param_2 + 0x10) = 4;
  }
  if ((local_8 & 0x40) != 0) {
    FUN_00384994();
    local_8 = local_8 & 0xffffffbf;
    *(undefined4 *)(iVar2 + 0xc) = 0x40;
  }
  if (local_8 != 0) {
    *(uint *)(iVar2 + 0xc) = local_8;
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x80000000;
  return;
}
