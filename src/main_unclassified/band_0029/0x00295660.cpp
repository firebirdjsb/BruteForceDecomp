/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47D09DC98F89A5769633C208BFA8B0F3B3565AC73E86D5513C32274575F3A802
 * Entry: 0x00295660, Ghidra index: 9322, label: FUN_00295660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
float10 FUN_00295660(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double local_c;
  
  local_c = 0.0;
  iVar6 = 0;
  while( true ) {
    if (DAT_003b6c30 < 2) {
      uVar3 = (byte)PTR_DAT_003b6c3c[(uint)*in_EAX * 2] & 4;
    }
    else {
      uVar3 = FUN_002eba73(*in_EAX,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
    local_c = local_c * 10.0 + (double)((char)bVar1 + -0x30);
  }
  if (*in_EAX == 0x2e) {
    while( true ) {
      in_EAX = in_EAX + 1;
      if (DAT_003b6c30 < 2) {
        uVar3 = (byte)PTR_DAT_003b6c3c[(uint)*in_EAX * 2] & 4;
      }
      else {
        uVar3 = FUN_002eba73(*in_EAX,4);
      }
      if (uVar3 == 0) break;
      iVar6 = iVar6 + 1;
      local_c = local_c * 10.0 + (double)((char)*in_EAX + -0x30);
    }
  }
  iVar5 = 1;
  iVar4 = FUN_002ebaeb(*in_EAX);
  if (iVar4 == 0x45) {
    iVar4 = 0;
    if (in_EAX[1] == 0x2d) {
      iVar5 = -1;
      pbVar2 = in_EAX + 2;
    }
    else {
      pbVar2 = in_EAX + 1;
      if (in_EAX[1] == 0x2b) {
        pbVar2 = in_EAX + 2;
      }
    }
    in_EAX = pbVar2;
    if (DAT_003b6c30 < 2) {
      uVar3 = (byte)PTR_DAT_003b6c3c[(uint)*in_EAX * 2] & 4;
    }
    else {
      uVar3 = FUN_002eba73(*in_EAX,4);
    }
    if (uVar3 == 0) goto LAB_002957fc;
    do {
      iVar4 = (char)*in_EAX + -0x30 + iVar4 * 10;
      in_EAX = in_EAX + 1;
      if (DAT_003b6c30 < 2) {
        uVar3 = (byte)PTR_DAT_003b6c3c[(uint)*in_EAX * 2] & 4;
      }
      else {
        uVar3 = FUN_002eba73(*in_EAX,4);
      }
    } while (uVar3 != 0);
    iVar6 = iVar6 - iVar5 * iVar4;
  }
  while( true ) {
    if (DAT_003b6c30 < 2) {
      uVar3 = (byte)PTR_DAT_003b6c3c[(uint)*in_EAX * 2] & 8;
    }
    else {
      uVar3 = FUN_002eba73(*in_EAX,8);
    }
    if (uVar3 == 0) break;
    in_EAX = in_EAX + 1;
  }
  if (*in_EAX == 0) {
    if (0 < iVar6) {
      fVar7 = (float10)FUN_00295610();
      return (float10)local_c / fVar7;
    }
    if (-1 < iVar6) {
      return (float10)local_c;
    }
    fVar7 = (float10)FUN_00295610();
    return fVar7 * (float10)local_c;
  }
LAB_002957fc:
  return (float10)-1.0;
}
