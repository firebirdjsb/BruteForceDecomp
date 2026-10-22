/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84D52C64FD69BBCF92E57E2DF2DF567CAF09BBD7BA4267C5CE8E753C33DD2722
 * Entry: 0x000f9290, Ghidra index: 3122, label: FUN_000f9290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000f9290(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = 0;
  if (iVar1 == -0x8ba06b6) {
    FUN_000f7610();
    return 1;
  }
  if (iVar1 == -0xdd7fbd1) {
    FUN_000f7670();
    return 1;
  }
  if (((iVar1 == -0x68d7769) || (iVar1 == 0x1854a812)) || (iVar1 == -0x13ff2806)) {
    FUN_000f7720();
    uVar2 = 1;
  }
  return uVar2;
}
