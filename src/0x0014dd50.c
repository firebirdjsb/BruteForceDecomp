/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5E3243D0007D765708102066DF4124DD99743B8DE364B15FBB4FB062A343153
 * Entry: 0x0014dd50, Ghidra index: 4379, label: FUN_0014dd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0014dd50(void)

{
  int iVar1;
  int *unaff_EBX;
  int iVar2;
  int unaff_EDI;
  
  FUN_0014df80();
  if (*(int *)(unaff_EDI + 0x1b4) != 0) {
    FUN_0014bc50();
  }
  if (*unaff_EBX != DAT_0046d064) {
    FUN_0014ce40(unaff_EDI,unaff_EBX[1]);
  }
  if ((unaff_EDI != -0x44) && (unaff_EBX[2] != DAT_0046d064)) {
    FUN_0014ce40(unaff_EDI,unaff_EBX[3]);
  }
  if ((*(int *)(unaff_EDI + 0x1b4) != 0) && (iVar2 = unaff_EBX[5], iVar2 != unaff_EBX[6])) {
    do {
      iVar1 = FUN_00160da0(0xffffffff,1);
      if (iVar1 != 0) {
        FUN_0014ce90(unaff_EDI,*(undefined4 *)(iVar2 + 4),0);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != unaff_EBX[6]);
  }
  *(undefined4 *)(unaff_EDI + 0x1cc) = 0;
  *(undefined4 *)(unaff_EDI + 0x1d0) = 0;
  return;
}
