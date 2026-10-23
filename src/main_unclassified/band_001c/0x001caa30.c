/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B4C68732B9D46AC91D566043BB73197C73F033A70E36F326080E432CB7CBB06
 * Entry: 0x001caa30, Ghidra index: 5851, label: FUN_001caa30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001caa30(int param_1)

{
  int unaff_EDI;
  
  FUN_001cbd10();
  FUN_001cbd60();
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_001ad080((undefined4 *)(param_1 + 8));
  if (*(int *)(unaff_EDI + 8) != 0) {
    FUN_001cd420(*(int *)(unaff_EDI + 8));
  }
  FUN_001cbdb0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_000fdbf0();
  if (*(int *)(unaff_EDI + 0x1c) != 0) {
    FUN_000fdb40(*(int *)(unaff_EDI + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_001ad2a0();
  if (*(int *)(unaff_EDI + 0x20) != 0) {
    FUN_001cd4a0(*(int *)(unaff_EDI + 0x20));
  }
  FUN_001cbeb0(param_1 + 0x24);
  FUN_001cbfb0(param_1 + 0x34);
  FUN_001cc0b0(param_1 + 0x44);
  FUN_001cc1b0(param_1 + 0x54);
  FUN_001cc2b0(param_1 + 100);
  return param_1;
}
