/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD452733A94CFEFB5743186D16E95071DF1911E8795FEC28971B0D4218DFACB4
 * Entry: 0x0029c5b0, Ghidra index: 9441, label: FUN_0029c5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_unexpected_end_of_file_in__s_00403e8c[];
uint FUN_0029c5b0(void)

{
  int iVar1;
  uint uVar2;
  int *unaff_ESI;
  uint uVar3;
  
  iVar1 = *unaff_ESI;
  *unaff_ESI = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = (*(code *)unaff_ESI[2])();
  }
  else {
    uVar2 = (uint)*(byte *)unaff_ESI[1];
    unaff_ESI[1] = (int)((byte *)unaff_ESI[1] + 1);
  }
  if (uVar2 == 0xffffffff) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,unaff_ESI[4]);
  }
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
  return uVar2 << 8 | uVar3;
}
