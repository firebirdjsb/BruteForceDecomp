/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83F311BF69BCF298955A98F4EBA114F7EA123F31157863BB032BC513519D1EFD
 * Entry: 0x00297c60, Ghidra index: 9357, label: FUN_00297c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004043b4;
extern uint32_t *DAT_00469888;
extern uint32_t DAT_004a5b2c;
extern char s_API_error___wrong_number_of_argu_00404bf8[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00297c60(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *local_28;
  undefined4 local_18 [2];
  double local_10;
  
  if (((int)DAT_00469888[5] < 1) || (DAT_00469888[4] == 0xffffffff)) {
    FUN_00295240();
  }
  if ((((int)DAT_00469888[5] < 2) || (DAT_00469888[4] + 2 == 0)) ||
     (*(int *)((DAT_00469888[1] - 0x10) + (DAT_00469888[4] + 2) * 0x10) != -3)) {
    FUN_00295240();
  }
  if (((int)DAT_00469888[5] < 3) || (DAT_00469888[4] == 0xfffffffd)) {
    local_28 = &DAT_004a5b2c;
  }
  else {
    iVar8 = FUN_00289e20();
    if ((iVar8 != -2) && (iVar8 != -1)) {
      FUN_00295240();
    }
    local_28 = (undefined1 *)FUN_00289a40();
  }
  if ((int)DAT_00469888[5] < 4) {
    iVar8 = 0;
  }
  else {
    iVar8 = DAT_00469888[4] + 4;
  }
  FUN_00296d20();
  iVar3 = FUN_002ebf10();
  iVar4 = 0;
  if (iVar8 != 0) {
    FUN_00289d80();
    FUN_00289520(1);
    iVar4 = FUN_002897b0();
    FUN_00289860();
  }
  FUN_0028a460();
  iVar8 = 0;
  if (0 < iVar3) {
    local_18[0] = 0xffffffff;
    do {
      iVar8 = iVar8 + 1;
      local_10 = (double)iVar8;
      iVar5 = FUN_00293c90(local_18);
      puVar7 = DAT_00469888;
      puVar1 = (undefined4 *)*DAT_00469888;
      *puVar1 = *(undefined4 *)(iVar5 + 0x10);
      puVar1[1] = *(undefined4 *)(iVar5 + 0x14);
      puVar1[2] = *(undefined4 *)(iVar5 + 0x18);
      puVar1[3] = *(undefined4 *)(iVar5 + 0x1c);
      *puVar7 = *puVar7 + 0x10;
    } while (iVar8 < iVar3);
  }
  iVar8 = FUN_00289680();
  if (iVar4 != 0) {
    FUN_00289d80();
    if ((int)(*DAT_00469888 - DAT_00469888[1]) >> 4 < (int)(DAT_00469888[3] + 1)) {
      FUN_0028aa90(s_API_error___wrong_number_of_argu_00404bf8);
      if ((__jmp_buf_tag *)DAT_00469888[6] == (__jmp_buf_tag *)0x0) goto LAB_00297efa;
      _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
    }
    FUN_0028a460();
    pcVar2 = (char *)&DAT_004043b4;
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = pcVar6 + -0x4043b4;
    if (pcVar6 == (char *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)((uint)DAT_004043b4 * (int)pcVar6) % 0x1f;
    }
    FUN_00294640(&DAT_004043b4,pcVar6,DAT_00469888[0x18] + iVar4 * 0xc);
    FUN_00292ba0();
    FUN_00289600();
    FUN_00289860();
  }
  if (iVar8 == 0) {
    iVar8 = FUN_002eb0b0(local_28,0x70);
    if (iVar8 == 0) {
      DAT_00469888[3] = DAT_00469888[4];
      return;
    }
    FUN_00293000();
    puVar7 = DAT_00469888;
  }
  else {
    iVar8 = FUN_002eb0b0(local_28,0x78);
    puVar7 = DAT_00469888;
    if (iVar8 == 0) {
      if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
        _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
      }
LAB_00297efa:
      FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
      FUN_002eba1d(1);
    }
    *(undefined4 *)*DAT_00469888 = 0xfffffffa;
  }
  if (puVar7[2] <= *puVar7) {
    FUN_0028a460();
    puVar7 = DAT_00469888;
  }
  *puVar7 = *puVar7 + 0x10;
  return;
}
