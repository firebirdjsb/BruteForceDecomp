/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F990B7F5D372AEEEDE81ED1E32C3914C4E151D5FEC6765513CACC5ABEB100856
 * Entry: 0x000d3dc0, Ghidra index: 2633, label: FUN_000d3dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d4000(undefined4 *param_1);

void FUN_000d3dc0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_EDI;
  
  if ((unaff_EDI != param_1) && (piVar5 = unaff_EDI + 1, piVar5 != param_1)) {
    piVar4 = unaff_EDI + 2;
    do {
      uVar1 = *(uint *)(*(int *)(*piVar5 + 0xc) + 4);
      piVar3 = unaff_EDI;
      if (uVar1 < *(uint *)(*(int *)(*unaff_EDI + 0xc) + 4)) {
joined_r0x000d3e16:
        if ((piVar3 != piVar5) && (piVar5 != piVar4)) {
          FUN_000d4000();
        }
      }
      else {
        piVar2 = piVar4 + -2;
        if (uVar1 < *(uint *)(*(int *)(piVar4[-2] + 0xc) + 4)) {
          do {
            piVar3 = piVar2;
            piVar2 = piVar3 + -1;
          } while (uVar1 < *(uint *)(*(int *)(piVar3[-1] + 0xc) + 4));
          goto joined_r0x000d3e16;
        }
      }
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (piVar5 != param_1);
  }
  return;
}
