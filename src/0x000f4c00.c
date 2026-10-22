/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9249BF81B16171BE4D483A8C3923A50325D0D351EEAB6AB85E3E8A07E347A4F0
 * Entry: 0x000f4c00, Ghidra index: 3067, label: FUN_000f4c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_000f4c00(undefined4 param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  wchar_t *__src;
  undefined4 *****pppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint unaff_EBX;
  int *piVar12;
  int unaff_retaddr;
  uint uStack_244;
  int aiStack_240 [2];
  undefined4 ****ppppuStack_238;
  undefined1 local_234;
  int iStack_228;
  uint local_224;
  undefined4 local_220;
  undefined4 ****ppppuStack_21c;
  undefined1 local_218;
  int iStack_20c;
  uint local_208;
  undefined4 local_204 [128];
  int iStack_4;
  
  iVar3 = DAT_00469b58;
  *param_4 = 0;
  local_204[0] = 0xf;
  local_220 = 0xf;
  local_208 = 0;
  local_218 = 0;
  local_224 = 0;
  local_234 = 0;
  uStack_244 = (uint)(ushort)uStack_244;
  iVar3 = (**(code **)(**(int **)(iVar3 + 8) + 0xd8))(param_2);
  aiStack_240[0] = iVar3;
  uStack_244 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1c4))();
  if (iVar3 != 0) {
    if (uStack_244 == 0) {
      iVar4 = *(int *)(iVar3 + 0x1c);
      if (*(uint *)(iVar4 + 0x18) < 0x10) {
        pcVar11 = (char *)(iVar4 + 4);
      }
      else {
        pcVar11 = *(char **)(iVar4 + 4);
      }
      pcVar7 = pcVar11 + 1;
      pcVar5 = pcVar11;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      piVar12 = (int *)(uStack_244 + 0x4c);
      iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x74))(piVar12,iVar3);
      if (iVar4 < 0) {
        if (*piVar12 != 0) {
          unaff_EBX = CONCAT13((char)(unaff_EBX >> 0x18),0x10000);
        }
        iVar4 = *(int *)(iVar3 + 0x1c);
        if (*(uint *)(iVar4 + 0x18) < 0x10) {
          pcVar11 = (char *)(iVar4 + 4);
        }
        else {
          pcVar11 = *(char **)(iVar4 + 4);
        }
        pcVar7 = pcVar11 + 1;
        pcVar5 = pcVar11;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar6 = iVar4 * 0x4c + *(int *)(iVar3 + 0x1c);
        if (*(uint *)(iVar4 * 0x4c + 0x18 + *(int *)(iVar3 + 0x1c)) < 0x10) {
          pcVar11 = (char *)(iVar6 + 4);
        }
        else {
          pcVar11 = *(char **)(iVar6 + 4);
        }
        pcVar7 = pcVar11 + 1;
        pcVar5 = pcVar11;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
      }
    }
    FUN_0001fed0(pcVar11,(int)pcVar5 - (int)pcVar7);
    iVar4 = DAT_00469b58;
    *(undefined2 *)(unaff_retaddr + 0x11c) = 0;
    piVar12 = (int *)(iVar3 + 0x68);
    iVar3 = (**(code **)(**(int **)(iVar4 + 8) + 0x1a4))
                      (*(undefined4 *)((*(int *)(iVar3 + 0x68) == -1) - 1 & (uint)piVar12));
    if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x9c), iVar4 != 0)) {
      if (*(uint *)(iVar4 + 0x38) < 0x10) {
        pcVar11 = (char *)(iVar4 + 0x24);
      }
      else {
        pcVar11 = *(char **)(iVar4 + 0x24);
      }
      pcVar7 = pcVar11;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0001fed0(pcVar11,(int)pcVar7 - (int)(pcVar11 + 1));
      iVar3 = *(int *)(iVar3 + 0x9c);
      if (*(uint *)(iVar3 + 0x1c) < 8) {
        __src = (wchar_t *)(iVar3 + 8);
      }
      else {
        __src = *(wchar_t **)(iVar3 + 8);
      }
      _wcsncpy((wchar_t *)(unaff_retaddr + 0x11c),__src,0x40);
      unaff_retaddr = iStack_4;
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20c))
              (*(undefined4 *)((*piVar12 == -1) - 1 & (uint)piVar12));
    *(undefined2 *)(unaff_retaddr + 0x220) = *(undefined2 *)((*piVar12 == -1) - 1 & (uint)piVar12);
    iVar3 = aiStack_240[0];
  }
  uVar2 = uStack_244;
  if (iStack_20c == 0) {
LAB_000f4efc:
    if ((char)(unaff_EBX >> 0x10) == '\0') goto LAB_000f4ff4;
  }
  else {
    pppppuVar9 = (undefined4 *****)ppppuStack_238;
    if (local_224 < 0x10) {
      pppppuVar9 = &ppppuStack_238;
    }
    pppppuVar8 = (undefined4 *****)ppppuStack_21c;
    if (local_208 < 0x10) {
      pppppuVar8 = &ppppuStack_21c;
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x5c))(pppppuVar8,pppppuVar9);
    pppppuVar9 = (undefined4 *****)ppppuStack_21c;
    if (local_208 < 0x10) {
      pppppuVar9 = &ppppuStack_21c;
    }
    FUN_002eaa19(unaff_retaddr + 0x19c,0x40,pppppuVar9);
    if (iStack_228 == 0) {
      *(undefined1 *)(unaff_retaddr + 0x1dc) = 0;
    }
    else {
      pppppuVar9 = (undefined4 *****)ppppuStack_238;
      if (local_224 < 0x10) {
        pppppuVar9 = &ppppuStack_238;
      }
      FUN_002eaa19(unaff_retaddr + 0x1dc,0x40,pppppuVar9);
    }
    if (iVar3 == 0) {
      uStack_244 = 0xa6de845;
      FUN_00102120();
      uStack_244 = 0x17506391;
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x54))(&uStack_244);
      FUN_00084d50();
      unaff_EBX = CONCAT13(1,(int3)unaff_EBX);
      goto LAB_000f4efc;
    }
    uStack_244 = 0xf63ee1fb;
    FUN_000f42d0(unaff_retaddr,&uStack_244);
    if ((char)(unaff_EBX >> 0x10) == '\0') {
      *param_3 = 1;
      goto LAB_000f4ff4;
    }
  }
  if (uVar2 != 0) {
    iVar3 = uVar2 + 0x4c;
    iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xd4))(iVar3);
    iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x74))(iVar3,iVar4);
    if ((iVar4 == 0) || (iVar3 < 1)) {
      *param_3 = 1;
    }
    else {
      aiStack_240[0] = 0x1ec45449;
      uVar10 = FUN_001e97c0();
      uVar10 = FUN_001e97c0(uVar10);
      FUN_002ea9a9(local_204,0x100,uVar10);
      piVar12 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      iVar3 = *piVar12;
      uStack_244 = 0xcc05846;
      uVar10 = FUN_001e97c0(local_204,param_2,*(undefined4 *)(param_2 + 0x60),0);
      iVar3 = (**(code **)(iVar3 + 0x38))(aiStack_240,uVar10);
      if (iVar3 != 0) {
        uStack_244 = 0xe8204a4;
        FUN_00100f90();
        iVar3 = FUN_00101710();
        if (iVar3 != 0) {
          uStack_244 = 0x10fa7a78;
          FUN_0010ce80(iVar3);
        }
      }
    }
  }
LAB_000f4ff4:
  if (0xf < local_224) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(ppppuStack_238);
  }
  local_224 = 0xf;
  iStack_228 = 0;
  ppppuStack_238 = (undefined4 ****)((uint)ppppuStack_238 & 0xffffff00);
  if (local_208 < 0x10) {
    return unaff_EBX >> 0x18;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(ppppuStack_21c);
}
