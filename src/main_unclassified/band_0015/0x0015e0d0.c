/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7DE72E8E50253D2760C98BE81DDD713A3621936966E8057F6577F05ED0A8F88
 * Entry: 0x0015e0d0, Ghidra index: 4540, label: FUN_0015e0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015e0d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 8));
}
