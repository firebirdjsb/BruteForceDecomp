/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 478D6E08810DA96701C160A3C92A6A1103BF46A781E1149BE4C7F30581EE795C
 * Entry: 0x00358d90, Ghidra index: 13160, label: FUN_00358d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00358d90(void)

{
  undefined4 uVar1;
  int in_EAX;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_EAX + 0x28c) != 0) {
    uVar2 = in_ECX - *(int *)(in_EAX + 0x28c);
    *(undefined4 *)(in_EAX + 0x28c) = 0;
    if (*(uint *)(in_EAX + 0x290) < uVar2) {
      *(uint *)(in_EAX + 0x298) = *(uint *)(in_EAX + 0x290);
      uVar1 = *(undefined4 *)(in_EAX + 0x294);
      *(uint *)(in_EAX + 0x290) = uVar2;
      *(undefined4 *)(in_EAX + 0x294) = *(undefined4 *)(in_EAX + 0xc);
      *(undefined4 *)(in_EAX + 0x29c) = uVar1;
      return;
    }
    if (*(uint *)(in_EAX + 0x298) < uVar2) {
      *(uint *)(in_EAX + 0x298) = uVar2;
      *(undefined4 *)(in_EAX + 0x29c) = *(undefined4 *)(in_EAX + 0xc);
    }
  }
  return;
}
