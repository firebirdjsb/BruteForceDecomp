/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F3170A7B98CE2B5D7994BFA8B3CE4830343D48E3B63B68010E9610D8DA90443
 * Entry: 0x001e3bc0, Ghidra index: 6773, label: FUN_001e3bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ddd8;
extern char s_contentmeta_xbx_00407590[];
undefined1 FUN_001e3bc0(undefined4 param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *in_EAX;
  char *pcVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_24d;
  int local_24c;
  undefined1 local_248 [4];
  undefined4 ******local_244 [4];
  undefined4 local_234;
  uint local_230;
  undefined4 ******local_228 [4];
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  int local_20c;
  int local_208;
  char *local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  undefined1 local_1f4 [4];
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  uint local_1e0;
  undefined4 local_1d0;
  uint local_1cc;
  undefined1 local_1c8 [4];
  uint local_1c4;
  undefined4 local_1b4;
  uint local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [4];
  uint local_1a4;
  undefined4 local_194;
  uint local_190;
  uint local_188;
  undefined4 local_178;
  uint local_174;
  uint local_16c;
  undefined4 local_15c;
  uint local_158;
  char local_154 [20];
  byte local_140 [44];
  char local_114 [276];
  
  local_24d = 0;
  *param_3 = 0;
  local_200 = XAPILIB__XLoadContentSignaturesEx(0,in_EAX);
  if (local_200 == 0) {
    local_1cc = 0xf;
    local_1d0 = 0;
    local_1e0 = local_1e0 & 0xffffff00;
    pcVar4 = in_EAX;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_0001fed0(in_EAX,(int)pcVar4 - (int)(in_EAX + 1));
    pcVar4 = &DAT_0040ddd8;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00087af0();
    iVar5 = FUN_001e4830();
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar5 = iVar5 + 4;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
    iVar5 = FUN_002f46db(iVar5,local_140);
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_16c);
    }
    if (iVar5 != -1) {
      *param_3 = 1;
      XAPILIB__CloseHandle(iVar5);
    }
    if (0xf < local_1cc) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_1e0);
    }
    return 0;
  }
  local_1f0 = 0;
  local_1ec = 0;
  local_1e8 = 0;
  local_190 = 0xf;
  local_194 = 0;
  local_1a4 = local_1a4 & 0xffffff00;
  pcVar4 = in_EAX;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_0001fed0(in_EAX,(int)pcVar4 - (int)(in_EAX + 1));
  pcVar4 = &DAT_0040ddd8;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_00087af0();
  FUN_000764c0(local_1a8);
  local_1ac = local_194;
  local_24c = 0;
  bVar3 = true;
  while (local_1f0 != 0) {
    iVar5 = local_1ec - local_1f0 >> 0x1f;
    iVar7 = (local_1ec - local_1f0) / 0x1c + iVar5;
    if ((iVar7 == iVar5) || (!bVar3)) break;
    iVar8 = local_1ec + -0x1c;
    local_1b0 = 0xf;
    local_1b4 = 0;
    local_1c4 = local_1c4 & 0xffffff00;
    FUN_0001f4f0(iVar8,0,0xffffffff);
    if (iVar7 != iVar5) {
      FUN_000762d0(local_1f4,local_210);
      local_1ec = iVar8;
    }
    iVar5 = FUN_001e4830();
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar5 = iVar5 + 4;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
    local_1f8 = FUN_002f46db(iVar5,local_140);
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_16c);
    }
    local_158 = 0xf;
    local_15c = 0;
    local_16c = local_16c & 0xffffff00;
    if (local_1f8 != -1) {
      do {
        local_174 = 0xf;
        local_178 = 0;
        local_188 = local_188 & 0xffffff00;
        FUN_0001f4f0(local_1c8,local_1ac,0xffffffff);
        FUN_001e4830();
        if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(local_188);
        }
        local_174 = 0xf;
        local_178 = 0;
        local_188 = local_188 & 0xffffff00;
        FUN_001e4830();
        iVar5 = __stricmp(local_114,s_contentmeta_xbx_00407590);
        if (iVar5 == 0) {
          if (0xf < local_230) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_244[0]);
          }
          local_230 = 0xf;
          local_234 = 0;
          local_244[0] = (undefined4 ******)((uint)local_244[0] & 0xffffff00);
          if (0xf < local_214) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_228[0]);
          }
        }
        else if (((local_140[0] & 0x10) == 0) || (local_114[0] == '.')) {
          pppppppuVar6 = (undefined4 *******)local_244[0];
          if (local_230 < 0x10) {
            pppppppuVar6 = local_244;
          }
          iVar5 = FUN_002f2b3f(pppppppuVar6,0x80000000,1,0,3,0x80,0);
          if (iVar5 == -1) {
LAB_001e4096:
            if (0xf < local_230) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(local_244[0]);
            }
          }
          else {
            local_24c = local_24c + 1;
            *param_3 = 1;
            iVar7 = XAPILIB__GetFileSize(iVar5,0);
            if (iVar7 != 0) {
              iVar8 = thunk_FUN_002ea01d(iVar7);
              local_208 = iVar8;
              if (iVar8 == 0) goto LAB_001e4096;
              iVar7 = XAPILIB__ReadFile(iVar5,iVar8,iVar7,&local_210,0);
              if (iVar7 == 0) goto LAB_001e4085;
              local_204 = (char *)0x0;
              local_20c = 0x14;
              pppppppuVar6 = (undefined4 *******)local_228[0];
              if (local_214 < 0x10) {
                pppppppuVar6 = local_228;
              }
              iVar7 = XAPILIB__XLocateSignatureByName
                                (local_200,pppppppuVar6,0,0,&local_204,&local_20c);
              if (iVar7 == 0) goto LAB_001e4085;
              local_1fc = 0x14;
              iVar7 = XAPILIB__XCalculateContentSignature(iVar8,local_210,local_154,&local_1fc);
              if ((iVar7 == 0) || (local_1fc != local_20c)) goto LAB_001e4085;
              iVar7 = local_1fc;
              pcVar4 = local_154;
              pcVar9 = local_204;
              goto code_r0x001e4079;
            }
            if (0xf < local_230) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(local_244[0]);
            }
          }
          bVar3 = false;
          local_230 = 0xf;
          local_234 = 0;
          local_244[0] = (undefined4 ******)((uint)local_244[0] & 0xffffff00);
          if (0xf < local_214) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_228[0]);
          }
        }
        else {
          local_1cc = 0xf;
          local_1d0 = 0;
          local_1e0 = local_1e0 & 0xffffff00;
          pcVar4 = &DAT_0040ddd8;
          do {
            pcVar9 = pcVar4;
            pcVar4 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
          FUN_0001fed0(&DAT_0040ddd8,pcVar9 + -0x40ddd8);
          FUN_000784c0(0);
          if (0xf < local_1cc) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_1e0);
          }
          local_1cc = 0xf;
          local_1d0 = 0;
          local_1e0 = local_1e0 & 0xffffff00;
          FUN_000764c0(local_248);
          if (0xf < local_230) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_244[0]);
          }
          local_230 = 0xf;
          local_234 = 0;
          local_244[0] = (undefined4 ******)((uint)local_244[0] & 0xffffff00);
          if (0xf < local_214) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_228[0]);
          }
        }
        iVar5 = local_1f8;
        local_214 = 0xf;
        local_218 = 0;
        local_228[0] = (undefined4 ******)((uint)local_228[0] & 0xffffff00);
        local_230 = 0xf;
        local_234 = 0;
        iVar7 = FUN_002f47e8(local_1f8,local_140);
      } while ((iVar7 != 0) && (bVar3));
      XAPILIB__CloseHandle(iVar5);
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_1c4);
    }
    local_1b0 = 0xf;
    local_1b4 = 0;
    local_1c4 = local_1c4 & 0xffffff00;
  }
  XAPILIB__XCloseContentSignatures(local_200);
  if ((bVar3) && (local_24c == param_2)) {
    local_24d = 1;
  }
  if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_1a4);
  }
  local_190 = 0xf;
  local_194 = 0;
  local_1a4 = local_1a4 & 0xffffff00;
  FUN_00085470();
  return local_24d;
  while( true ) {
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar9;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
    if (cVar2 != cVar1) break;
code_r0x001e4079:
    iVar8 = local_208;
    if (iVar7 == 0) break;
  }
LAB_001e4085:
  XAPILIB__CloseHandle(iVar5);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar8);
}
