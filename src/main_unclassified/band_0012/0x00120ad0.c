/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62C4B128E574E37DAB91A50DFB005B3295FF818EA7A8C252A5F0DCCA8A0484E6
 * Entry: 0x00120ad0, Ghidra index: 3646, label: FUN_00120ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00120ad0(void)

{
  undefined4 *unaff_EBX;
  int unaff_EDI;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c [3];
  
  if (((*(int *)(unaff_EDI + 0x640) != 0) && (*(int *)(unaff_EDI + 0x604) != 0)) &&
     (*(int *)(unaff_EDI + 0x604) == 1)) {
    FUN_0015a500(*(undefined4 *)(unaff_EDI + 0x638));
    (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0x88))(*(undefined4 *)(unaff_EDI + 0x638),local_c);
    *unaff_EBX = uStack_14;
    unaff_EBX[1] = uStack_10;
    unaff_EBX[2] = local_c[0];
    return;
  }
  FUN_0015a480(*(undefined4 *)(unaff_EDI + 0x638));
  return;
}
