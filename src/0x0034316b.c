/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B4AEF9517194FB4B3CE438AD9F4C504E7E9F7C9DD7FDE4445FBA0A98787191A
 * Entry: 0x0034316b, Ghidra index: 12705, label: FUN_0034316b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b13e8;
extern uint32_t DAT_004b1440;
extern uint32_t UNK_004b1448;
void FUN_0034316b(byte *param_1,uint param_2,byte *param_3,uint param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  
  if (param_5 != 0) {
    if (7 < param_2) {
      param_1 = param_1 + (param_2 >> 3);
      param_2 = param_2 & 7;
    }
    if (7 < param_4) {
      param_3 = param_3 + (param_4 >> 3);
      param_4 = param_4 & 7;
    }
    pbVar5 = param_3;
    if (param_2 != 0) {
      iVar1 = -param_2;
      uVar8 = iVar1 + 8;
      cVar2 = (char)param_2;
      if (param_5 < uVar8) {
        if (param_2 < param_4) {
          bVar4 = (param_3[1] >> (('\x10' - (char)param_5) - (char)param_4 & 0x1fU)) <<
                  ((char)uVar8 - (char)param_5 & 0x1fU) |
                  ((&UNK_004b1448)[-param_4] & *param_3) << ((char)param_4 - cVar2 & 0x1fU);
        }
        else {
          bVar4 = (*param_3 >> (('\b' - (char)param_5) - (char)param_4 & 0x1fU) &
                  (&DAT_004b1440)[param_5]) << ((char)uVar8 - (char)param_5 & 0x1fU);
        }
        *param_1 = *param_1 | bVar4;
        return;
      }
      if (param_4 < param_2) {
        param_5 = param_5 - uVar8;
        *param_1 = *param_1 | *param_3 >> (cVar2 - (char)param_4 & 0x1fU) & (&UNK_004b1448)[iVar1];
        param_1 = param_1 + 1;
        param_4 = param_4 + uVar8;
      }
      else if (param_4 == param_2) {
        param_5 = param_5 - uVar8;
        *param_1 = *param_1 | (&UNK_004b1448)[iVar1] & *param_3;
        pbVar5 = param_3 + 1;
        param_1 = param_1 + 1;
        param_4 = 0;
      }
      else {
        pbVar5 = param_3 + 1;
        *param_1 = *param_1 |
                   *pbVar5 >> ((cVar2 - (char)param_4) + 8U & 0x1f) |
                   ((&UNK_004b1448)[-param_4] & *param_3) << ((byte)(param_4 - param_2) & 0x1f);
        param_1 = param_1 + 1;
        param_5 = param_5 - uVar8;
        param_4 = param_4 - param_2;
      }
    }
    bVar4 = (byte)param_4;
    if (7 < param_5) {
      if (param_4 == 0) {
        uVar3 = param_5 >> 3;
        pbVar6 = pbVar5;
        pbVar9 = param_1;
        for (uVar8 = param_5 >> 5; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar9 = pbVar9 + 4;
        }
        param_1 = param_1 + uVar3;
        pbVar5 = pbVar5 + uVar3;
        param_5 = param_5 & 7;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar9 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar9 = pbVar9 + 1;
        }
      }
      else {
        pbVar6 = pbVar5;
        do {
          param_5 = param_5 - 8;
          pbVar5 = pbVar6 + 1;
          *param_1 = *pbVar6 << (bVar4 & 0x1f) | *pbVar5 >> (8 - bVar4 & 0x1f);
          param_1 = param_1 + 1;
          pbVar6 = pbVar5;
        } while (7 < param_5);
      }
    }
    if (param_5 != 0) {
      bVar7 = *pbVar5 << (bVar4 & 0x1f) & (&DAT_004b13e8)[param_5];
      *param_1 = bVar7;
      if (8 < param_4 + param_5) {
        *param_1 = ("HOST: %u.%u.%u.%u:%u\r\n%s"[param_5 + param_4 + 0x14] & pbVar5[1]) >>
                   (8 - bVar4 & 0x1f) | bVar7;
      }
    }
  }
  return;
}
