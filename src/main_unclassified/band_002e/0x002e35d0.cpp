/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8884367004C7E66032CFC80B95C6CCEDB04DE620E87076E381B01AE75FF6CB6
 * Entry: 0x002e35d0, Ghidra index: 10408, label: FUN_002e35d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e35d0(char param_1)

{
  char *pcVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    do {
      pcVar1 = (char *)(*(int *)(in_ECX + 0x10) + 8 + *(int *)(in_ECX + 0x18) * 0xc);
      if (((param_1 == '\0') ||
          (((cVar2 = *pcVar1, cVar2 == param_1 ||
            ((byte)(cVar2 - param_1) <= (byte)(param_1 - cVar2))) && (cVar2 != '\0')))) &&
         (*pcVar1 != param_1)) break;
      *(uint *)(in_ECX + 0x18) = (*(int *)(in_ECX + 0x18) + 1U) % *(uint *)(in_ECX + 0x14);
      iVar3 = *(int *)(in_ECX + 0x20) + -1;
      *(int *)(in_ECX + 0x20) = iVar3;
    } while (iVar3 != 0);
    if (*(int *)(in_ECX + 0x20) != 0) {
      *(undefined4 *)(in_ECX + 8) =
           *(undefined4 *)(*(int *)(in_ECX + 0x10) + 4 + *(int *)(in_ECX + 0x18) * 0xc);
      return 0;
    }
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return 0;
}
