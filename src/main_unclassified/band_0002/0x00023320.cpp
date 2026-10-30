/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 834B9383E6EBD25D746ABA0175A577C7EDBEB87D64298B7905A977EBEAA87D74
 * Entry: 0x00023320, Ghidra index: 221, label: FUN_00023320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00038d30(undefined ***param_1,undefined ***param_2);

void FUN_00023320(void)

{
  int unaff_ESI;
  
  FUN_00038d30(*(undefined4 *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
  if ((*(int *)(unaff_ESI + 4) != 0) &&
     ((*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x18 != 0)) {
    if (*(int *)(unaff_ESI + 0x10) == 0) {
      return;
    }
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *(undefined4 *)(unaff_ESI + 0x18) = 0x7f7fffff;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    return;
  }
  if (*(int *)(unaff_ESI + 0x10) != -1) {
    *(undefined4 *)(unaff_ESI + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0x18) = 0x7f7fffff;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
  }
  return;
}
