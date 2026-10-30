/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 859A83969C910C810AB9A21CEF6C3A5D427776E63AA1FBC91E217A80D104C512
 * Entry: 0x002e3a20, Ghidra index: 10418, label: FUN_002e3a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002e3a20(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,char param_5,
            char *param_6,undefined1 param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar3 = param_2 + param_4;
  if (param_1 != (undefined4 *)0x0) {
    while( true ) {
      uVar7 = in_ECX[3];
      uVar5 = in_ECX[2];
      if (uVar7 < uVar5) {
        uVar5 = (uVar5 - uVar7) - 1;
        bVar4 = true;
      }
      else {
        if ((uVar5 < uVar7) || (in_ECX[8] == 0)) {
          uVar6 = in_ECX[1] - uVar7;
          if (uVar6 >= uVar3) {
            uVar5 = uVar6;
          }
          uVar7 = ~-(uint)(uVar6 < uVar3) & uVar7;
        }
        else {
          uVar5 = 0;
          uVar7 = 0;
        }
        bVar4 = false;
      }
      if (((int)uVar3 <= (int)uVar5) && ((uint)in_ECX[8] < (uint)in_ECX[5])) break;
      if (bVar4) {
        FUN_002e3730();
      }
      else if (in_ECX[8] != 0) {
        uVar7 = (in_ECX[6] + 1U) % (uint)in_ECX[5];
        iVar1 = in_ECX[8] + -1;
        in_ECX[8] = iVar1;
        in_ECX[6] = uVar7;
        if (iVar1 == 0) {
          in_ECX[3] = 0;
          in_ECX[2] = 0;
        }
        else {
          in_ECX[2] = *(int *)(in_ECX[4] + 4 + uVar7 * 0xc);
        }
      }
    }
    *(uint *)(in_ECX[4] + in_ECX[7] * 0xc) = uVar3;
    *(uint *)(in_ECX[4] + 4 + in_ECX[7] * 0xc) = uVar7;
    *(undefined1 *)(in_ECX[4] + 9 + in_ECX[7] * 0xc) = param_7;
    if (param_5 == '\0') {
      *(undefined1 *)(in_ECX[4] + 8 + in_ECX[7] * 0xc) = 0;
    }
    else if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
      piVar2 = in_ECX + 9;
      *(char *)piVar2 = (char)*piVar2 + '\x01';
      if ((char)*piVar2 == '\0') {
        *(undefined1 *)(in_ECX + 9) = 1;
      }
      *(char *)(in_ECX[4] + 8 + in_ECX[7] * 0xc) = (char)in_ECX[9];
    }
    else {
      *(char *)(in_ECX[4] + 8 + in_ECX[7] * 0xc) = *param_6;
    }
    if (param_6 != (char *)0x0) {
      *param_6 = *(char *)(in_ECX[4] + 8 + in_ECX[7] * 0xc);
    }
    puVar8 = (undefined4 *)(*in_ECX + uVar7);
    for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if (param_4 != 0) {
      puVar8 = (undefined4 *)(*in_ECX + uVar7 + param_2);
      for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *param_3;
        param_3 = param_3 + 1;
        puVar8 = puVar8 + 1;
      }
      for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    in_ECX[8] = in_ECX[8] + 1;
    in_ECX[3] = uVar7 + uVar3;
    in_ECX[7] = (in_ECX[7] + 1U) % (uint)in_ECX[5];
    return 0;
  }
  return 0x80004003;
}
