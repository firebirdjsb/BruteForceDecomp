/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDC21F721AF6652D4AD9AEF20495369B6BBA8FA8DA10A8A6E78BC9161C20DFFB
 * Entry: 0x00051630, Ghidra index: 742, label: FUN_00051630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000518b0(int param_1);
extern void FUN_00051760(void);
extern void FUN_00051710(int param_1);
extern void FUN_000516c0(int param_1);

void FUN_00051630(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 100) != 0) {
    FUN_000518b0(*(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x60);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 100));
  }
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  FUN_00051760();
  FUN_00051710(unaff_ESI + 0x4c);
  FUN_000516c0(unaff_ESI + 0x3c);
  if (*(int *)(unaff_ESI + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x30));
  }
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x20)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0xf;
  *(undefined1 *)(unaff_ESI + 0xc) = 0;
  return;
}
