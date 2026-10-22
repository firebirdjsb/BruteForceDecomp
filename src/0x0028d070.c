/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CED2696CC98025083AF4F75F31F18CE77FD26DFD1D7AF84172C016E7E7535164
 * Entry: 0x0028d070, Ghidra index: 9189, label: FUN_0028d070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0028d070(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_EAX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int in_EDX;
  
  if (*(char *)(in_EDX + 0x5d) == '\0') {
    return 0x80070005;
  }
  if (in_EAX < *(uint *)(in_EDX + 0x10)) {
    iVar4 = (in_EAX + 1) * 0x10;
    uVar1 = *(undefined4 *)(iVar4 + 0xc + *(int *)(in_EDX + 0x28));
    puVar5 = (undefined4 *)(iVar4 + *(int *)(in_EDX + 0x28));
    uVar2 = puVar5[2];
    uVar3 = puVar5[1];
    *in_ECX = *puVar5;
    in_ECX[1] = uVar3;
    in_ECX[2] = uVar2;
    in_ECX[3] = uVar1;
    return 0;
  }
  return 0x80070057;
}
