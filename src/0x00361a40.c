/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09DE1CB7A24A4841A30F0BD69D637DA01372E77A9481A3A2D1B632548B7F831E
 * Entry: 0x00361a40, Ghidra index: 13230, label: FUN_00361a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00361a40(undefined1 *param_1,int param_2)

{
  short *in_EAX;
  int iVar1;
  int *piVar2;
  int *in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_108;
  int local_100 [6];
  int local_e8 [2];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  piVar2 = local_100;
  local_108 = 8;
  do {
    if ((((((in_EAX[8] == 0 && in_EAX[0x10] == 0) && in_EAX[0x18] == 0) && in_EAX[0x20] == 0) &&
         in_EAX[0x28] == 0) && in_EAX[0x30] == 0) && in_EAX[0x38] == 0) {
      iVar1 = (int)*in_EAX * *in_EDX >> 0xb;
      *piVar2 = iVar1;
      piVar2[8] = iVar1;
      piVar2[0x10] = iVar1;
      piVar2[0x20] = iVar1;
      piVar2[0x28] = iVar1;
      piVar2[0x30] = iVar1;
      piVar2[0x38] = iVar1;
    }
    else {
      iVar6 = (int)*in_EAX * *in_EDX >> 0xb;
      iVar11 = in_EDX[0x20] * (int)in_EAX[0x20] >> 0xb;
      iVar1 = iVar11 + iVar6;
      iVar6 = iVar6 - iVar11;
      iVar4 = in_EDX[0x10] * (int)in_EAX[0x10] >> 0xb;
      iVar10 = in_EDX[0x30] * (int)in_EAX[0x30] >> 0xb;
      iVar11 = iVar10 + iVar4;
      iVar7 = iVar11 + iVar1;
      iVar1 = iVar1 - iVar11;
      iVar11 = ((iVar4 - iVar10) * 0xb50 >> 0xb) - iVar11;
      iVar4 = iVar11 + iVar6;
      iVar6 = iVar6 - iVar11;
      iVar11 = in_EDX[0x18] * (int)in_EAX[0x18] >> 0xb;
      iVar8 = in_EDX[0x28] * (int)in_EAX[0x28] >> 0xb;
      iVar9 = iVar11 + iVar8;
      iVar5 = in_EDX[0x38] * (int)in_EAX[0x38] >> 0xb;
      iVar8 = iVar8 - iVar11;
      iVar10 = in_EDX[8] * (int)in_EAX[8] >> 0xb;
      iVar11 = iVar10 + iVar5;
      iVar10 = iVar10 - iVar5;
      iVar5 = iVar9 + iVar11;
      iVar3 = (iVar10 + iVar8) * 0xec8 >> 0xb;
      iVar8 = ((iVar8 * -0x14e8 >> 0xb) - iVar5) + iVar3;
      iVar9 = ((iVar11 - iVar9) * 0xb50 >> 0xb) - iVar8;
      iVar11 = ((iVar10 * 0x8a9 >> 0xb) - iVar3) + iVar9;
      *piVar2 = iVar5 + iVar7;
      piVar2[0x38] = iVar7 - iVar5;
      piVar2[0x30] = iVar4 - iVar8;
      piVar2[0x28] = iVar6 - iVar9;
      piVar2[0x10] = iVar9 + iVar6;
      piVar2[8] = iVar8 + iVar4;
      piVar2[0x20] = iVar11 + iVar1;
      iVar1 = iVar1 - iVar11;
    }
    piVar2[0x18] = iVar1;
    in_EAX = in_EAX + 1;
    in_EDX = in_EDX + 1;
    piVar2 = piVar2 + 1;
    local_108 = local_108 + -1;
  } while (local_108 != 0);
  piVar2 = local_e8;
  local_108 = 2;
  do {
    iVar1 = piVar2[-6] + piVar2[-2];
    iVar3 = piVar2[-6] - piVar2[-2];
    iVar11 = piVar2[-4] + *piVar2;
    iVar4 = ((piVar2[-4] - *piVar2) * 0xb50 >> 0xb) - iVar11;
    iVar7 = iVar11 + iVar1;
    iVar1 = iVar1 - iVar11;
    iVar11 = iVar4 + iVar3;
    iVar3 = iVar3 - iVar4;
    iVar4 = piVar2[-3] + piVar2[-1];
    iVar8 = piVar2[-1] - piVar2[-3];
    iVar10 = piVar2[-5] + piVar2[1];
    iVar9 = piVar2[-5] - piVar2[1];
    iVar5 = iVar10 + iVar4;
    iVar6 = (iVar9 + iVar8) * 0xec8 >> 0xb;
    iVar8 = ((iVar8 * -0x14e8 >> 0xb) - iVar5) + iVar6;
    iVar4 = ((iVar10 - iVar4) * 0xb50 >> 0xb) - iVar8;
    *param_1 = (char)((uint)(iVar5 + 0x7f + iVar7) >> 8);
    param_1[7] = (char)((uint)((iVar7 - iVar5) + 0x7f) >> 8);
    param_1[6] = (char)((uint)((iVar11 - iVar8) + 0x7f) >> 8);
    param_1[2] = (char)((uint)(iVar3 + 0x7f + iVar4) >> 8);
    iVar10 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + iVar4;
    param_1[5] = (char)((uint)((iVar3 - iVar4) + 0x7f) >> 8);
    param_1[4] = (char)((uint)(iVar10 + 0x7f + iVar1) >> 8);
    param_1[1] = (char)((uint)(iVar8 + 0x7f + iVar11) >> 8);
    iVar5 = piVar2[6];
    iVar7 = piVar2[8];
    param_1[3] = (char)((uint)((iVar1 - iVar10) + 0x7f) >> 8);
    iVar1 = piVar2[2] + iVar5;
    iVar5 = piVar2[2] - iVar5;
    iVar7 = iVar7 + piVar2[4];
    iVar4 = ((piVar2[4] - piVar2[8]) * 0xb50 >> 0xb) - iVar7;
    iVar11 = iVar7 + iVar1;
    iVar1 = iVar1 - iVar7;
    iVar7 = iVar4 + iVar5;
    iVar5 = iVar5 - iVar4;
    iVar4 = piVar2[5] + piVar2[7];
    iVar8 = piVar2[7] - piVar2[5];
    iVar10 = piVar2[3] + piVar2[9];
    iVar9 = piVar2[3] - piVar2[9];
    iVar3 = iVar4 + iVar10;
    iVar6 = (iVar9 + iVar8) * 0xec8 >> 0xb;
    iVar8 = ((iVar8 * -0x14e8 >> 0xb) - iVar3) + iVar6;
    iVar4 = ((iVar10 - iVar4) * 0xb50 >> 0xb) - iVar8;
    param_1 = param_1 + param_2;
    *param_1 = (char)((uint)(iVar3 + 0x7f + iVar11) >> 8);
    param_1[7] = (char)((uint)((iVar11 - iVar3) + 0x7f) >> 8);
    param_1[1] = (char)((uint)(iVar8 + 0x7f + iVar7) >> 8);
    iVar11 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + iVar4;
    param_1[6] = (char)((uint)((iVar7 - iVar8) + 0x7f) >> 8);
    param_1[5] = (char)((uint)((iVar5 - iVar4) + 0x7f) >> 8);
    param_1[4] = (char)((uint)(iVar11 + 0x7f + iVar1) >> 8);
    iVar3 = piVar2[0xe];
    param_1[3] = (char)((uint)((iVar1 - iVar11) + 0x7f) >> 8);
    iVar1 = piVar2[10] + iVar3;
    iVar3 = piVar2[10] - iVar3;
    iVar11 = piVar2[0xc];
    param_1[2] = (char)((uint)(iVar4 + 0x7f + iVar5) >> 8);
    iVar7 = piVar2[0x10] + iVar11;
    iVar4 = ((iVar11 - piVar2[0x10]) * 0xb50 >> 0xb) - iVar7;
    iVar11 = iVar7 + iVar1;
    iVar1 = iVar1 - iVar7;
    iVar7 = iVar4 + iVar3;
    iVar3 = iVar3 - iVar4;
    iVar4 = piVar2[0xd] + piVar2[0xf];
    iVar8 = piVar2[0xf] - piVar2[0xd];
    iVar10 = piVar2[0xb] + piVar2[0x11];
    iVar9 = piVar2[0xb] - piVar2[0x11];
    iVar5 = iVar4 + iVar10;
    iVar6 = (iVar9 + iVar8) * 0xec8 >> 0xb;
    iVar8 = ((iVar8 * -0x14e8 >> 0xb) - iVar5) + iVar6;
    iVar4 = ((iVar10 - iVar4) * 0xb50 >> 0xb) - iVar8;
    param_1 = param_1 + param_2;
    iVar10 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + iVar4;
    *param_1 = (char)((uint)(iVar5 + 0x7f + iVar11) >> 8);
    param_1[7] = (char)((uint)((iVar11 - iVar5) + 0x7f) >> 8);
    param_1[1] = (char)((uint)(iVar8 + 0x7f + iVar7) >> 8);
    param_1[6] = (char)((uint)((iVar7 - iVar8) + 0x7f) >> 8);
    param_1[5] = (char)((uint)((iVar3 - iVar4) + 0x7f) >> 8);
    param_1[4] = (char)((uint)(iVar10 + 0x7f + iVar1) >> 8);
    iVar5 = piVar2[0x16];
    param_1[3] = (char)((uint)((iVar1 - iVar10) + 0x7f) >> 8);
    iVar1 = piVar2[0x12] + iVar5;
    iVar5 = piVar2[0x12] - iVar5;
    iVar11 = piVar2[0x14];
    param_1[2] = (char)((uint)(iVar4 + 0x7f + iVar3) >> 8);
    iVar7 = piVar2[0x18] + iVar11;
    iVar4 = ((iVar11 - piVar2[0x18]) * 0xb50 >> 0xb) - iVar7;
    iVar11 = iVar7 + iVar1;
    iVar1 = iVar1 - iVar7;
    iVar7 = iVar4 + iVar5;
    iVar5 = iVar5 - iVar4;
    iVar4 = piVar2[0x15] + piVar2[0x17];
    iVar8 = piVar2[0x17] - piVar2[0x15];
    iVar10 = piVar2[0x13] + piVar2[0x19];
    iVar9 = piVar2[0x13] - piVar2[0x19];
    iVar3 = iVar4 + iVar10;
    iVar6 = (iVar9 + iVar8) * 0xec8 >> 0xb;
    iVar8 = ((iVar8 * -0x14e8 >> 0xb) - iVar3) + iVar6;
    param_1 = param_1 + param_2;
    iVar4 = ((iVar10 - iVar4) * 0xb50 >> 0xb) - iVar8;
    *param_1 = (char)((uint)(iVar3 + 0x7f + iVar11) >> 8);
    param_1[7] = (char)((uint)((iVar11 - iVar3) + 0x7f) >> 8);
    param_1[1] = (char)((uint)(iVar8 + 0x7f + iVar7) >> 8);
    param_1[6] = (char)((uint)((iVar7 - iVar8) + 0x7f) >> 8);
    param_1[5] = (char)((uint)((iVar5 - iVar4) + 0x7f) >> 8);
    iVar11 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + iVar4;
    param_1[4] = (char)((uint)(iVar11 + 0x7f + iVar1) >> 8);
    param_1[3] = (char)((uint)((iVar1 - iVar11) + 0x7f) >> 8);
    param_1[2] = (char)((uint)(iVar4 + 0x7f + iVar5) >> 8);
    param_1 = param_1 + param_2;
    piVar2 = piVar2 + 0x20;
    local_108 = local_108 + -1;
  } while (local_108 != 0);
  return;
}
