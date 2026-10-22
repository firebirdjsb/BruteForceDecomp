/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1C368E554226CDBF1E87E1B281A1C33FAC59F0E52C740CAC76EC26AC42DD5D1
 * Entry: 0x002f4e06, Ghidra index: 10881, label: FUN_002f4e06
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b76f8;
extern uint32_t DAT_003b7710;
extern uint32_t DAT_003b7810;
extern uint32_t DAT_003b7814;
extern uint32_t DAT_003b781c;
extern uint32_t DAT_003b7824;
extern uint32_t PTR_LAB_003b7818;
extern uint32_t PTR_XBE_FILE_HEADER_003b7820;
extern uint32_t _DAT_003b7828;
extern uint32_t _DAT_003b782c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002f4e06(byte *param_1,byte *param_2,short *param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  short *psVar6;
  byte *pbVar7;
  int local_8;
  
  psVar6 = param_3;
  local_8 = 0;
  if (param_2 == (byte *)0xffffffff) {
    param_2 = param_1;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
    } while (bVar1 != 0);
    param_2 = param_2 + (1 - (int)(param_1 + 1));
  }
  if (0 < (int)param_2) {
    param_3 = (short *)0x0;
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar7;
      uVar3 = (uint)(ushort)(short)(char)(&DAT_003b7710)[bVar1];
      iVar4 = 0;
      if ((int)param_2 < (int)(pbVar7 + (uVar3 - (int)param_1))) break;
      if (uVar3 == 0) {
LAB_002f4eaf:
        iVar4 = iVar4 + (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        param_3 = (short *)((int)param_3 + 1);
      }
      else {
        if (uVar3 == 1) {
LAB_002f4ea3:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          param_3 = (short *)((int)param_3 + 1);
          iVar4 = (iVar4 + (uint)bVar1) * 0x40;
          goto LAB_002f4eaf;
        }
        if (uVar3 == 2) {
LAB_002f4e97:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          param_3 = (short *)((int)param_3 + 1);
          iVar4 = (iVar4 + (uint)bVar1) * 0x40;
          goto LAB_002f4ea3;
        }
        if (uVar3 == 3) {
LAB_002f4e8b:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          param_3 = (short *)((int)param_3 + 1);
          iVar4 = (iVar4 + (uint)bVar1) * 0x40;
          goto LAB_002f4e97;
        }
        if (uVar3 == 4) {
LAB_002f4e7f:
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          param_3 = (short *)((int)param_3 + 1);
          iVar4 = (iVar4 + (uint)bVar1) * 0x40;
          goto LAB_002f4e8b;
        }
        if (uVar3 == 5) {
          pbVar7 = pbVar7 + 1;
          param_3 = (short *)((int)param_3 + 1);
          iVar4 = (uint)bVar1 << 6;
          goto LAB_002f4e7f;
        }
      }
      puVar5 = (undefined *)(iVar4 - *(int *)(&DAT_003b76f8 + uVar3 * 4));
      if (DAT_003b7814 < puVar5) {
        if (PTR_LAB_003b7818 < puVar5) {
          local_8 = local_8 + 1;
          sVar2 = DAT_003b7810;
          if (local_8 <= param_4) {
LAB_002f4f2d:
            *psVar6 = sVar2;
            goto LAB_002f4f30;
          }
        }
        else {
          uVar3 = (int)puVar5 - (int)PTR_XBE_FILE_HEADER_003b7820;
          if (local_8 + 1 <= param_4) {
            *psVar6 = (short)(uVar3 >> ((byte)DAT_003b781c & 0x1f)) + (short)_DAT_003b7828;
            psVar6 = psVar6 + 1;
          }
          local_8 = local_8 + 2;
          if (local_8 <= param_4) {
            sVar2 = ((ushort)DAT_003b7824 & (ushort)uVar3) + (short)_DAT_003b782c;
            goto LAB_002f4f2d;
          }
        }
      }
      else {
        local_8 = local_8 + 1;
        if (param_4 < local_8) goto LAB_002f4f32;
        *psVar6 = (short)puVar5;
LAB_002f4f30:
        psVar6 = psVar6 + 1;
      }
LAB_002f4f32:
    } while ((int)param_3 < (int)param_2);
  }
  if ((param_4 != 0) && (param_4 < local_8)) {
    XAPILIB__SetLastError(0x7a);
    local_8 = 0;
  }
  return local_8;
}
