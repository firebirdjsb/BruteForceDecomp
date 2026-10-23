/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C6E16B5DC9513B861B6FBF20D1587A44ECD1F9020DE87750D79449191A1AC61
 * Entry: 0x0017adb0, Ghidra index: 5026, label: FUN_0017adb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000bc;
extern uint32_t DAT_004000d0;
extern uint32_t DAT_00400128;
extern uint32_t DAT_004071c8;
extern uint32_t DAT_004071cc;
extern uint32_t DAT_004071d0;
extern uint32_t DAT_004071d4;
extern uint32_t DAT_004071dc;
extern uint32_t DAT_004072f4;
extern uint32_t DAT_0040c528;
extern uint32_t DAT_0040c53c;
extern uint32_t DAT_0040c544;
extern uint32_t DAT_0040dd4c;
extern uint32_t *DAT_004432f8;
extern uint32_t DAT_00469974;
extern uint32_t DAT_00469b58;
extern uint32_t PTR_DAT_004071d8;
extern uint32_t PTR_DAT_004071e0;
extern char s__s__s_0040c534[];
undefined1 FUN_0017adb0(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int in_EAX;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  int *unaff_EBP;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  char *pcVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 **ppuVar20;
  undefined4 uStack_6bc;
  undefined1 auStack_6b8 [4];
  uint uStack_6b4;
  int iStack_6b0;
  int aiStack_6a8 [3];
  undefined4 *local_69c;
  undefined4 *local_698;
  int local_694;
  undefined4 uStack_690;
  int *local_68c;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680 [5];
  undefined4 local_66c [5];
  undefined4 local_658 [5];
  undefined4 local_644 [5];
  undefined4 local_630 [5];
  undefined1 auStack_61c [4];
  char acStack_618 [259];
  char cStack_515;
  char acStack_514 [259];
  undefined4 uStack_411;
  char acStack_30c [260];
  undefined1 auStack_208 [260];
  undefined1 auStack_104 [260];
  
  local_69c = *(undefined4 **)(in_EAX + 4);
  if (local_69c == (undefined4 *)0x0) {
    return 0;
  }
  local_698 = *(undefined4 **)(in_EAX + 8);
  local_694 = ((int)local_698 - (int)local_69c) / 0x6c;
  if (local_694 == 0) {
    return 0;
  }
  if (local_69c != local_698) {
    local_68c = param_1 + 0x4d;
    puVar16 = local_69c + 2;
    do {
      puVar15 = local_69c;
      local_688 = *local_69c;
      local_684 = puVar16[-1];
      puVar13 = puVar16;
      puVar4 = local_680;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar13 = puVar16 + 5;
      puVar4 = local_66c;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar13 = puVar16 + 10;
      puVar4 = local_658;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar13 = puVar16 + 0xf;
      puVar4 = local_644;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar13 = puVar16 + 0x14;
      puVar4 = local_630;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar4 = puVar4 + 1;
      }
      (**(code **)(*param_1 + 4))();
      auStack_61c = (undefined1  [4])FUN_002383b0();
      uStack_690 = *puVar15;
      puVar4 = (undefined4 *)FUN_0017c470();
      *puVar4 = local_688;
      puVar15 = local_680;
      puVar13 = puVar4 + 2;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar15 = local_66c;
      puVar13 = puVar4 + 7;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar15 = local_658;
      puVar13 = puVar4 + 0xc;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar15 = local_644;
      puVar13 = puVar4 + 0x11;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar15 = local_630;
      puVar13 = puVar4 + 0x16;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar4[1] = local_684;
      puVar4[0x1b] = auStack_61c;
      local_69c = local_69c + 0x1b;
      puVar16 = puVar16 + 0x1b;
    } while (local_69c != local_698);
  }
  pcVar5 = (char *)(**(code **)(*param_1 + 4))();
  pcVar12 = (char *)((int)&uStack_411 + 1);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar12 = cVar1;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  pcVar12 = &DAT_0040c544;
  do {
    pcVar5 = pcVar12;
    pcVar12 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  puVar16 = &uStack_411;
  do {
    pcVar12 = (char *)((int)puVar16 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  } while (*pcVar12 != '\0');
  puVar15 = (undefined4 *)&DAT_0040c544;
  for (uVar9 = (uint)(pcVar5 + -0x40c543) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  pcVar12 = (char *)((int)&uStack_411 + 1);
  for (uVar9 = (uint)(pcVar5 + -0x40c543) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  aiStack_6a8[2] = 0xf;
  aiStack_6a8[1] = 0;
  uStack_6b4 = uStack_6b4 & 0xffffff00;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0((int)&uStack_411 + 1,(int)pcVar12 - ((int)&uStack_411 + 2));
  FUN_001e8830(&DAT_00400128);
  if (0xf < (uint)aiStack_6a8[2]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_6b4);
  }
  pcVar5 = (char *)(**(code **)(*param_1 + 4))();
  pcVar12 = acStack_514;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar12 = cVar1;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar8 = param_1[0x58];
  switch(iVar8) {
  case 3:
    pcVar5 = &DAT_004071d4;
    pcVar12 = pcVar5;
    break;
  case 4:
    pcVar5 = &DAT_004071d0;
    pcVar12 = pcVar5;
    break;
  case 5:
    pcVar5 = &DAT_004071cc;
    pcVar12 = pcVar5;
    break;
  case 6:
    pcVar5 = (char *)&DAT_004071c8;
    pcVar12 = pcVar5;
    break;
  default:
    pcVar5 = &DAT_004072f4;
    pcVar12 = pcVar5;
  }
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar17 = &cStack_515;
  do {
    pcVar14 = pcVar17 + 1;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar14 != '\0');
  pcVar14 = pcVar12;
  for (uVar9 = (uint)((int)pcVar5 - (int)pcVar12) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar9 = (int)pcVar5 - (int)pcVar12 & 3; pcVar12 = (char *)&DAT_0040c53c, uVar9 != 0;
      uVar9 = uVar9 - 1) {
    *pcVar17 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar17 = pcVar17 + 1;
  }
  do {
    pcVar5 = pcVar12;
    pcVar12 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  pcVar12 = &cStack_515;
  do {
    pcVar17 = pcVar12 + 1;
    pcVar12 = pcVar12 + 1;
  } while (*pcVar17 != '\0');
  pcVar17 = (char *)&DAT_0040c53c;
  for (uVar9 = (uint)(pcVar5 + -0x40c53b) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = (uint)(pcVar5 + -0x40c53b) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (DAT_00469974 == '\0') {
    iVar6 = 0;
    puVar2 = PTR_DAT_004071d8;
    while (puVar7 = PTR_DAT_004071d8, puVar2 != (undefined *)0x0) {
      if ((&DAT_004071dc)[iVar6 * 2] == iVar8) {
        puVar7 = (&PTR_DAT_004071d8)[iVar6 * 2];
        break;
      }
      iVar3 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      puVar2 = (&PTR_DAT_004071e0)[iVar3];
    }
    FUN_002eaa86(acStack_30c,s__s__s_0040c534,puVar7,acStack_514);
    pcVar12 = acStack_30c;
    aiStack_6a8[2] = 0xf;
    aiStack_6a8[1] = 0;
    uStack_6b4 = uStack_6b4 & 0xffffff00;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(acStack_30c,(int)pcVar12 - (int)(acStack_30c + 1));
    FUN_001e8830(&DAT_00400128);
    if (0xf < (uint)aiStack_6a8[2]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_6b4);
    }
    puVar16 = DAT_004000bc;
    if (DAT_004000d0 < 0x10) {
      puVar16 = &DAT_004000bc;
    }
    FUN_002eaa86(param_1 + 0x9a,&DAT_0040dd4c,puVar16,auStack_208);
  }
  else {
    pcVar12 = acStack_514;
    aiStack_6a8[2] = 0xf;
    aiStack_6a8[1] = 0;
    uStack_6b4 = uStack_6b4 & 0xffffff00;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(acStack_514,(int)pcVar12 - (int)(acStack_514 + 1));
    FUN_001e8830(&DAT_00400128);
    if (0xf < (uint)aiStack_6a8[2]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_6b4);
    }
    (**(code **)(*DAT_004432f8 + 0x28))(DAT_004432f8,(int)&uStack_411 + 1,param_1 + 0x9a,0x104);
  }
  pcVar5 = (char *)(**(code **)(*param_1 + 4))();
  pcVar12 = acStack_618;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar12 = cVar1;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  pcVar12 = (char *)&DAT_0040c53c;
  do {
    pcVar5 = pcVar12;
    pcVar12 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  puVar16 = (undefined4 *)(auStack_61c + 3);
  do {
    pcVar12 = (char *)((int)puVar16 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  } while (*pcVar12 != '\0');
  puVar15 = &DAT_0040c53c;
  for (uVar9 = (uint)(pcVar5 + -0x40c53b) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  for (uVar9 = (uint)(pcVar5 + -0x40c53b) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  if (*(int **)(DAT_00469b58 + 8) == (int *)0x0) {
    pcVar12 = acStack_618;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
LAB_0017b37b:
    aiStack_6a8[2] = 0xf;
    aiStack_6a8[1] = 0;
    uStack_6b4 = uStack_6b4 & 0xffffff00;
    FUN_0001fed0(acStack_618,(int)pcVar12 - (int)(acStack_618 + 1));
    FUN_001e8740(auStack_6b8,&DAT_00400128);
    if (0xf < (uint)aiStack_6a8[2]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_6b4);
    }
  }
  else {
    iVar8 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a8))();
    if ((iVar8 == 0) || (iVar8 = *(int *)(iVar8 + 0x9c), iVar8 == 0)) {
      pcVar12 = acStack_618;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      goto LAB_0017b37b;
    }
    if (*(uint *)(iVar8 + 0x38) < 0x10) {
      pcVar12 = (char *)(iVar8 + 0x24);
    }
    else {
      pcVar12 = *(char **)(iVar8 + 0x24);
    }
    piVar10 = param_1 + 0xdb;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)piVar10 = cVar1;
      piVar10 = (int *)((int)piVar10 + 1);
    } while (cVar1 != '\0');
    pcVar12 = &DAT_0040c528;
    do {
      pcVar5 = pcVar12;
      pcVar12 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    puVar16 = (undefined4 *)((int)param_1 + 0x36b);
    do {
      pcVar12 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    } while (*pcVar12 != '\0');
    puVar15 = (undefined4 *)&DAT_0040c528;
    for (uVar9 = (uint)(pcVar5 + -0x40c527) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    for (uVar9 = (uint)(pcVar5 + -0x40c527) & 3; pcVar12 = acStack_618, uVar9 != 0;
        uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
      puVar15 = (undefined4 *)((int)puVar15 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar9 = (int)pcVar12 - (int)acStack_618;
    pcVar12 = (char *)((int)param_1 + 0x36b);
    do {
      pcVar5 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = acStack_618;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  uVar18 = (undefined1)((uint)&uStack_6bc >> 0x18);
  ppuVar20 = &local_698;
  uVar19 = 0x80;
  uStack_6bc = 0;
  local_698 = (undefined4 *)0xe0c43d05;
  iVar8 = (**(code **)(*DAT_004432f8 + 0xc))(DAT_004432f8,auStack_104);
  if (-1 < iVar8) {
    uVar18 = uVar19;
    iVar8 = (**(code **)(*unaff_EBP + 0x20))(unaff_EBP);
    if ((-1 < iVar8) && (iStack_6b0 != 0)) {
      param_1[0x51] = iStack_6b0;
      if (param_1[0x50] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(param_1[0x50]);
      }
      iVar8 = thunk_FUN_002ea01d(param_1[0x51]);
      param_1[0x50] = iVar8;
      if (iVar8 != 0) {
        iVar8 = (*(code *)(*ppuVar20)[4])(ppuVar20,iVar8,param_1[0x51],0);
        uVar18 = -1 < iVar8;
        (**(code **)(aiStack_6a8[0] + 0xc))(aiStack_6a8);
        goto LAB_0017b485;
      }
    }
    (*(code *)(*ppuVar20)[3])(ppuVar20);
  }
LAB_0017b485:
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return uVar18;
}
