/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F54A3A8C6DBA33E01893A732D5FD1C1E7122D04B5C0F2744ABC84D237258075
 * Entry: 0x001781c0, Ghidra index: 4962, label: FUN_001781c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
/* The guest 0x00178406 caller pushes three DWORDs; 0x00178358 and
 * 0x00178374 use RET 0x0C. The second incoming DWORD is a separate
 * stack output at original entry ESP+8, NOT the third arg pointer.
 * Guest pointer values, implicit registers and native ABI remain TODO. */
int FUN_001781c0(undefined4 param_1, undefined4 guest_second_word,
                 undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_ESI;
  int *piVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [6];
  byte bStack_8;
  /* XBE 0x001782D5..0x00178334 uses the same address at guest
   * entry ESP-0x38 for four calls. DWORD #1 is carried forward
   * from call 1 to 2 and from call 3 to 4. Host stack ABI is NOT
   * implied by placing these words in a C11 array. */
  uint32_t guest_transfer_words[2];
  _Static_assert(sizeof(guest_transfer_words) == 8, "paired guest words");

  uVar1 = param_1;
  if ((char)unaff_ESI[0xb] != '\0') {
    local_20[1] = 0;
    piVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    local_30 = 0;
    local_2c = 1;
    local_28 = 2;
    local_24 = FUN_00178090();
    FUN_00357290(4,&local_30);
    iVar2 = FUN_003574b0(uVar1,0x4000);
    local_20[0] = iVar2;
    if (iVar2 != 0) {
      local_20[1] = FUN_002383b0();
      (**(code **)(*unaff_ESI + 0x14))(unaff_ESI[10]);
      bStack_8 = bStack_8 | 2;
      local_20[1] = param_1;
      if (param_2 == (undefined4 *)0x0) {
        /* XBE 0x0017828C/0x00178290 zeroes both incoming guest
         * output slots before the virtual +0x1C call. On return,
         * 0x0017829A..0x001782AE forwards them in entry-stack order. */
        param_1 = 0;
        guest_second_word = 0;
        (**(code **)(*DAT_00469b54 + 0x1c))(&guest_second_word,&param_1);
        local_20[2] = 0;
        local_20[3] = 0;
        local_20[4] = param_1;
        local_20[5] = guest_second_word;
      }
      else {
        local_20[2] = *param_2;
        local_20[3] = param_2[1];
        local_20[4] = param_2[2];
        local_20[5] = param_2[3];
      }
      bStack_8 = bStack_8 & 0xfe;
      if (((char)unaff_ESI[0xb] != '\0') && (3 < *(int *)(iVar2 + 0xf0))) {
        guest_transfer_words[0] = 0;
        guest_transfer_words[1] = 1;
        FUN_003590f0(iVar2,0,guest_transfer_words,2);
        guest_transfer_words[0] = 3;
        FUN_003590f0(iVar2,1,guest_transfer_words,1);
        guest_transfer_words[0] = 4;
        guest_transfer_words[1] = 5;
        FUN_003590f0(iVar2,2,guest_transfer_words,2);
        guest_transfer_words[0] = 2;
        FUN_003590f0(iVar2,local_24,guest_transfer_words,1);
      }
      iVar2 = unaff_ESI[1];
      unaff_ESI[1] = iVar2 + 1;
      unaff_ESI[10] = iVar2 + 1;
      FUN_00178380();
      return unaff_ESI[10];
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x26c))();
  }
  return 0;
}