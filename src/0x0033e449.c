/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5746BF0D53DA395F9A908C566DC8855E72C614EF14627B0373727A0AE0615C5A
 * Entry: 0x0033e449, Ghidra index: 12607, label: FUN_0033e449
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0a74;
undefined4 FUN_0033e449(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_c [2];
  
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  if ((*param_1 == '\0') || ((*param_1 == '\r' && (param_1[1] == '\n')))) {
    return 1;
  }
  iVar2 = __strnicmp(param_1,"Content-Length:",0xf);
  if (iVar2 == 0) {
    for (param_1 = param_1 + 0xf; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
    }
    uVar5 = __atoi64(param_1);
    *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) & 0x7f;
    *(undefined8 *)(param_2 + 0xc0) = uVar5;
  }
  else {
    iVar2 = __strnicmp(param_1,"Last-Modified:",0xe);
    if (iVar2 == 0) {
      for (param_1 = param_1 + 0xe; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1)
      {
      }
      param_2 = param_2 + 0xb0;
    }
    else {
      iVar2 = __strnicmp(param_1,"Date:",5);
      if (iVar2 != 0) {
        iVar2 = __strnicmp(param_1,"X-Err:",6);
        if (iVar2 == 0) {
          for (; (*param_1 != ' ' && (*param_1 != '\0')); param_1 = param_1 + 1) {
          }
          for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
          }
          pcVar3 = param_1;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_0033eca3(param_1,(int)pcVar3 - (int)(param_1 + 1),local_c);
          *(undefined4 *)(param_2 + 0x10) = local_c[0];
          return 0;
        }
        iVar2 = __strnicmp(param_1,&DAT_004b0a74,4);
        if (iVar2 != 0) {
          return 0;
        }
        for (; (*param_1 != ' ' && (*param_1 != '\0')); param_1 = param_1 + 1) {
        }
        for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
        }
        iVar2 = 0;
        cVar1 = *param_1;
        while ((cVar1 != ' ' && (param_1[iVar2] != '\0'))) {
          iVar2 = iVar2 + 1;
          cVar1 = param_1[iVar2];
        }
        param_1[iVar2] = '\0';
        uVar4 = _atol(param_1);
        *(uint *)(param_2 + 0xac) = uVar4;
        if (uVar4 < 400) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x10) = 0x8007042a;
        return 0;
      }
      for (param_1 = param_1 + 5; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
      }
      param_2 = param_2 + 0xb8;
    }
    FUN_0033dfd1(param_1,param_2);
  }
  return 0;
}
