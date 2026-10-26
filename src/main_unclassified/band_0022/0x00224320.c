/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8076A986C0939E3FFBC01C803CD5C1733ECF4885551129450163A7D8F1BA426
 * Entry: 0x00224320, Ghidra index: 7617, label: FUN_00224320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
uint FUN_00224320(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar12;
  bool bVar13;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  
  piVar9 = *(int **)(param_2 + 0x9c);
  puVar11 = (undefined4 *)0x0;
  if (piVar9 != (int *)0x0) {
    iVar2 = *piVar9;
    if ((iVar2 == 0) || (iVar2 == 1)) {
      local_18 = piVar9[1];
    }
    else {
      local_18 = 0;
    }
    if ((iVar2 == 1) || (iVar2 == 10)) {
      local_14 = piVar9[1];
    }
    else {
      local_14 = 0;
    }
    if (local_18 != 0) {
      puVar11 = *(undefined4 **)(local_18 + 4);
    }
    puVar8 = (undefined4 *)param_1[0x17];
    cVar1 = *(char *)((int)puVar8[1] + 0x15);
    puVar5 = puVar8;
    puVar10 = (undefined4 *)puVar8[1];
    while (cVar1 == '\0') {
      if ((undefined4 *)puVar10[3] < puVar11) {
        puVar6 = (undefined4 *)puVar10[2];
        puVar10 = puVar5;
      }
      else {
        puVar6 = (undefined4 *)*puVar10;
      }
      puVar5 = puVar10;
      puVar10 = puVar6;
      cVar1 = *(char *)((int)puVar6 + 0x15);
    }
    if ((puVar5 == puVar8) || (puVar11 < (undefined4 *)puVar5[3])) {
      local_10 = puVar8;
      ppuVar7 = &local_10;
    }
    else {
      ppuVar7 = &param_1;
    }
    piVar9 = param_1 + 0x17;
    /* 0x2243a6 stores the whole candidate word; the alias read at
     * 0x2243bf precedes the low-byte write at 0x2243c4. */
    param_1 = puVar5;
    puVar12 = *ppuVar7;
    bVar13 = puVar12 == (undefined4 *)*piVar9;
    bf_x86_word_store_byte(&param_1,0U,1);
    if (bVar13) {
      puVar8 = (undefined4 *)FUN_002ea01d(0x2c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[10] = 0;
      }
      local_c = 0;
      local_10 = puVar11;
      piVar9 = (int *)FUN_00135410(&local_10);
      *(undefined4 **)(*piVar9 + 0x10) = puVar8;
      puVar8[6] = 0x3f800000;
      if ((local_14 != 0) && ((char)param_6 != '\0')) {
        FUN_00115000();
        fVar12 = (float10)FUN_00125940();
        puVar8[6] = (float)fVar12;
      }
      if (puVar8[10] != local_18) {
        FUN_0008f6a0(local_18);
      }
    }
    else {
      puVar8 = (undefined4 *)puVar12[4];
      /* 0x22444d clears only the low byte of the saved candidate word. */
      bf_x86_word_store_byte(&param_1,0U,0);
    }
    if ((local_14 == 0) || ((char)param_6 == '\0')) {
      puVar8[6] = 0x3f800000;
    }
    else {
      FUN_00115000();
      fVar12 = (float10)FUN_00125940();
      if ((float10)(float)puVar8[6] <= fVar12) {
        FUN_00115000();
        fVar12 = (float10)FUN_00125940();
        puVar8[6] = (float)fVar12;
      }
      else {
        puVar8[6] = puVar8[6];
      }
    }
    uVar3 = param_3[2];
    uVar4 = param_3[1];
    *puVar8 = *param_3;
    puVar8[1] = uVar4;
    puVar8[2] = uVar3;
    uVar3 = param_4[2];
    uVar4 = param_4[1];
    puVar8[3] = *param_4;
    puVar8[4] = uVar4;
    puVar8[5] = uVar3;
    puVar8[7] = param_2;
    puVar8[8] = param_5;
    /* 0x2244fb reads only the flag byte, not the modified pointer value. */
    return bf_x86_word_load_byte(&param_1,0U);
  }
  return 0;
}
