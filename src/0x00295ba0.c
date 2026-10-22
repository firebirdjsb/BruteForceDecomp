/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28387CC3462BF05B2C6BD87F49ECE61C5A73ED096D5F25D3B7C471351F00931B
 * Entry: 0x00295ba0, Ghidra index: 9331, label: FUN_00295ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_input_ends_inside_a__if_004044fc[];
void FUN_00295ba0(void)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  uint *unaff_EDI;
  undefined1 local_54 [84];
  
  uVar2 = unaff_EDI[unaff_EDI[8] * 3 + 0xb];
  while (uVar2 != 0) {
    if (*unaff_EDI == 10) {
      FUN_00295c60();
    }
    else if (*unaff_EDI == 0xffffffff) {
      FUN_0029d580(0);
      pcVar3 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
      FUN_002953d0();
      if (*pcVar3 == '\0') {
        pcVar3 = s_<eof>_00404598;
      }
      FUN_00295370(s___100s__last_token_read_____50s__00404560,s_input_ends_inside_a__if_004044fc,
                   pcVar3,unaff_EDI[7],local_54);
    }
    else {
      *(int *)unaff_EDI[6] = *(int *)unaff_EDI[6] + -1;
      piVar1 = (int *)unaff_EDI[6];
      if (*piVar1 < 0) {
        uVar2 = (*(code *)piVar1[2])(piVar1);
      }
      else {
        uVar2 = (uint)*(byte *)piVar1[1];
        piVar1[1] = (int)((byte *)piVar1[1] + 1);
      }
      *unaff_EDI = uVar2;
    }
    uVar2 = unaff_EDI[unaff_EDI[8] * 3 + 0xb];
  }
  return;
}
