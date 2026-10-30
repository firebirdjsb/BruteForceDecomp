/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D905E8F5E60CA9E0D39A3CF417012F66E64DF0C6BA93D6801C40BB3CE88DCE6
 * Entry: 0x00183710, Ghidra index: 5201, label: FUN_00183710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00183710(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  iVar2 = DSOUND__XFileCreateMediaObjectAsync
                    (*(undefined4 *)(unaff_ESI + 0x6c),2,(undefined4 *)(unaff_ESI + 0x70));
  if (-1 < iVar2) {
    piVar1 = *(int **)(unaff_ESI + 0x70);
    *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(unaff_EBX + 0x1c + param_1 * 4);
    *(undefined4 *)(unaff_ESI + 0x98) = *(undefined4 *)(unaff_EBX + 0x30 + param_1 * 4);
    (**(code **)(*piVar1 + 0x1c))(piVar1,*(undefined4 *)(unaff_ESI + 0x94),0,0);
    return 1;
  }
  return 0;
}
