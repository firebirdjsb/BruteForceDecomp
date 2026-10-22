/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B233CB3D211B24E8D508E39E4E6EC576962473AC9C3D77BE604E60899221340B
 * Entry: 0x000e12a0, Ghidra index: 2767, label: FUN_000e12a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e12a0(void)

{
  undefined4 in_ECX;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x124) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x124));
  }
  *(undefined4 *)(unaff_ESI + 0x124) = 0;
  *(undefined4 *)(unaff_ESI + 0x128) = 0;
  *(undefined4 *)(unaff_ESI + 300) = 0;
  FUN_000e13c0();
  if (*(int *)(unaff_ESI + 0xac) != 0) {
    FUN_000e2e60(*(undefined4 *)(unaff_ESI + 0xb0),unaff_ESI + 0xa8,in_ECX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0xac));
  }
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  *(undefined4 *)(unaff_ESI + 0xb0) = 0;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0;
  FUN_000e1ec0();
  if (*(int *)(unaff_ESI + 0x74) != 0) {
    FUN_000e2df0(*(undefined4 *)(unaff_ESI + 0x78),unaff_ESI + 0x70,in_ECX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x74));
  }
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  FUN_000d6970();
  return;
}
