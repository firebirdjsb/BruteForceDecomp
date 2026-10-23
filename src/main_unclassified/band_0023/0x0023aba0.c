/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56D517A7361535C893512DD3FB2C481C6C18779248D3CB0124394F6D995319CB
 * Entry: 0x0023aba0, Ghidra index: 7905, label: FUN_0023aba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004074a0;
extern uint32_t *DAT_004432fc;
extern uint32_t *DAT_0046990c;
extern uint32_t PTR_LAB_003929c8;
extern uint32_t UNK_0023ae7c;
extern uint32_t _DAT_00000000;
extern char s_23_23_ISchema_00406e3c[];
/* WARNING: Removing unreachable block (ram,0x0023aea9) */
/* WARNING: Removing unreachable block (ram,0x0023ac66) */
/* WARNING: Removing unreachable block (ram,0x0023ad2a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0023aba0(int **param_1)

{
  char *pcVar1;
  char cVar2;
  uint ***pppuVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint *****pppppuVar6;
  uint uVar7;
  uint uVar8;
  int **unaff_EBX;
  int *unaff_ESI;
  int **ppiVar9;
  undefined4 *puVar10;
  uint *****pppppuVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_EDI;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int **ppiStack_198;
  int **ppiStack_194;
  int *piStack_190;
  uint ***pppuStack_18c;
  int **ppiStack_188;
  uint ***pppuStack_184;
  int **ppiStack_180;
  int *piStack_17c;
  int *piStack_16c;
  int local_168;
  int *piStack_164;
  uint ****ppppuStack_160;
  int iStack_15c;
  uint ***pppuStack_158;
  undefined1 auStack_154 [4];
  int iStack_150;
  undefined1 auStack_14c [4];
  char acStack_148 [8];
  uint uStack_140;
  int iStack_130;
  uint uStack_12c;
  
  piStack_17c = &local_168;
  ppiStack_180 = param_1;
  local_168 = 0;
  pppuStack_184 = (uint ***)0x23abc3;
  (*(code *)(*param_1)[4])();
  if (unaff_EBX == (int **)0x0) {
    ppiVar9 = param_1 + 9;
    piStack_16c = (int *)0x0;
    if (param_1[9] == (int *)0x0) {
      pppuStack_184 = (uint ***)auStack_154;
      ppiStack_188 = param_1 + 5;
      pppuStack_18c = (uint ***)0x23abee;
      puVar4 = (undefined4 *)(*(code *)param_1[5][3])();
      piStack_164 = (int *)*puVar4;
      if (unaff_ESI != (int *)0x0) {
        piStack_190 = (int *)0x23ac02;
        (**(code **)(*unaff_ESI + 8))();
        unaff_ESI = (int *)0x0;
      }
      pppuStack_18c = (uint ***)0x0;
      piStack_190 = (int *)&stack0xfffffe8c;
      ppiStack_194 = (int **)0x1;
      ppiStack_198 = &piStack_164;
      (**(code **)(*DAT_004432fc + 0x24))(DAT_004432fc,1);
      pppuVar3 = pppuStack_18c;
      if (pppuStack_18c == (uint ***)0x0) {
        if (piStack_190 != (int *)0x0) {
          (**(code **)(*piStack_190 + 8))(piStack_190);
        }
        return 0x80004005;
      }
      piVar15 = *ppiVar9;
      if (piVar15 != (int *)0x0) {
        (**(code **)(*piVar15 + 8))(piVar15);
        *ppiVar9 = (int *)0x0;
      }
      (**(code **)((int)*pppuVar3 + 0x10))(pppuVar3,s_23_23_ISchema_00406e3c,ppiVar9);
    }
    pppuStack_184 = (uint ***)0x84;
    ppiStack_188 = (int **)0x23ac7a;
    unaff_EBX = (int **)FUN_002ea01d();
    if (unaff_EBX == (int **)0x0) {
      unaff_EBX = (int **)0x0;
    }
    else {
      pppuStack_184 = (uint ***)0x23ac88;
      FUN_00263af0();
      *unaff_EBX = (int *)&PTR_LAB_003929c8;
      unaff_EBX[0x20] = (int *)0x1;
    }
    piVar15 = *ppiVar9;
    if (piStack_16c != (int *)0x0) {
      pppuStack_184 = (uint ***)piStack_16c;
      ppiStack_188 = (int **)0x23acb2;
      (**(code **)(*piStack_16c + 8))();
      piStack_16c = (int *)0x0;
    }
    pppuStack_184 = (uint ***)&piStack_16c;
    pppuStack_18c = (uint ***)0x23acc1;
    ppiStack_188 = (int **)piVar15;
    (**(code **)(*piVar15 + 0x10))();
    pppuStack_18c = (uint ***)&pppuStack_158;
    piStack_190 = DAT_0046990c;
    ppiStack_194 = (int **)0x23acd1;
    (**(code **)(*DAT_0046990c + 0x34))();
    ppiVar9 = (int **)0x0;
    if (0 < (int)ppppuStack_160) {
LAB_0023ace0:
      ppiStack_194 = (int **)&stack0xfffffe88;
      unaff_EDI = 0;
      ppiStack_198 = ppiVar9;
      (**(code **)(*DAT_0046990c + 0x38))(DAT_0046990c);
      ppiStack_180 = (int **)0x0;
      (*(code *)(*pppuStack_184)[10])(pppuStack_184,&ppiStack_180);
      if (unaff_ESI != piStack_17c) goto code_r0x0023ad14;
      ppiStack_194 = (int **)piStack_17c;
      ppiStack_198 = ppiStack_180;
      (*(code *)(*ppiStack_180)[5])();
      piVar16 = (int *)0x104;
      piVar15 = &iStack_130;
      (**(code **)(*piStack_17c + 0x24))(piStack_17c,piVar15,0x104,0xffffffff);
      acStack_148[4] = '\x0f';
      acStack_148[5] = '\0';
      acStack_148[6] = '\0';
      acStack_148[7] = '\0';
      acStack_148[0] = '\0';
      acStack_148[1] = '\0';
      acStack_148[2] = '\0';
      acStack_148[3] = '\0';
      pppuStack_158 = (uint ***)((uint)pppuStack_158 & 0xffffff00);
      (**(code **)(*piStack_190 + 0x1c))(piStack_190,&ppppuStack_160);
      pcVar1 = (char *)&DAT_004074a0;
      do {
        pcVar5 = pcVar1;
        pcVar1 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      puVar4 = (undefined4 *)(auStack_14c + 3);
      do {
        pcVar1 = (char *)((int)puVar4 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (*pcVar1 != '\0');
      puVar10 = &DAT_004074a0;
      for (uVar7 = (uint)(pcVar5 + -0x40749f) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar7 = (uint)(pcVar5 + -0x40749f) & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      pppppuVar6 = (uint *****)ppppuStack_160;
      pppppuVar11 = (uint *****)ppppuStack_160;
      if ((uint)auStack_14c < 0x10) {
        pppppuVar6 = &ppppuStack_160;
        pppppuVar11 = pppppuVar6;
      }
      do {
        cVar2 = *(char *)pppppuVar6;
        pppppuVar6 = (uint *****)((int)pppppuVar6 + 1);
      } while (cVar2 != '\0');
      uVar7 = (int)pppppuVar6 - (int)pppppuVar11;
      piVar14 = (int *)(auStack_14c + 3);
      do {
        pcVar1 = (char *)((int)piVar14 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      } while (*pcVar1 != '\0');
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar14 = (int)*pppppuVar11;
        pppppuVar11 = pppppuVar11 + 1;
        piVar14 = piVar14 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)piVar14 = *(char *)pppppuVar11;
        pppppuVar11 = (uint *****)((int)pppppuVar11 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      }
      (**(code **)(*piVar16 + 0xc))(piVar16,0,acStack_148);
      (**(code **)(*piVar15 + 0x14))(piVar15,&ppiStack_198);
      ppiVar9 = (int **)0x0;
      if (0 < (int)piStack_16c) {
        do {
          ppiStack_194 = (int **)&iStack_15c;
          ppiStack_198 = ppiVar9;
          (**(code **)(_DAT_00000000 + 0x18))(0);
          if (*piStack_164 == 0x5dc1f4b) {
            pppuStack_158 = (uint ***)0xfb9e7f5f;
            unaff_EBX = (int **)0xb556933;
            (*(code *)(*pppuStack_18c)[7])(pppuStack_18c,&stack0xfffffe90,&pppuStack_158);
          }
          else {
            (*(code *)(*pppuStack_18c)[7])(pppuStack_18c,local_168,piStack_164);
          }
          ppiVar9 = (int **)((int)ppiVar9 + 1);
        } while ((int)ppiVar9 < (int)piStack_16c);
      }
      if (0xf < uStack_12c) {
        ppiStack_194 = (int **)uStack_140;
                    /* WARNING: Subroutine does not return */
        ppiStack_198 = (int **)&UNK_0023ae7c;
        thunk_FUN_00237ec0();
      }
      uStack_12c = 0xf;
      iStack_130 = 0;
      uStack_140 = uStack_140 & 0xffffff00;
      if (unaff_ESI != (int *)0x0) {
        ppiStack_198 = (int **)0x23ae9d;
        ppiStack_194 = (int **)unaff_ESI;
        (**(code **)(*unaff_ESI + 8))();
      }
    }
