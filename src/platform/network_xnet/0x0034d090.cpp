/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A23F26952A87655CC1F6B3CEB567F869FD62D54F00345384C5E833B455CB20C
 * Entry: 0x0034d090, Ghidra index: 12997, label: FUN_0034d090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034d090(void)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  short *psVar7;
  bool bVar8;
  short *local_28;
  short local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  local_c = *(int **)(in_ECX + 0x24c);
  uVar2 = local_c[1];
  local_8 = in_ECX;
  do {
    if ((int)uVar2 < 0) {
      *(int **)(in_ECX + 0x24c) = local_c;
      return;
    }
    if (((uVar2 & 0x10000) != 0) &&
       ((((uVar2 & 0x40000000) == 0 || ((uVar2 & 0x3f800000) == 0x20000000)) &&
        ((*(byte *)(in_ECX + 1) & 0x10) != 0)))) {
      piVar3 = (int *)(*local_c - *(int *)(in_ECX + 0x21c));
      local_14 = 0;
      uVar1 = *(ushort *)(piVar3 + 3);
      uVar6 = uVar2 & 0xffff;
      if (((uVar2 & 0x60040000) == 0x60040000) && (uVar6 != 0)) {
        uVar6 = uVar6 - 1;
      }
      in_ECX = local_8;
      if (0x29 < uVar6) {
        piVar4 = piVar3;
        if (CONCAT11((char)uVar1,(char)(uVar1 >> 8)) < 0x5dd) {
          if ((*(int *)((int)piVar3 + 0xe) != 0x3aaaa) || (*(short *)((int)piVar3 + 0x12) != 0))
          goto LAB_0034d1b1;
          uVar1 = *(ushort *)(piVar3 + 5);
          piVar4 = piVar3 + 2;
          *piVar4 = *piVar3;
          piVar3[3] = piVar3[1];
          piVar3[4] = piVar3[2];
          uVar6 = uVar6 - 8;
          *(ushort *)(piVar3 + 5) = uVar1;
        }
        local_10 = (uint)uVar1;
        local_28 = (short *)((int)piVar4 + 0xe);
        local_24 = (short)uVar6 + -0xe;
        if ((*piVar4 == -1) && ((short)piVar4[1] == -1)) {
          local_20 = 0x1000000;
        }
        else {
          iVar5 = 3;
          bVar8 = true;
          psVar7 = (short *)(local_8 + 0x1e0);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar8 = (short)*piVar4 == *psVar7;
            piVar4 = (int *)((int)piVar4 + 2);
            psVar7 = psVar7 + 1;
          } while (bVar8);
          if (!bVar8) goto LAB_0034d1b1;
          local_20 = 0;
        }
        local_22 = 0;
        local_1c = 0;
        local_18 = 0;
        FUN_003561dd(&local_28,local_10);
      }
    }
LAB_0034d1b1:
    local_c[1] = -0x7ffff803;
    if (local_c == *(int **)(in_ECX + 0x248)) {
      local_c = *(int **)(in_ECX + 0x244);
    }
    else {
      local_c = local_c + 2;
    }
    uVar2 = local_c[1];
  } while( true );
}
