/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAFDD745CC90C526217ED39389FFE99573C07DDC5DF752EE01C9E82E216C51C6
 * Entry: 0x0028ce50, Ghidra index: 9187, label: FUN_0028ce50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0028ce50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_EAX;
  undefined4 *in_ECX;
  int in_EDX;
  
  if (in_EAX < *(uint *)(in_EDX + 0x10)) {
    puVar1 = (undefined4 *)(*(int *)(in_EDX + 0x18) + (in_EAX * 3 + 3) * 4);
    uVar2 = puVar1[2];
    uVar3 = puVar1[1];
    *in_ECX = *puVar1;
    in_ECX[2] = uVar2;
    in_ECX[1] = uVar3;
    return 0;
  }
  return 0x80070057;
}
