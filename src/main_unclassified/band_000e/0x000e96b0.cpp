/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46DB39ECE72956B401B09C371D0C016E67D04162D4F7D24AC68C698A7FA42D11
 * Entry: 0x000e96b0, Ghidra index: 2886, label: FUN_000e96b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_000e96b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x60) == -1) {
    *(undefined4 *)(unaff_EDI + 0x60) = 0;
    piVar1 = *(int **)(param_1 + 0x22c);
    if ((piVar1 != (int *)0x0) && (piVar3 = (int *)*piVar1, piVar3 != piVar1)) {
      while ((iVar2 = piVar3[2], (*(byte *)(iVar2 + 0x94) & 4) == 0 ||
             (((*(byte *)(*(int *)(iVar2 + 0xc) + 0x50) & 0x10) == 0 ||
              (*(int *)(*(int *)(iVar2 + 0xc) + 0x70) == DAT_0046d064))))) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar1) {
          return *(undefined4 *)(unaff_EDI + 0x60);
        }
      }
      *(int *)(unaff_EDI + 0x60) = iVar2;
    }
  }
  return *(undefined4 *)(unaff_EDI + 0x60);
}
