/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9965B9E0FDB89E7CB39DF66E7602D756AFCDA92F9919E346FCBCAD9CE354184
 * Entry: 0x0034defc, Ghidra index: 13015, label: FUN_0034defc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034defc(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int in_ECX;
  int *piVar7;
  short *psVar8;
  undefined4 uVar9;
  int *local_c;
  int *local_8;
  
  if ((((*(byte *)((int)param_1 + 0xb) & 1) == 0) && (*(int *)(*param_1 + 0x10) != -1)) &&
     (psVar8 = (short *)(param_2 + 8), 0xb < param_3)) {
    uVar2 = *(ushort *)(param_2 + 10);
    if ((((char)uVar2 < '\0') && ((uVar2 & 0x78) == 0)) &&
       ((*(short *)(param_2 + 0xc) == 0x100 &&
        (local_c = *(int **)(in_ECX + 0xa88), local_c != (int *)0x0)))) {
      do {
        if (*(short *)((int)local_c + 0x1a) == *psVar8) break;
        local_c = (int *)*local_c;
      } while (local_c != (int *)0x0);
      if ((local_c != (int *)0x0) && (*(char *)((int)local_c + 0x19) != '\0')) {
        if ((uVar2 >> 8 & 0xf) == 3) {
          uVar9 = 0x2af9;
        }
        else {
          if ((uVar2 & 0xf00) != 0) {
            return;
          }
          iVar1 = (int)psVar8 + param_3;
          if (param_2 + 0x14 == iVar1) {
            return;
          }
          iVar4 = FUN_0034dc1c(psVar8,iVar1,param_2 + 0x14);
          if (iVar4 == 0) {
            return;
          }
          if ((uint)(iVar1 - iVar4) < 4) {
            return;
          }
          iVar4 = iVar4 + 4;
          iVar5 = FUN_0034dd0a(local_c[5]);
          if (iVar5 == 0) {
            return;
          }
          param_3 = 0;
          sVar3 = CONCAT11((char)*(undefined2 *)(param_2 + 0xe),
                           (char)((ushort)*(undefined2 *)(param_2 + 0xe) >> 8));
          if (sVar3 == 0) {
            return;
          }
          local_8 = local_c + 10;
          do {
            puVar6 = (undefined2 *)FUN_0034dc1c(psVar8,iVar1,iVar4);
            if (puVar6 == (undefined2 *)0x0) {
              return;
            }
            if ((uint)(iVar1 - (int)puVar6) < 10) {
              return;
            }
            uVar2 = CONCAT11((char)puVar6[4],(char)((ushort)puVar6[4] >> 8));
            piVar7 = (int *)(puVar6 + 5);
            if (iVar1 - (int)piVar7 < (int)(uint)uVar2) {
              return;
            }
            if (((CONCAT11((char)*puVar6,(char)((ushort)*puVar6 >> 8)) == 1) &&
                (CONCAT11((char)puVar6[1],(char)((ushort)puVar6[1] >> 8)) == 1)) && (uVar2 == 4)) {
              param_3 = param_3 + 1;
              *local_8 = *piVar7;
              local_8 = local_8 + 1;
              if (param_3 == 8) break;
            }
            sVar3 = sVar3 + -1;
            iVar4 = (int)piVar7 + (uint)uVar2;
          } while (sVar3 != 0);
          if (param_3 == 0) {
            return;
          }
          uVar9 = 0;
          local_c[9] = param_3;
        }
        FUN_0034dd57(local_c,uVar9);
      }
    }
  }
  return;
}
