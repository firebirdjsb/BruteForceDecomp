/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB0E138807C99AAF518AC8852ECB0FED8EBAE935BCC136F85A3A91B1F9F35B5E
 * Entry: 0x00252310, Ghidra index: 8377, label: FUN_00252310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038d390;
extern uint32_t DAT_0038d490;
extern uint32_t DAT_0038d590;
byte FUN_00252310(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
LAB_00252320:
  do {
    uVar9 = param_1[0x1b];
    if (uVar9 < 0x106) {
      FUN_00251da0();
      uVar9 = param_1[0x1b];
      if ((uVar9 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar9 == 0) {
        if (param_1[0x18] != 0) {
          bVar8 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
          *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
          *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar8;
          param_1[0x5a6] = param_1[0x5a6] + 1;
          *(short *)(param_1 + bVar8 + 0x23) = (short)param_1[bVar8 + 0x23] + 1;
          param_1[0x18] = 0;
        }
        if (param_1[0x15] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_1[0xc] + param_1[0x15];
        }
        FUN_0027de70(iVar7);
        param_1[0x15] = param_1[0x19];
        FUN_00251790();
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (param_2 == 4) * '\x02' + 1;
        }
        return (param_2 != 4) - 1U & 2;
      }
    }
    if (2 < uVar9) {
      uVar10 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar10;
      uVar6 = *(ushort *)(param_1[0xf] + uVar10 * 2);
      uVar10 = (uint)uVar6;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar6;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    uVar9 = param_1[0x16];
    param_1[0x1c] = uVar9;
    param_1[0x17] = param_1[0x1a];
    param_1[0x16] = 2;
    if (((uVar10 != 0) && (uVar9 < (uint)param_1[0x1e])) &&
       (param_1[0x19] - uVar10 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] != 2) {
        iVar7 = FUN_00251c30();
        param_1[0x16] = iVar7;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    if (((uint)param_1[0x1c] < 3) || ((uint)param_1[0x1c] < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x18] = 1;
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        goto LAB_00252320;
      }
      bVar8 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar8;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar8 + 0x23) = (short)param_1[bVar8 + 0x23] + 1;
      if (param_1[0x5a6] == param_1[0x5a5] + -1) {
        if (param_1[0x15] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_1[0xc] + param_1[0x15];
        }
        FUN_0027de70(iVar7);
        param_1[0x15] = param_1[0x19];
        FUN_00251790();
      }
      param_1[0x19] = param_1[0x19] + 1;
      param_1[0x1b] = param_1[0x1b] + -1;
    }
    else {
      iVar7 = param_1[0x19];
      iVar2 = param_1[0x1b];
      sVar5 = (short)iVar7 - (short)param_1[0x17];
      bVar8 = (char)param_1[0x1c] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar5 + -1;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar8;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar6 = sVar5 - 2;
      *(short *)(param_1 + (byte)(&DAT_0038d590)[bVar8] + 0x124) =
           (short)param_1[(byte)(&DAT_0038d590)[bVar8] + 0x124] + 1;
      if (uVar6 < 0x100) {
        bVar8 = (&DAT_0038d390)[uVar6];
      }
      else {
        bVar8 = (&DAT_0038d490)[uVar6 >> 7];
      }
      *(short *)(param_1 + bVar8 + 0x260) = (short)param_1[bVar8 + 0x260] + 1;
      iVar3 = param_1[0x5a5];
      iVar4 = param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] + (1 - param_1[0x1c]);
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        uVar9 = param_1[0x19] + 1;
        param_1[0x19] = uVar9;
        if (uVar9 <= (uint)(iVar7 + -3 + iVar2)) {
          uVar10 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                   (uint)*(byte *)(param_1[0xc] + 2 + uVar9)) & param_1[0x13];
          param_1[0x10] = uVar10;
          uVar6 = *(ushort *)(param_1[0xf] + uVar10 * 2);
          uVar10 = (uint)uVar6;
          *(ushort *)(param_1[0xe] + (param_1[0xb] & uVar9) * 2) = uVar6;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
        }
        piVar1 = param_1 + 0x1c;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x18] = 0;
      param_1[0x16] = 2;
      param_1[0x19] = param_1[0x19] + 1;
      if (iVar4 != iVar3 + -1) goto LAB_00252320;
      if (param_1[0x15] < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[0xc] + param_1[0x15];
      }
      FUN_0027de70(iVar7);
      param_1[0x15] = param_1[0x19];
      FUN_00251790();
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return 0;
    }
  } while( true );
}
