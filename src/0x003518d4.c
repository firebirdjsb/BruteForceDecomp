/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D04EEF67634B63204DAFA78DF34DD2BD3DF86F3443892548236B119E8E7FEEC
 * Entry: 0x003518d4, Ghidra index: 13064, label: FUN_003518d4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003518d4(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  uint uVar6;
  short *psVar7;
  int *piVar8;
  short *psVar9;
  int *piVar10;
  bool bVar11;
  undefined4 uVar12;
  int *local_24;
  int *local_20;
  uint *local_1c;
  int local_18;
  undefined4 *local_14;
  uint *local_10;
  undefined4 local_c;
  uint local_8;
  
  if (param_3 < 0xf0) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 0xc);
  if (((uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8) !=
      *(uint *)(in_ECX + 0xa74)) {
    return;
  }
  iVar4 = 3;
  bVar11 = true;
  psVar7 = (short *)(param_2 + 0x24);
  psVar9 = (short *)(in_ECX + 0x1e0);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar11 = *psVar7 == *psVar9;
    psVar7 = psVar7 + 1;
    psVar9 = psVar9 + 1;
  } while (bVar11);
  if (!bVar11) {
    return;
  }
  if ((((*(char *)(param_2 + 8) != '\x02') || (*(char *)(param_2 + 9) != '\x01')) ||
      (*(char *)(param_2 + 10) != '\x06')) || (*(int *)(param_2 + 0xf4) != 0x63538263)) {
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 8;
    return;
  }
  iVar4 = FUN_0035055a(param_3,0x35,1,0,&local_24,0);
  piVar8 = local_24;
  if ((iVar4 == 0) ||
     (((cVar1 = (char)*local_24, cVar1 != '\x02' && (cVar1 != '\x05')) && (cVar1 != '\x06')))) {
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x10;
    return;
  }
  iVar4 = FUN_0035055a(param_3,0x36,4,0,&local_14,0);
  if ((iVar4 == 0) || (iVar4 = FUN_0034cc6e(), iVar4 == 0)) {
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x20;
    return;
  }
  if ((char)*piVar8 == '\x06') {
    cVar1 = *(char *)(in_ECX + 0x8c0);
    if ((((cVar1 != '\b') && (cVar1 != '\n')) && (cVar1 != '\r')) && (cVar1 != '\x0e')) {
      *(byte *)(in_ECX + 0xa73) = *(byte *)(in_ECX + 0xa73) | 8;
      return;
    }
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 2;
    if ((cVar1 != '\b') && (cVar1 != '\n')) {
      if ((cVar1 != '\r') && (cVar1 != '\x0e')) {
        return;
      }
      FUN_00351884(0);
      return;
    }
    *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) & 0xef;
    uVar2 = 0;
    *(undefined4 *)(in_ECX + 0x8e8) = 0;
    uVar12 = 9;
  }
  else {
    if ((*(char *)(in_ECX + 0x8c0) != '\x04') && (iVar4 = FUN_0034cc6e(), iVar4 == 0)) {
      *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x40;
      return;
    }
    if ((char)*piVar8 != '\x02') {
      cVar1 = *(char *)(in_ECX + 0x8c0);
      if ((((cVar1 != '\b') && (cVar1 != '\n')) && (cVar1 != '\r')) &&
         ((cVar1 != '\x0e' && (cVar1 != '\x04')))) {
        *(byte *)(in_ECX + 0xa73) = *(byte *)(in_ECX + 0xa73) | 2;
        return;
      }
      local_1c = (uint *)0x0;
      local_10 = (uint *)0x0;
      if (cVar1 != '\x04') {
        iVar4 = FUN_0035055a(param_3,0x33,4,0,&local_1c,0);
        if ((iVar4 == 0) ||
           (uVar3 = *local_1c,
           ((uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8) <
           (uint)*(byte *)(in_ECX + 0x20) * 0x3c)) {
          *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x80;
          return;
        }
        iVar4 = FUN_0035055a(param_3,1,4,0,&local_10,0);
        if ((iVar4 == 0) ||
           (uVar3 = *local_10,
           uVar3 = ~((uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8
                    ), (uVar3 & uVar3 + 1) != 0)) {
          *(byte *)(in_ECX + 0xa73) = *(byte *)(in_ECX + 0xa73) | 1;
          return;
        }
      }
      *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 0x80;
      if ((*(char *)(in_ECX + 0x8c0) != '\r') && (*(char *)(in_ECX + 0x8c0) != '\x0e')) {
        piVar8 = (int *)(in_ECX + 0x900);
        local_c = CONCAT31(local_c._1_3_,3);
        do {
          local_18 = 4;
          local_20 = piVar8;
          if (((char)local_c != '\x03') || ((*(byte *)(in_ECX + 0xa70) & 4) == 0)) {
            *piVar8 = 0;
            piVar8[1] = 0;
            piVar8[2] = 0;
            piVar8[3] = 0;
            iVar4 = FUN_0035055a(param_3,local_c,4,1,&local_24,&local_8);
            if (iVar4 != 0) {
              local_8 = local_8 >> 2;
              piVar10 = local_24;
              while ((local_24 = piVar10, local_8 != 0 && (local_18 != 0))) {
                iVar4 = FUN_0034cc6e();
                if (iVar4 != 0) {
                  piVar5 = piVar8;
                  if (piVar8 < local_20) {
                    do {
                      if (*piVar5 == *piVar10) break;
                      piVar5 = piVar5 + 1;
                    } while (piVar5 < local_20);
                  }
                  if (piVar5 == local_20) {
                    *local_20 = *piVar10;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + -1;
                  }
                }
                local_8 = local_8 - 1;
                piVar10 = piVar10 + 1;
              }
            }
            if ((char)local_c == '\x06') goto LAB_00351c6f;
          }
          if ((*(byte *)(in_ECX + 0x8c4) & 0x40) != 0) goto LAB_00351c6f;
          piVar8 = (int *)(in_ECX + 0x8f0);
          local_c = CONCAT31(local_c._1_3_,6);
        } while( true );
      }
      if ((*(int *)(in_ECX + 0x8e8) != *(int *)(param_2 + 0x18)) ||
         (*(uint *)(in_ECX + 0x8ec) != *local_10)) {
        *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x10000000;
        return;
      }
      goto LAB_00351cbc;
    }
    if (*(char *)(in_ECX + 0x8c0) != '\t') {
      *(byte *)(in_ECX + 0xa73) = *(byte *)(in_ECX + 0xa73) | 4;
      return;
    }
    *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 0x20;
    *(undefined4 *)(in_ECX + 0x8e8) = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *local_14;
    *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) & 0xef;
    *(int *)(in_ECX + 0xa74) = *(int *)(in_ECX + 0xa74) + -1;
    uVar12 = 0xb;
  }
LAB_00351a37:
  *(undefined4 *)(in_ECX + 0x928) = uVar2;
LAB_00351a3d:
  FUN_00350db4(uVar12,0);
  return;
LAB_00351c6f:
  if (*(char *)(in_ECX + 0x8c0) != '\x04') {
    *(undefined4 *)(in_ECX + 0x8e8) = *(undefined4 *)(param_2 + 0x18);
    *(uint *)(in_ECX + 0x8ec) = *local_10;
LAB_00351cbc:
    *(undefined4 *)(in_ECX + 0x928) = *local_14;
    iVar4 = FUN_0034c841();
    *(undefined4 *)(in_ECX + 0x92c) = *(undefined4 *)(iVar4 + 6);
    *(undefined2 *)(in_ECX + 0x930) = *(undefined2 *)(iVar4 + 10);
    *(undefined4 *)(in_ECX + 0x918) = *(undefined4 *)(in_ECX + 0x1d8);
    uVar3 = *local_1c;
    uVar6 = (uint)*(byte *)(in_ECX + 0x21) * 0x15180;
    uVar3 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
    *(uint *)(in_ECX + 0x924) = uVar3;
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    *(uint *)(in_ECX + 0x924) = uVar3;
    *(uint *)(in_ECX + 0x91c) = uVar3 >> 1;
    *(uint *)(in_ECX + 0x920) = uVar3 * 7 >> 3;
    uVar12 = 0xc;
    goto LAB_00351a3d;
  }
  uVar2 = *local_14;
  uVar12 = 5;
  goto LAB_00351a37;
}
