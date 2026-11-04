/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30ECAF04CB88A209B7E1959D7505E521295B589F4C64445693E1EBC9ECA61B45
 * Entry: 0x00335cbd, Ghidra index: 12447, label: FUN_00335cbd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern int FUN_003355e1(int param_1);
int FUN_00335cbd(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_003355e1(param_1);
  if (-1 < iVar1) {
    iVar1 = (-(uint)(*(int *)(param_1 + 0x18) != 0) & 0xffeaff0e) + 0x1500f2;
  }
  return iVar1;
}
