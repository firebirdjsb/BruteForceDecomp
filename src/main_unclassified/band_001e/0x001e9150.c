/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9CB191C8189AA902B44424618DA04CEB28BE5FCC06841163D107709211B0E57
 * Entry: 0x001e9150, Ghidra index: 6854, label: FUN_001e9150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004003e4;
extern uint32_t DAT_004072a8;
extern uint32_t DAT_0041f7d4;
extern uint32_t *DAT_00469908;
extern char s_post_st_load_00407298[];
extern char s_pre_st_load_004072b8[];
void FUN_001e9150(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  int *piVar5;
  int *unaff_EDI;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_34;
  uint uStack_30;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  local_20 = 0xf;
  local_24 = 0;
  local_34 = (undefined4 ***)((uint)local_34 & 0xffffff00);
  FUN_00237a30(s_pre_st_load_004072b8);
  DAT_0041f7d4 = FUN_002ea01d(0x10);
  if (DAT_0041f7d4 == 0) {
    DAT_0041f7d4 = 0;
  }
  else {
    *(undefined4 *)(DAT_0041f7d4 + 4) = 0;
    *(undefined4 *)(DAT_0041f7d4 + 8) = 0;
    *(undefined4 *)(DAT_0041f7d4 + 0xc) = 0;
  }
  local_4 = 0xf;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  pcVar1 = &DAT_004072a8;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_004072a8,pcVar2 + -0x4072a8);
  FUN_0001f4f0(&DAT_004003e4,0,0xffffffff);
  FUN_001e8a20();
  FUN_000784c0(0);
  FUN_000784c0(0);
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  FUN_001eb0e0(local_1c,UINT32_C(0x001eb090));
  FUN_0001f4f0(local_1c,0,0xffffffff);
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  local_40 = 0;
  local_3c = 0;
  ppppuVar4 = (undefined4 ****)local_34;
  if (local_20 < 0x10) {
    ppppuVar4 = &local_34;
  }
  iVar3 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,ppppuVar4,0x80000000,&local_40);
  piVar5 = (int *)0x0;
  if ((-1 < iVar3) && (/* XBE 0x001E9294: LEA EAX,[ESP+0x14] after SUB ESP,0x40 and
        * four saved registers aliases existing DWORD local_3c. */
       iVar3 = FUN_001a2fe0(&local_3c), piVar5 = unaff_ESI, -1 < iVar3)) {
    FUN_001b1400();
    iVar3 = FUN_0023a790(0xfcf6f7f4,1);
    if (iVar3 != 0) {
      FUN_001e98c0(*(undefined4 *)(DAT_0041f7d4 + 4),*(undefined4 *)(DAT_0041f7d4 + 8),unaff_ESI);
    }
  }
  FUN_00237a30(s_post_st_load_00407298);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  if (uStack_30 < 0x10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX);
}
