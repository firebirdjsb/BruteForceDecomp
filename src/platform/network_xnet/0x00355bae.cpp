/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81E82409B00C4449914287F2FF51B9B9CC9004807B45373869AC6EE583FD1468
 * Entry: 0x00355bae, Ghidra index: 13130, label: FUN_00355bae
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355bae(int *param_1,undefined4 param_2)

{
  if ((*(ushort *)((int)param_1 + 10) & 0x408) == 0) {
    *(undefined4 *)(*param_1 + -4) = param_2;
  }
  if ((*(byte *)((int)param_1 + 0xb) & 8) == 0) {
    FUN_0034c2f0(param_1);
  }
  else {
    FUN_0034c2db(param_1);
  }
  FUN_00355b5a();
  return;
}
