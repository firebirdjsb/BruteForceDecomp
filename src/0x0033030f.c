/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBF96DDCD60BADF821A09BF7272BEDE08B28CAB6F4629BDACAEA3206B1E8F962
 * Entry: 0x0033030f, Ghidra index: 12361, label: FUN_0033030f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_contentmeta_xbx_00407590[];
int FUN_0033030f(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined1 local_448 [8];
  int local_440;
  undefined1 local_25c [260];
  undefined1 local_158 [116];
  undefined1 local_e4 [32];
  byte local_c4;
  undefined4 local_b0;
  int local_ac;
  int local_a8 [12];
  uint local_78;
  int aiStack_74 [16];
  int local_34 [5];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  local_c = 0x104;
  iVar1 = FUN_0033ebdc(param_2,0,0,0,s_contentmeta_xbx_00407590,param_4,&local_c,local_25c);
  if (-1 < iVar1) {
    local_8 = FUN_002f2b3f(local_25c,0x80000000,1,0,3,0,0);
    if (local_8 != -1) {
      iVar1 = FUN_002f5810(local_8,param_2,1,local_e4);
      if ((iVar1 != 0) && ((local_c4 & 1) != 0)) {
        local_20 = 0;
        uStack_1c = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        local_18 = local_b0;
        if (local_ac == 0x44) {
          iVar1 = XAPILIB__ReadFile(local_8,&local_78,0x44,&local_c,&local_20);
          if ((iVar1 != 0) && (local_c == 0x44)) {
            XcSHAInit(local_158);
            XcSHAUpdate(local_158,&local_78,0x44);
            XcSHAFinal(local_158,local_34);
            iVar1 = 5;
            uVar2 = 0;
            bVar5 = true;
            piVar3 = local_34;
            piVar4 = local_a8;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar5 = *piVar3 == *piVar4;
              piVar3 = piVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (bVar5);
            if ((bVar5) && (local_78 < 0x11)) {
              if (local_78 != 0) {
                do {
                  if (aiStack_74[uVar2] == param_3) break;
                  uVar2 = uVar2 + 1;
                } while (uVar2 < local_78);
              }
              if (uVar2 != local_78) {
                local_c = 0x104;
                iVar1 = FUN_0033ebdc(param_2,0,0,0,param_1,param_4,&local_c,local_25c);
                if (-1 < iVar1) {
                  iVar1 = FUN_00330249(local_25c,local_448);
                  if ((-1 < iVar1) && (local_440 == param_2)) goto LAB_00330481;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar1 = -0x7ff8fff3;
LAB_00330481:
  if (local_8 != -1) {
    XAPILIB__CloseHandle(local_8);
  }
  return iVar1;
}
