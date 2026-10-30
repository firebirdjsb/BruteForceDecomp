/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B31FDDA250767E70EC4E8F4626F0C50CE936E1EBA04B003E218CD38DD1BF935
 * Entry: 0x0031c00a, Ghidra index: 12317, label: FUN_0031c00a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031c00a(void)

{
  int iVar1;
  
  FUN_0031bf8d();
  iVar1 = FUN_0031bd11();
  if (-1 < iVar1) {
    FUN_0031bc46();
    FUN_0031b494();
    iVar1 = FUN_0031b811();
    if (-1 < iVar1) {
      FUN_0031bb62();
      FUN_0031b993(1);
      FUN_0031c417(0xffffffff);
      FUN_0031c417(0xffffffff);
    }
  }
  return iVar1;
}
