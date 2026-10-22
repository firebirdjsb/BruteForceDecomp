/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32E648495CE9690010540FDD3DAC31A074A715B00F840401A104A2EAA2278006
 * Entry: 0x00314994, Ghidra index: 12074, label: FUN_00314994
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00314994(undefined2 *param_1,int param_2)

{
  *param_1 = 0x69;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((int)param_1 + 3) = 4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 4);
  *(uint *)(param_1 + 4) = (uint)*(byte *)(param_2 + 0xc);
  return;
}
