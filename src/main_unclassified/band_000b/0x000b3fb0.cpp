/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2E189E42DD1B46DD6CDFA8088F06332D6F08A5933C84CBAEF024D769FB2C2C6
 * Entry: 0x000b3fb0, Ghidra index: 2172, label: FUN_000b3fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b3fb0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x180);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x180) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x17c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x17c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x178);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x178) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x174);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x174) = 0;
  }
  return;
}
