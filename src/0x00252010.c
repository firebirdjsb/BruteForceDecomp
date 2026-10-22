/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66745804007CB31495E320843BE67B8346E71CE4D31051DB5DEB039A6B9E45A0
 * Entry: 0x00252010, Ghidra index: 8376, label: FUN_00252010
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
byte FUN_00252010(int *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = 0;
  do {
    uVar5 = param_1[0x1b];
    if (uVar5 < 0x106) {
      FUN_00251da0();
      uVar5 = param_1[0x1b];
      if ((uVar5 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar5 == 0) {
        if (param_1[0x15] < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xc] + param_1[0x15];
        }
        FUN_0027de70(iVar4);
        param_1[0x15] = param_1[0x19];
        FUN_00251790();
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1U & 2;
        }
        return (param_2 == 4) * '\x02' + 1;
      }
    }
    if (2 < uVar5) {
      uVar8 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar8;
      uVar3 = *(ushort *)(param_1[0xf] + uVar8 * 2);
      uVar8 = (uint)uVar3;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar3;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    if (((uVar8 != 0) && (param_1[0x19] - uVar8 <= param_1[9] - 0x106U)) && (param_1[0x20] != 2)) {
      iVar4 = FUN_00251c30();
      param_1[0x16] = iVar4;
    }
    if ((uint)param_1[0x16] < 3) {
      bVar6 = *(byte *)(param_1[0x19] + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar6;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar6 + 0x23) = (short)param_1[bVar6 + 0x23] + 1;
      bVar9 = param_1[0x5a6] == param_1[0x5a5] + -1;
      param_1[0x1b] = param_1[0x1b] + -1;
LAB_00252256:
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      sVar2 = (short)param_1[0x19] - (short)param_1[0x1a];
      bVar6 = (char)param_1[0x16] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar2;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar6;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar3 = sVar2 - 1;
      *(short *)(param_1 + (byte)(&DAT_0038d590)[bVar6] + 0x124) =
           (short)param_1[(byte)(&DAT_0038d590)[bVar6] + 0x124] + 1;
      if (uVar3 < 0x100) {
        bVar6 = (&DAT_0038d390)[uVar3];
      }
      else {
        bVar6 = (&DAT_0038d490)[uVar3 >> 7];
      }
      *(short *)(param_1 + bVar6 + 0x260) = (short)param_1[bVar6 + 0x260] + 1;
      iVar4 = param_1[0x1b];
      bVar9 = param_1[0x5a6] == param_1[0x5a5] + -1;
      uVar5 = param_1[0x16];
      param_1[0x1b] = iVar4 - uVar5;
      if ((uVar5 <= (uint)param_1[0x1e]) && (2 < iVar4 - uVar5)) {
        param_1[0x16] = uVar5 - 1;
        do {
          iVar4 = param_1[0x19];
          uVar5 = iVar4 + 1;
          param_1[0x19] = uVar5;
          uVar8 = ((uint)*(byte *)(iVar4 + 3 + param_1[0xc]) ^
                  param_1[0x10] << ((byte)param_1[0x14] & 0x1f)) & param_1[0x13];
          param_1[0x10] = uVar8;
          uVar3 = *(ushort *)(param_1[0xf] + uVar8 * 2);
          uVar8 = (uint)uVar3;
          *(ushort *)(param_1[0xe] + (uVar5 & param_1[0xb]) * 2) = uVar3;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
          piVar1 = param_1 + 0x16;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        goto LAB_00252256;
      }
      pbVar7 = (byte *)(param_1[0xc] + param_1[0x19] + uVar5);
      param_1[0x19] = param_1[0x19] + uVar5;
      param_1[0x16] = 0;
      uVar5 = (uint)*pbVar7;
      param_1[0x10] = uVar5;
      param_1[0x10] = (uVar5 << ((byte)param_1[0x14] & 0x1f) ^ (uint)pbVar7[1]) & param_1[0x13];
    }
    if (bVar9) {
      if (param_1[0x15] < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xc] + param_1[0x15];
      }
      FUN_0027de70(iVar4);
      param_1[0x15] = param_1[0x19];
      FUN_00251790();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}
