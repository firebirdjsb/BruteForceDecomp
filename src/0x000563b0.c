/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B41EC3E748E911C3564529F86F1C082B674F5D19B6F0BC15D9F4AD7CF1FE8C1
 * Entry: 0x000563b0, Ghidra index: 828, label: FUN_000563b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000563b0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_EAX + 0x10);
  if ((*(uint *)(in_EAX + 0x14) <= uVar1) && (uVar1 != 0)) {
    uVar2 = *(int *)(in_EAX + 0xc) + 1;
    *(uint *)(in_EAX + 0xc) = uVar2;
    if ((uint)(*(int *)(in_EAX + 8) << 2) <= uVar2) {
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
    *(uint *)(in_EAX + 0x10) = uVar1 - 1;
    if (uVar1 - 1 == 0) {
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
  }
  FUN_000384a0(&stack0x00000004);
  return;
}
