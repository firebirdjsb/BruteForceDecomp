/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB7E6AB1A52B475119AEBFA02E68CD77DC73030C9699C3DD8D73F14BEA3AFF70
 * Entry: 0x002f5ac5, Ghidra index: 10901, label: XLocateSignatureByNameEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
XAPILIB__XLocateSignatureByNameEx
          (int param_1,char *param_2,uint param_3,uint *param_4,undefined4 param_5,
          undefined4 param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  short local_14 [2];
  char *local_10;
  ushort local_c [2];
  ushort *local_8;
  
  local_10 = param_2;
  sVar2 = (short)param_2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  local_14[0] = (short)param_2 - (sVar2 + 1);
  puVar8 = (ushort *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + *(int *)(param_1 + 0xc));
  puVar9 = puVar8;
  if (puVar8 != (ushort *)0x0) {
    while( true ) {
      local_c[0] = puVar9[3];
      local_8 = puVar9 + (uint)puVar9[2] * 5 + 6;
      iVar3 = RtlCompareString(local_14,local_c,1);
      uVar6 = 0;
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        uVar7 = *puVar9;
      }
      else {
        uVar7 = puVar9[1];
      }
      if ((uVar7 == 0) || (puVar9 = (ushort *)((uint)uVar7 + (int)puVar8), puVar9 == (ushort *)0x0))
      goto LAB_002f5b3d;
    }
    if (puVar9 != (ushort *)0x0) {
      if (*param_4 == 0) {
        *param_4 = *(int *)(puVar9 + 4) - param_3;
      }
      uVar11 = (uint)puVar9[2];
      if (puVar9[2] == 0) goto LAB_002f5b90;
      goto LAB_002f5b65;
    }
  }
LAB_002f5b3d:
  SetLastError(2);
  return 0;
LAB_002f5b65:
  do {
    uVar4 = uVar11 + uVar6 >> 1;
    if (*(uint *)(puVar9 + uVar4 * 4 + 6) < param_3) {
LAB_002f5b73:
      uVar6 = uVar4 + 1;
      uVar10 = uVar11;
    }
    else {
      uVar10 = uVar4;
      if (*(uint *)(puVar9 + uVar4 * 4 + 6) <= param_3) {
        if (*(uint *)(puVar9 + uVar4 * 4 + 8) < *param_4) goto LAB_002f5b73;
        if (*(uint *)(puVar9 + uVar4 * 4 + 8) <= *param_4) break;
      }
    }
    uVar11 = uVar10;
  } while (uVar6 < uVar10);
  if (uVar6 < uVar11) {
    uVar5 = XLocateSignatureByIndex(param_1,puVar9[uVar4 + (uint)puVar9[2] * 4 + 6],param_5,param_6)
    ;
  }
  else {
LAB_002f5b90:
    SetLastError(0x490);
    uVar5 = 0;
  }
  return uVar5;
}
