/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F2CAA5377CD85AC83EE217FC57C703000BDD5FD5C4D85EFE644F38F1F834D2E
 * Entry: 0x001eddf0, Ghidra index: 6949, label: FUN_001eddf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
undefined4 FUN_001eddf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_EBX + 0x24)) {
    piVar4 = (int *)(unaff_EBX + 0x28);
    do {
      if (*piVar4 == 0) {
LAB_001ede1b:
        iVar2 = 0;
      }
      else {
        piVar1 = (int *)FUN_002e4a30(s_Parameters_004071bc);
        if (piVar1 == (int *)0x0) goto LAB_001ede1b;
        iVar2 = *piVar1;
      }
      if (iVar2 == param_1) {
        return *(undefined4 *)(unaff_EBX + 0x28 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(unaff_EBX + 0x24));
  }
  return 0;
}
