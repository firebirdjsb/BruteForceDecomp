/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CADEEED7471500D730B9F3391180556E089EB6B623DF0D6600EEC83B51527F7
 * Entry: 0x00068780, Ghidra index: 1150, label: FUN_00068780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00069b50(uint param_1);
extern void FUN_00069aa0(uint param_1,uint param_2);

void FUN_00068780(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    FUN_00069b50(*(undefined4 *)(unaff_ESI + 0x18),unaff_ESI + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00069aa0(*(int *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
