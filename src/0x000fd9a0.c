/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21F88C96B714D485B340DDC0E87D6E368C0145C2A25416349B4C83DDEDB7C9F0
 * Entry: 0x000fd9a0, Ghidra index: 3171, label: FUN_000fd9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fd9a0(undefined4 param_1,int param_2)

{
  FUN_000fd0d0(param_1);
  FUN_000fd230(param_1);
  FUN_000fd730(param_1);
  FUN_000fd430(param_1);
  FUN_000fc3d0(param_1);
  FUN_000fdbf0(0);
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_000fdb40(*(int *)(param_2 + 0x1c));
  }
  FUN_000fd7b0();
  FUN_000fcc60();
  FUN_000fce20(param_1);
  FUN_000fcf20();
  FUN_000fd070();
  FUN_000fd870(param_1);
  return 1;
}
