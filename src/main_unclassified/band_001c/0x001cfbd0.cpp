/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10380DEB1278E1A6F0B1293B05FEFF977792E2B93B84F3A8B34A19E4C1C8252C
 * Entry: 0x001cfbd0, Ghidra index: 6144, label: FUN_001cfbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cfbd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
    param_1[4] = in_ECX[4];
    param_1[5] = in_ECX[5];
    param_1[6] = in_ECX[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(in_ECX + 7);
    *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)in_ECX + 0x1d);
    param_1[8] = in_ECX[8];
  }
  return;
}
