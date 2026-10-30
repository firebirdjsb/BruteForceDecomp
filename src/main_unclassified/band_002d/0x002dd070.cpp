/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88941F72727886BB28FC9BAE12BF02B055C9CA48FE5732336658E6F22FB45D39
 * Entry: 0x002dd070, Ghidra index: 10314, label: FUN_002dd070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002dd070(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = (uint)*(ushort *)(in_EAX + 0x26);
  fVar3 = (float10)0.0;
  if (-1 < (int)(uVar2 - 1)) {
    puVar1 = (undefined4 *)(*(int *)(in_EAX + 0x28) + (uVar2 - 1) * 4);
    do {
      if ((*(byte *)*puVar1 & 0xc) == 0) {
        fVar3 = (float10)*(float *)((byte *)*puVar1 + 0x20) * (float10)9.81 * (float10)0.1 + fVar3;
      }
      puVar1 = puVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return fVar3;
}
