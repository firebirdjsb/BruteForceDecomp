/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CF6AB55BBF0F7B256E2444B226E44FCA115C769F35F8155290DE0C77EBC2BF6
 * Entry: 0x002e3990, Ghidra index: 10416, label: FUN_002e3990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e3990(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    return 0x80004005;
  }
  uVar2 = ((*(uint *)(in_ECX + 0x14) - 1) + *(int *)(in_ECX + 0x1c)) % *(uint *)(in_ECX + 0x14);
  iVar1 = *(int *)(in_ECX + 0x20) + -1;
  *(int *)(in_ECX + 0x20) = iVar1;
  *(uint *)(in_ECX + 0x1c) = uVar2;
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 4 + uVar2 * 0xc);
    return 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return 0;
}
