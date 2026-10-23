/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E38589C605E448760C95DCA0B1D0E491B9F2F56A3E2FC6784F0946C704D9057F
 * Entry: 0x00273740, Ghidra index: 8859, label: FUN_00273740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00273740(void)

{
  int in_EAX;
  undefined4 *in_EDX;
  
  *(undefined4 *)(in_EAX + 0xe8) = in_EDX[3];
  *(undefined4 *)(in_EAX + 0xdc) = *in_EDX;
  *(undefined4 *)(in_EAX + 0xe0) = in_EDX[1];
  *(undefined4 *)(in_EAX + 0xe4) = in_EDX[2];
  *(undefined4 *)(in_EAX + 0xec) = in_EDX[4];
  *(undefined4 *)(in_EAX + 0xf4) = in_EDX[6];
  *(undefined4 *)(in_EAX + 0xf0) = in_EDX[5];
  FUN_00273790();
  return;
}
