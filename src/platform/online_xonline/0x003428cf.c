/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75000006E229D98C19569A3E02B2D25240BC8A994F823CF6EFC90ED0B6F7562D
 * Entry: 0x003428cf, Ghidra index: 12693, label: FUN_003428cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003b7678;
/* WARNING: Type propagation algorithm not settling */

int FUN_003428cf(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined ***pppuVar7;
  undefined4 local_430 [130];
  undefined4 local_228 [2];
  char local_220 [512];
  int local_20;
  undefined **local_1c [2];
  undefined4 *local_14;
  undefined2 uStack_12;
  int local_10;
  
  pcVar2 = param_1;
  puVar6 = local_228;
  for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_430;
  for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pppuVar7 = local_1c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pppuVar7 = (undefined **)0x0;
    pppuVar7 = pppuVar7 + 1;
  }
  local_14 = local_430;
  local_228[1] = 1;
  local_1c[0] = &PTR_DAT_003b7678;
  local_1c[1] = (undefined **)0x8;
  local_10 = 10;
  FUN_00342562(param_1 + 0x8dc,local_1c,local_228);
  if (local_20 != 0) {
    return local_20;
  }
  iVar4 = FUN_0034204d(local_220,&stack0xffffffec,&param_1);
  if (iVar4 == 0) {
    if (uStack_12 == 0) {
      return -0x7feae6e8;
    }
    *(ushort *)(pcVar2 + 0x42) = CONCAT11((undefined1)uStack_12,uStack_12._1_1_);
    if (local_20 != 0) {
      return local_20;
    }
    pcVar5 = param_1;
    if (local_10 != *(int *)(pcVar2 + 0x38)) {
      return -0x7feae6e8;
    }
  }
  else {
    *(undefined2 *)(pcVar2 + 0x42) = *(undefined2 *)(pcVar2 + 0x40);
    pcVar5 = local_220;
    if (local_20 != 0) {
      return local_20;
    }
  }
  if (*pcVar5 != '\0') {
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(pcVar5 + 1)) < 0x80) {
      XAPILIB__lstrcpynA(pcVar2 + 0x254,pcVar5,0x80);
      return 0;
    }
  }
  return -0x7feae6e8;
}
