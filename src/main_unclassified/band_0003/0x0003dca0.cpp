/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0D220D633F3F1BD6A20E4677D0EB91BF046B526803944E1C812739C1801EA0F
 * Entry: 0x0003dca0, Ghidra index: 464, label: FUN_0003dca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0003dbb0(undefined4 param_1);

undefined4 FUN_0003dca0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(in_EAX + 0x1c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 0x10))();
    if (iVar1 == 1) {
      uVar2 = FUN_0003dbb0(*(undefined4 *)(in_EAX + 0xc));
      return uVar2;
    }
  }
  return 0;
}
