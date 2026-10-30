/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9CB424A43B31C4C11598F0F03B2528A21A43DCEC357589B9E697C26EA58B601
 * Entry: 0x002e7630, Ghidra index: 10512, label: FUN_002e7630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e7630(int *param_1)

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x14))(in_ECX + 5);
  (**(code **)(*param_1 + 0x18))(in_ECX + 4);
  (**(code **)(*param_1 + 0x18))(in_ECX + 6);
  (**(code **)(*param_1 + 0x18))((byte *)(in_ECX + 7));
  (**(code **)(*param_1 + 0x14))(in_ECX + 8);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0xc);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x10);
  uVar1 = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x14);
  do {
    if ((*(byte *)(in_ECX + 7) & (byte)(1 << ((byte)uVar1 & 0x1f))) != 0) {
      (**(code **)(*param_1 + 0x38))(*puVar2);
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 4);
  return param_1[3];
}
