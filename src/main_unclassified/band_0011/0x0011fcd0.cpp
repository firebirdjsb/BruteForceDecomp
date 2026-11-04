/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4774576579D7D758816ABB8FF1C533076BA05D2E5D067179AB54A4F37F7AB54
 * Entry: 0x0011fcd0, Ghidra index: 3637, label: FUN_0011fcd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_002668e0(void);
void FUN_0011fcd0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x268 + unaff_EBX * 4);
  if (piVar1 != (int *)0xffffffff) {
    piVar2 = *(int **)(*(int *)(unaff_ESI + 500) + 0xc);
    piVar3 = *(int **)(*(int *)(unaff_ESI + 500) + 8);
    if (piVar3 != piVar2) {
      do {
        if ((int *)*piVar3 == piVar1) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar2);
      if ((piVar3 != piVar2) && (*piVar1 == 1)) {
        FUN_002668e0();
      }
    }
    *(undefined4 *)(unaff_ESI + 0x268 + unaff_EBX * 4) = 0xffffffff;
  }
  return;
}
