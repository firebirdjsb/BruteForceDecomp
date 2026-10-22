/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E97E90D1A9A52BC5C7A1E2CBD4651576A7003079736481EA91B259564E8F2756
 * Entry: 0x0015ef60, Ghidra index: 4567, label: FUN_0015ef60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0015ef60(undefined4 *param_1)

{
  int in_EAX;
  uint unaff_EDI;
  
  *(undefined4 *)(in_EAX + 0xc) = 2;
  if (*(uint *)(in_EAX + 4) != unaff_EDI) {
    FUN_0008f6a0();
  }
  *(undefined4 *)(in_EAX + 0x40) = *param_1;
  if ((unaff_EDI & -(uint)((*(byte *)(unaff_EDI + 0x26) & 0x40) != 0)) != 0) {
    FUN_0015a0d0(&param_1,in_EAX + 0x44);
  }
  return 1;
}
