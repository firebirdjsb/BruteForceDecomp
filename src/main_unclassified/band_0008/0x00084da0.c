/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2064015E6961BBFECA8AAEFBE2EBDBB2681F02AB670E4E7A5F22AF8FB0872237
 * Entry: 0x00084da0, Ghidra index: 1546, label: FUN_00084da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469b58;
void FUN_00084da0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  /* XBE body SHA-256 verified: 0x00084E22 and 0x00084E43 both LEA
   * the same [ESP+0x14] guest stack address, despite distinct Ghidra
   * stack labels. 0x00084E26..0x00084E32 clear the following four
   * DWORDs. First byte has a preceding read/modify/write from the
   * original guest stack (0x00084E14..0x00084E1E); its initial value
   * and the indirect call ABIs remain UNVERIFIED. */
  undefined4 guest_local_words[5];
  
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  piVar1 = *(int **)(DAT_00469b58 + 8);
  (**(code **)(*DAT_00469940 + 0x6c))(1);
  (**(code **)(*DAT_00469940 + 8))();
  (**(code **)(*piVar4 + 0x1c))();
  cVar3 = (**(code **)(*piVar1 + 0x4c))();
  if (cVar3 != '\0') {
    iVar2 = *piVar1;
    uVar5 = (**(code **)(iVar2 + 0x68))(0);
    (**(code **)(iVar2 + 0x5c))(uVar5);
  }
  uVar5 = (**(code **)(*piVar1 + 0x6c))();
  (**(code **)(*piVar1 + 0x5c))(uVar5,0);
  (**(code **)(*piVar1 + 0x200))(1);
  guest_local_words[1] = 0;
  guest_local_words[2] = 0;
  guest_local_words[3] = 0;
  guest_local_words[4] = 0;
  (**(code **)(*piVar1 + 0x1fc))(guest_local_words);
  (**(code **)(*piVar1 + 0x30))(guest_local_words);
  FUN_00069780(0x3f800000);
  return;
}
