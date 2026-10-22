/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4989328F33FD86E1BACCE04FAD1D5A492D7544316AC642500484A9D0AC2B8D4
 * Entry: 0x000f1990, Ghidra index: 3012, label: FUN_000f1990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern char s_Parameters_004071bc[];
undefined4 FUN_000f1990(void)

{
  byte bVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_258;
  int *local_254;
  char cStack_24d;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  undefined4 auStack_230 [139];
  
  local_254 = (int *)0x0;
  piVar5 = (int *)0x0;
  if ((in_EAX != (int *)0x0) && (iVar3 = (**(code **)(*in_EAX + 4))(), iVar3 == 8)) {
    piVar5 = in_EAX;
    local_254 = in_EAX;
  }
  local_238 = in_EAX[1];
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar4 == 0x120785ef) {
    iStack_23c = 2;
  }
  else {
    iStack_23c = (uint)(*piVar4 == -0x104e72d8) * 2 + 1;
  }
  piVar4 = (int *)FUN_00103000();
  iStack_234 = *piVar4;
  iStack_240 = *(int *)(DAT_0046995c + 0x24);
  cStack_24d = '\0';
  iStack_258 = 0;
  iStack_248 = 0;
  if (iStack_240 < 1) {
LAB_000f1b17:
    if (piVar5[0x1f] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = piVar5[0x20] - piVar5[0x1f] >> 2;
    }
    if (iVar3 <= iStack_258) {
      if (*(char *)(DAT_0046995c + 0x2e2c) != '\0') {
        iStack_240 = *(int *)(DAT_0046995c + 0x24);
        iStack_248 = 0;
        if (0 < iStack_240) {
          iStack_24c = 0x28;
          do {
            if (iStack_248 < *(int *)(DAT_0046995c + 0x24)) {
              if ((*(int *)(iStack_24c + DAT_0046995c) == 0) ||
                 (piVar5 = (int *)FUN_002e4a30(s_Parameters_004071bc), piVar5 == (int *)0x0)) {
                iStack_258 = 0;
              }
              else {
                iStack_258 = *piVar5;
              }
            }
            else {
              iStack_258 = 0;
            }
            iVar3 = FUN_001eddf0(iStack_258);
            if ((iVar3 != 0) &&
               (puVar6 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc),
               puVar6 != (undefined4 *)0x0)) {
              puVar7 = auStack_230;
              for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar2 = FUN_000f18f0(iStack_23c);
              if (cVar2 != '\0') {
                FUN_000f17a0(auStack_230);
              }
            }
            iStack_248 = iStack_248 + 1;
            iStack_24c = iStack_24c + 4;
          } while (iStack_248 < iStack_240);
        }
      }
      goto LAB_000f1d79;
    }
  }
  else {
    iStack_24c = 0x28;
    do {
      if (iStack_248 < *(int *)(DAT_0046995c + 0x24)) {
        if ((*(int *)(iStack_24c + DAT_0046995c) == 0) ||
           (piVar5 = (int *)FUN_002e4a30(s_Parameters_004071bc), piVar5 == (int *)0x0)) {
          iStack_244 = 0;
        }
        else {
          iStack_244 = *piVar5;
        }
      }
      else {
        iStack_244 = 0;
      }
      iVar3 = FUN_001eddf0(iStack_244);
      if ((iVar3 != 0) &&
         (puVar6 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc), puVar6 != (undefined4 *)0x0))
      {
        puVar7 = auStack_230;
        for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar2 = FUN_000f18f0(iStack_23c);
        if (cVar2 != '\0') {
          cVar2 = FUN_00103110(&iStack_244);
          if (cVar2 == '\0') {
            cStack_24d = '\x01';
          }
          iStack_258 = iStack_258 + 1;
        }
      }
      iStack_248 = iStack_248 + 1;
      iStack_24c = iStack_24c + 4;
    } while (iStack_248 < iStack_240);
    piVar5 = local_254;
    if (cStack_24d == '\0') goto LAB_000f1b17;
  }
  piVar5 = local_254;
  FUN_00102d50();
  piVar5[0x27] = -1;
  piVar5[0x28] = -1;
  iStack_244 = *(int *)(DAT_0046995c + 0x24);
  iStack_248 = 0;
  if (0 < iStack_244) {
    iStack_24c = 0x28;
    do {
      if (iStack_248 < *(int *)(DAT_0046995c + 0x24)) {
        if ((*(int *)(iStack_24c + DAT_0046995c) == 0) ||
           (piVar5 = (int *)FUN_002e4a30(s_Parameters_004071bc), piVar5 == (int *)0x0)) {
          iStack_258 = 0;
        }
        else {
          iStack_258 = *piVar5;
        }
      }
      else {
        iStack_258 = 0;
      }
      iVar3 = FUN_001eddf0(iStack_258);
      if ((iVar3 != 0) &&
         (puVar6 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc), puVar6 != (undefined4 *)0x0))
      {
        puVar7 = auStack_230;
        for (iVar3 = 0x89; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar2 = FUN_000f18f0(iStack_23c);
        if (cVar2 != '\0') {
          iStack_240 = iStack_258;
          iVar3 = FUN_00102b50(&iStack_240,&iStack_258);
          if (iVar3 != 0) {
            FUN_000f17a0(auStack_230);
          }
        }
      }
      iStack_248 = iStack_248 + 1;
      iStack_24c = iStack_24c + 4;
    } while (iStack_248 < iStack_244);
  }
  for (piVar5 = (int *)local_254[0x1f]; piVar5 != (int *)local_254[0x20]; piVar5 = piVar5 + 1) {
    if (*(int *)(*piVar5 + 0x24) == iStack_234) {
      cVar2 = FUN_00102e60();
      if (cVar2 != '\0') goto LAB_000f1d79;
      break;
    }
  }
  FUN_00102e60();
LAB_000f1d79:
  if (local_254[0x1f] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_254[0x20] - local_254[0x1f] >> 2;
  }
  for (piVar5 = *(int **)(local_238 + 0x74);
      (piVar4 = (int *)0x0, piVar5 != *(int **)(local_238 + 0x78) &&
      (piVar4 = (int *)*piVar5, piVar4[9] != -0x1333a7b8)); piVar5 = piVar5 + 1) {
  }
  if ((piVar4 != (int *)0x0) &&
     (bVar1 = *(byte *)(piVar4 + 10), (iVar3 == 0) != (bool)(bVar1 >> 2 & 1))) {
    *(byte *)(piVar4 + 10) = ((iVar3 == 0) << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*piVar4 + 0x28))();
  }
  if (local_254[0x1f] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_254[0x20] - local_254[0x1f] >> 2;
  }
  for (piVar5 = *(int **)(local_238 + 0x74);
      (piVar4 = (int *)0x0, piVar5 != *(int **)(local_238 + 0x78) &&
      (piVar4 = (int *)*piVar5, piVar4[9] != 0x499ce0b)); piVar5 = piVar5 + 1) {
  }
  if ((piVar4 != (int *)0x0) &&
     (bVar1 = *(byte *)(piVar4 + 10), (iVar3 != 0) != (bool)(bVar1 >> 2 & 1))) {
    *(byte *)(piVar4 + 10) = ((iVar3 != 0) << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*piVar4 + 0x28))();
  }
  return 1;
}
