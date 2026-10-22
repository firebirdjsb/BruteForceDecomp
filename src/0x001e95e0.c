/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCCB56F102E3AB5A2E444D0B048D3AB127180E1CACFA2F3D81E87A7BA10CD53B
 * Entry: 0x001e95e0, Ghidra index: 6857, label: FUN_001e95e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004003e8;
extern uint32_t DAT_004003fc;
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t *DAT_004432f8;
extern uint32_t *DAT_00469908;
extern char s__s__sstring_table_en_s_00407244[];
/* WARNING: Removing unreachable block (ram,0x001e977e) */
/* WARNING: Removing unreachable block (ram,0x001e978d) */

void FUN_001e95e0(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  undefined4 ***pppuStack_140;
  undefined1 local_13c [4];
  undefined4 ***local_138 [3];
  uint uStack_12c;
  uint local_124;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  char local_104 [260];
  
  puVar6 = DAT_00400538;
  if (DAT_0040054c < 0x10) {
    puVar6 = &DAT_00400538;
  }
  puVar2 = DAT_004003e8;
  if (DAT_004003fc < 0x10) {
    puVar2 = &DAT_004003e8;
  }
  FUN_002eaa19(local_104,0x104,s__s__sstring_table_en_s_00407244,param_1,puVar2,puVar6);
  pcVar3 = local_104;
  local_108 = 0xf;
  local_10c = 0;
  local_11c = local_11c & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(local_104,(int)pcVar3 - (int)(local_104 + 1));
  FUN_001eb0e0(local_13c,&LAB_001eb090);
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_11c);
  }
  if (local_124 < 0x10) {
    local_138[0] = local_138;
  }
  cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,local_138[0]);
  if (cVar1 != '\0') {
    ppppuVar7 = (undefined4 ****)pppuStack_140;
    if (uStack_12c < 0x10) {
      ppppuVar7 = &pppuStack_140;
    }
    iVar4 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,ppppuVar7,0x80000000,&stack0xfffffeb8);
    if ((-1 < iVar4) && (iVar4 = FUN_001a2fe0(&stack0xfffffeb4), -1 < iVar4)) {
      iVar4 = FUN_002ea01d(0x10);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      iVar5 = FUN_0023a790(0xfcf6f7f4,1);
      if (iVar5 != 0) {
        FUN_001e98c0(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),iVar4);
        FUN_0010af20();
      }
    }
  }
  if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(pppuStack_140);
  }
  return;
}
