/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F241F29CE530D31175FA97471B734314468CE903D63F094AF1D256B9A0C1E4E8
 * Entry: 0x0001d3e0, Ghidra index: 127, label: FUN_0001d3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001d3e0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - in_EAX;
    do {
      *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(iVar1 + 4 + in_EAX);
      *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(param_1 + 8);
      param_1 = param_1 + 0xc;
      in_EAX = in_EAX + 0xc;
    } while (param_1 != param_2);
  }
  return;
}
