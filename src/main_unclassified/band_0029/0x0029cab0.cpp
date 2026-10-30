/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01D766FD0B357C57BACAF0A61B1D54A98B8EA6CBDCC18CDB23B6F6426E636BFC
 * Entry: 0x0029cab0, Ghidra index: 9449, label: FUN_0029cab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00403e4c;
extern char s_bad_signature_in__s_00403e38[];
extern char s_unexpected_end_of_file_in__s_00403e8c[];
void FUN_0029cab0(void)

{
  char *pcVar1;
  char *pcVar2;
  int *unaff_ESI;
  uint uVar3;
  
  pcVar2 = &DAT_00403e4c;
  if (DAT_00403e4c != '\0') {
    while( true ) {
      *unaff_ESI = *unaff_ESI + -1;
      if (*unaff_ESI < 0) {
        uVar3 = (*(code *)unaff_ESI[2])();
      }
      else {
        uVar3 = (uint)*(byte *)unaff_ESI[1];
        unaff_ESI[1] = (int)((byte *)unaff_ESI[1] + 1);
      }
      if (uVar3 == 0xffffffff) {
        FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,unaff_ESI[4]);
      }
      if (uVar3 != (int)*pcVar2) break;
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      if (*pcVar1 == '\0') {
        return;
      }
    }
    if (*pcVar2 != '\0') {
      FUN_00295370(s_bad_signature_in__s_00403e38,unaff_ESI[4]);
    }
  }
  return;
}
