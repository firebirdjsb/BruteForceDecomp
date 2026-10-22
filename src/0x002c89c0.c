/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36BDDEF84E667F50EBE7FA16ACDBBB647F89664AD05FFCB5DF045A2695AE49B3
 * Entry: 0x002c89c0, Ghidra index: 10128, label: FUN_002c89c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_____ERROR_____Excessive_amount_o_00402624[];
void FUN_002c89c0(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_2[4] - param_3[4];
  do {
    if (iVar5 == 1) {
      param_3[5] = (int)param_2;
      if (*(ushort *)(param_2 + 6) <= *(ushort *)((int)param_2 + 0x1a)) {
        FUN_002ccf80();
      }
      *(int **)(param_2[7] + (uint)*(ushort *)((int)param_2 + 0x1a) * 4) = param_3;
      *(short *)((int)param_2 + 0x1a) = *(short *)((int)param_2 + 0x1a) + 1;
      if (0x1b < *(ushort *)((int)param_2 + 0x1a)) {
        FID_conflict__wprintf
                  (s_____ERROR_____Excessive_amount_o_00402624,
                   (uint)*(ushort *)((int)param_2 + 0x1a));
      }
      return;
    }
    piVar1 = (int *)FUN_002ea01d(0x30);
    piVar6 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      *(undefined2 *)(piVar1 + 6) = 0;
      *(undefined2 *)((int)piVar1 + 0x1a) = 0;
      piVar1[7] = 0;
      *(undefined2 *)(piVar1 + 8) = 1;
      *(undefined2 *)(piVar1 + 9) = 0;
      *(undefined2 *)((int)piVar1 + 0x26) = 0;
      piVar1[10] = 0;
      *(undefined2 *)(piVar1 + 0xb) = 1;
      piVar1[5] = 0;
      piVar6 = piVar1;
    }
    iVar2 = *param_2;
    bVar4 = (byte)iVar5;
    if (*param_3 < iVar2 + 1 << (bVar4 & 0x1f)) {
      iVar2 = iVar2 * 2;
      if (*param_3 < iVar2 + 1 << (bVar4 - 1 & 0x1f)) goto LAB_002c8a2d;
      *piVar6 = iVar2 + 1;
    }
    else {
      iVar2 = iVar2 * 2 + 2;
LAB_002c8a2d:
      *piVar6 = iVar2;
    }
    iVar5 = param_2[1];
    if (param_3[1] < iVar5 + 1 << (bVar4 & 0x1f)) {
      iVar5 = iVar5 * 2;
      if (param_3[1] < iVar5 + 1 << (bVar4 - 1 & 0x1f)) goto LAB_002c8a4c;
      piVar6[1] = iVar5 + 1;
    }
    else {
      iVar5 = iVar5 * 2 + 2;
LAB_002c8a4c:
      piVar6[1] = iVar5;
    }
    iVar5 = param_2[2];
    if (param_3[2] < iVar5 + 1 << (bVar4 & 0x1f)) {
      iVar5 = iVar5 * 2;
      if (param_3[2] < iVar5 + 1 << (bVar4 - 1 & 0x1f)) goto LAB_002c8a6c;
      piVar6[2] = iVar5 + 1;
    }
    else {
      iVar5 = iVar5 * 2 + 2;
LAB_002c8a6c:
      piVar6[2] = iVar5;
    }
    piVar6[3] = param_2[3] + -1;
    piVar6[4] = param_2[4] + -1;
    piVar6[5] = (int)param_2;
    if (*(ushort *)(param_2 + 6) <= *(ushort *)((int)param_2 + 0x1a)) {
      FUN_002ccf80();
    }
    *(int **)(param_2[7] + (uint)*(ushort *)((int)param_2 + 0x1a) * 4) = piVar6;
    *(short *)((int)param_2 + 0x1a) = *(short *)((int)param_2 + 0x1a) + 1;
    uVar3 = FUN_002b2b80();
    FUN_002be9e0(piVar6,uVar3);
    if (0x1b < *(ushort *)((int)param_2 + 0x1a)) {
      FID_conflict__wprintf
                (s_____ERROR_____Excessive_amount_o_00402624,(uint)*(ushort *)((int)param_2 + 0x1a))
      ;
    }
    iVar5 = piVar6[4] - param_3[4];
    param_2 = piVar6;
  } while( true );
}
