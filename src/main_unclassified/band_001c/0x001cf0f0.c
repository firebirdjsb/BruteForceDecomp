/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 665327B89D943F14EBBE81AAA68866D80EFE80A8203AB7E154C0317E0DE3959B
 * Entry: 0x001cf0f0, Ghidra index: 6092, label: FUN_001cf0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf0f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 3);
    *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
    param_1[4] = in_ECX[4];
    param_1[5] = in_ECX[5];
  }
  return;
}
