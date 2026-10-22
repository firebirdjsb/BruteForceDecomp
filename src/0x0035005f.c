/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E215A74B42FADC86B91EE8216CA82D46EB07354BC46B9F60491D5CCA3D06CF01
 * Entry: 0x0035005f, Ghidra index: 13046, label: FUN_0035005f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035005f(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = *(uint *)(in_ECX + 0xa70);
  if ((uVar1 & 1) == 0) {
    *(uint *)(in_ECX + 0xa70) = uVar1 | 1;
    if (*(char *)(in_ECX + 0x8c0) != '\0') {
      *(undefined4 *)(in_ECX + 0x8c8) = *(undefined4 *)(in_ECX + 0x900);
      *(undefined4 *)(in_ECX + 0x8cc) = *(undefined4 *)(in_ECX + 0x904);
      *(undefined4 *)(in_ECX + 0x8d0) = *(undefined4 *)(in_ECX + 0x908);
      *(undefined4 *)(in_ECX + 0x8d4) = *(undefined4 *)(in_ECX + 0x90c);
      *(undefined4 *)(in_ECX + 0x8d8) = *(undefined4 *)(in_ECX + 0x8f0);
      *(undefined4 *)(in_ECX + 0x8dc) = *(undefined4 *)(in_ECX + 0x8f4);
      *(undefined4 *)(in_ECX + 0x8e0) = *(undefined4 *)(in_ECX + 0x8f8);
      *(undefined4 *)(in_ECX + 0x268) = *(undefined4 *)(in_ECX + 0x8e8);
      *(undefined4 *)(in_ECX + 0x26c) = *(undefined4 *)(in_ECX + 0x8ec);
      *(undefined4 *)(in_ECX + 0x8e4) = *(undefined4 *)(in_ECX + 0x8fc);
    }
    uVar1 = *(uint *)(in_ECX + 0x268);
    if ((uVar1 != 0) && (*(char *)(in_ECX + 0x8c0) != '\x16')) {
      FUN_00348127(*(uint *)(in_ECX + 0x26c) & uVar1,*(uint *)(in_ECX + 0x26c),uVar1,8,1);
      uVar1 = 0;
      piVar2 = (int *)(in_ECX + 0x8c8);
      do {
        if (*piVar2 == 0) break;
        uVar1 = uVar1 + 1;
        FUN_00348127(0,0,*piVar2,4,uVar1);
        piVar2 = piVar2 + 1;
      } while (uVar1 < 4);
      FUN_003561a3(0xffffffff,0xffffffff);
    }
  }
  return;
}
