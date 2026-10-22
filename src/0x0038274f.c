/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9B94CA7E46B672B595619CD74705F243C20A01476CDB4FC73033D6A45D2EB21
 * Entry: 0x0038274f, Ghidra index: 13603, label: FUN_0038274f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412724;
extern uint32_t DAT_00412725;
extern uint32_t DAT_00412734;
extern uint32_t *DAT_004127fc;
extern uint32_t _DAT_0041272c;
extern uint32_t _DAT_00412730;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0038274f(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *in_ECX;
  bool bVar6;
  code *local_c;
  
  bVar6 = true;
  DAT_00412723 = 7;
  if (param_1 < 0) {
    bVar6 = param_1 != -0x7ffffc00;
    in_ECX[0x10] = '\0';
    in_ECX[0x11] = '\0';
    in_ECX[0x12] = '\0';
    in_ECX[0x13] = '\0';
  }
  else if ((in_ECX[7] != 0xff) &&
          (iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x14) + (uint)(byte)in_ECX[7] * 4),
          iVar3 != 0)) {
    FUN_0037fc9e(iVar3,*(undefined4 *)(in_ECX + 0x14),1);
  }
  cVar1 = *in_ECX;
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    if (-1 < param_1) {
      FUN_0038244b(0,in_ECX);
      return;
    }
    if (!bVar6) {
      DAT_00412722 = 0;
    }
LAB_00382817:
    FUN_0038267d(0,in_ECX);
  }
  else {
    uVar2 = *(undefined4 *)(in_ECX + 8);
    in_ECX[8] = '\0';
    in_ECX[9] = '\0';
    in_ECX[10] = '\0';
    in_ECX[0xb] = '\0';
    local_c = FUN_0038244b;
    if (cVar1 == '\x05') {
      iVar3 = FUN_00380f9a();
      pcVar4 = (char *)FUN_00380f6c();
      if (DAT_00412721 == '\0') {
        if (*(int *)(in_ECX + 0x10) == 0) {
          FUN_003812a8(in_ECX);
          FUN_00382100(in_ECX);
          iVar5 = FUN_00380f83();
          if (iVar5 == 0) {
            DAT_00412722 = 0;
            in_ECX = pcVar4;
            goto LAB_00382817;
          }
        }
        if (iVar3 != 0) {
          do {
            DAT_004127fc = DAT_004127fc + *DAT_004127fc;
          } while (DAT_004127fc[1] != 4);
          *(byte *)(iVar3 + 2) = DAT_004127fc[2];
          param_1 = CONCAT31(*(undefined3 *)(DAT_004127fc + 5),0x82);
          FUN_003828dc(param_1);
          return;
        }
      }
    }
    else {
      pcVar4 = in_ECX;
      if (param_1 < 0) {
        if (!bVar6) {
          DAT_00412722 = 0;
        }
        local_c = FUN_0038267d;
      }
    }
    _DAT_0041272c = local_c;
    DAT_00412724 = 0x1c;
    DAT_00412725 = 0x43;
    _DAT_00412730 = pcVar4;
    DAT_00412734 = uVar2;
    FUN_00383a75(*(int *)(pcVar4 + 0xc) + 0x18,&DAT_00412724);
  }
  return;
}
