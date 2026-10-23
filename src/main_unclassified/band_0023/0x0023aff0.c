/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49017221542BC163C0543A6E1F6040D0739BA783062A60CB04D001E85E200951
 * Entry: 0x0023aff0, Ghidra index: 7906, label: FUN_0023aff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040687c;
extern char s__s__s_0040c534[];
undefined4 FUN_0023aff0(char *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte local_44c [44];
  char local_420 [276];
  undefined1 local_30c [259];
  undefined4 uStack_209;
  undefined1 local_104 [260];
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)&uStack_209 + (1 - (int)param_1)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_0040687c;
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  puVar10 = &uStack_209;
  do {
    pcVar3 = (char *)((int)puVar10 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  } while (*pcVar3 != '\0');
  puVar8 = (undefined4 *)&DAT_0040687c;
  for (uVar7 = (uint)(pcVar4 + -0x40687b) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = (uint)(pcVar4 + -0x40687b) & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  bVar2 = true;
  iVar5 = FUN_002f46db((int)&uStack_209 + 1,local_44c);
  if (iVar5 == -1) {
    iVar6 = XAPILIB__GetLastError();
    if (iVar6 != 2) {
      return 0x80004005;
    }
    bVar2 = false;
  }
  uVar9 = 0;
  if (bVar2) {
    do {
      if (local_420[0] != '.') {
        if ((local_44c[0] & 0x10) == 0) {
          FUN_002eaa86(local_30c,s__s__s_0040c534,param_1,local_420);
          iVar6 = FUN_002f30bc(local_30c);
          if (iVar6 == 0) {
            if ((char)param_2 != '\0') {
              FUN_002f2fcb(local_30c,0x80);
              iVar6 = FUN_002f30bc(local_30c);
              if (iVar6 != 0) goto LAB_0023b11e;
            }
LAB_0023b119:
            uVar9 = 0x80004005;
          }
        }
        else {
          FUN_002eaa86(local_104,s__s__s_0040c534,param_1,local_420);
          iVar6 = FUN_0023aff0(local_104,param_2);
          if (iVar6 != 0) goto LAB_0023b119;
        }
      }
LAB_0023b11e:
      iVar6 = FUN_002f47e8(iVar5,local_44c);
    } while (iVar6 != 0);
    XAPILIB__CloseHandle(iVar5);
  }
  iVar5 = FUN_002f48a5(param_1);
  if (iVar5 == 0) {
    if ((char)param_2 != '\0') {
      FUN_002f2fcb(param_1,0x90);
      FUN_002f48a5(param_1);
    }
    return 0x80004005;
  }
  return uVar9;
}
