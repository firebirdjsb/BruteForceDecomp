/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DE1FBFE316BE62FD7690E63B927FB659303757213B03889A31FD3771D681535
 * Entry: 0x00122800, Ghidra index: 3661, label: FUN_00122800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00122800(int param_1)

{
  if (*(int **)(param_1 + 0x640) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x640) + 0x138))(param_1);
  }
  FUN_0012eab0(0);
  *(undefined1 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_0008f6a0(0);
  }
  FUN_000c4e70();
  FUN_000c4ec0();
  return;
}
