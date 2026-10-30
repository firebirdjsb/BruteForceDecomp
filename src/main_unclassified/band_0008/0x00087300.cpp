/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C16C1AF6F0F8D8B9740DC27159AC31B6CF807BF70F30E6E1048FCC9AE8F2FD3
 * Entry: 0x00087300, Ghidra index: 1611, label: FUN_00087300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000874a0(int param_1);

void FUN_00087300(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x40));
  }
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  if (*(int *)(unaff_ESI + 0x30) != 0) {
    FUN_000874a0(*(undefined4 *)(unaff_ESI + 0x34),unaff_ESI + 0x2c);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x30));
  }
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  if (*(int *)(unaff_ESI + 0x20) != 0) {
    FUN_000874a0(*(undefined4 *)(unaff_ESI + 0x24),unaff_ESI + 0x1c);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}
