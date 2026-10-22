/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 953C0B705FF9230B667A407CED287EFBA5975D3751EF761F148F96B9774952A2
 * Entry: 0x001e9350, Ghidra index: 6855, label: FUN_001e9350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000a0;
extern uint32_t DAT_004000b4;
extern uint32_t DAT_00400110;
extern uint32_t DAT_00400124;
extern uint32_t DAT_004003e8;
extern uint32_t DAT_004003fc;
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t *DAT_004432f8;
extern uint32_t *DAT_00469908;
extern uint32_t DAT_00469970;
extern char s__s_s__sstring_table_en_s_0040726c[];
extern char s_post_lst_load_0040725c[];
extern char s_pre_lst_load_00407288[];
/* WARNING: Removing unreachable block (ram,0x001e950e) */
/* WARNING: Removing unreachable block (ram,0x001e951c) */

void FUN_001e9350(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 ***pppuStack_140;
  undefined1 local_13c [4];
  undefined4 ***local_138 [3];
  uint uStack_12c;
  uint local_124;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  char local_104 [260];
  
  FUN_00237a30(s_pre_lst_load_00407288);
  DAT_00469970 = FUN_002ea01d(0x10);
  if (DAT_00469970 == 0) {
    DAT_00469970 = 0;
  }
  else {
    *(undefined4 *)(DAT_00469970 + 4) = 0;
    *(undefined4 *)(DAT_00469970 + 8) = 0;
    *(undefined4 *)(DAT_00469970 + 0xc) = 0;
  }
  puVar8 = DAT_00400538;
  if (DAT_0040054c < 0x10) {
    puVar8 = &DAT_00400538;
  }
  puVar7 = DAT_004003e8;
  if (DAT_004003fc < 0x10) {
    puVar7 = &DAT_004003e8;
  }
  puVar5 = DAT_00400110;
  if (DAT_00400124 < 0x10) {
    puVar5 = &DAT_00400110;
  }
  puVar2 = DAT_004000a0;
  if (DAT_004000b4 < 0x10) {
    puVar2 = &DAT_004000a0;
  }
  FUN_002eaa19(local_104,0x104,s__s_s__sstring_table_en_s_0040726c,puVar2,puVar5,puVar7,puVar8);
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
    ppppuVar6 = (undefined4 ****)pppuStack_140;
    if (uStack_12c < 0x10) {
      ppppuVar6 = &pppuStack_140;
    }
    iVar4 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,ppppuVar6,0x80000000,&stack0xfffffeb4);
    if (((-1 < iVar4) && (iVar4 = FUN_001a2fe0(&stack0xfffffeb8), -1 < iVar4)) &&
       (iVar4 = FUN_0023a790(0xfcf6f7f4,1), iVar4 != 0)) {
      FUN_001e98c0(*(undefined4 *)(DAT_00469970 + 4),*(undefined4 *)(DAT_00469970 + 8),0);
    }
  }
  FUN_00237a30(s_post_lst_load_0040725c);
  if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(pppuStack_140);
  }
  return;
}