LAB_0023aeaf:
    ppiStack_194 = ppiStack_180;
    ppiStack_198 = param_1;
    (*(code *)(*param_1)[3])();
    if (piStack_16c != (int *)0x0) {
      pppuStack_184 = (uint ***)piStack_16c;
      ppiStack_188 = (int **)0x23aecb;
      (**(code **)(*piStack_16c + 8))();
    }
  }
  pppuStack_184 = (uint ***)&pppuStack_158;
  acStack_148[4] = '\0';
  acStack_148[5] = '\0';
  acStack_148[6] = '\0';
  acStack_148[7] = '\0';
  pppuStack_18c = (uint ***)0x23aee1;
  ppiStack_188 = unaff_EBX;
  (*(code *)(*unaff_EBX)[8])();
  piStack_190 = param_1[9];
  pppuStack_18c = (uint ***)&local_168;
  local_168 = 0;
  ppiStack_194 = (int **)0x23aef3;
  (**(code **)(*piStack_190 + 0x10))();
  ppiStack_194 = (int **)&iStack_150;
  ppiStack_198 = unaff_EBX;
  (*(code *)(*unaff_EBX)[8])();
  iVar12 = 0;
  if (0 < (int)unaff_EBX) {
    do {
      (*(code *)(*ppiStack_188)[9])(ppiStack_188,iVar12,&piStack_164);
      if (((uint ****)*ppppuStack_160 != (uint ****)0x0) && (*ppppuStack_160 == pppuStack_158)) {
        iStack_15c = *piStack_164;
        break;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)unaff_EBX);
  }
  (*(code *)(*ppiStack_188)[10])(ppiStack_188,unaff_EDI,&iStack_15c);
  piVar15 = param_1[2];
  if (piVar15 == (int *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)(*piVar15 + 0x24))(piVar15);
  }
  if ((uint ****)pppuStack_184 != (uint ****)0x0) {
    (*(code *)(*pppuStack_184)[2])(pppuStack_184);
    pppuStack_184 = (uint ***)0x0;
  }
  if (ppiStack_194 != (int **)0x0) {
    (**(code **)((int)*ppiStack_194 + 8))(ppiStack_194);
  }
  return uVar13;
code_r0x0023ad14:
  if (unaff_ESI != (int *)0x0) {
    ppiStack_198 = (int **)0x23ad1e;
    ppiStack_194 = (int **)unaff_ESI;
    (**(code **)(*unaff_ESI + 8))();
    unaff_ESI = (int *)0x0;
  }
  ppiVar9 = (int **)((int)ppiVar9 + 1);
  if ((int)ppppuStack_160 <= (int)ppiVar9) goto LAB_0023aeaf;
  goto LAB_0023ace0;
}
