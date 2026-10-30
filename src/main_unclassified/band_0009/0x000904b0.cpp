/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F568AADD8396FC3363AE14877DA71A65E63E5B600C492DBA605CE2280518DC44
 * Entry: 0x000904b0, Ghidra index: 1766, label: FUN_000904b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000904b0(void)

{
  uint uVar1;
  byte bVar2;
  uint *in_EAX;
  int in_ECX;
  int in_EDX;
  
  uVar1 = *in_EAX;
  if (uVar1 < 0xe041e0ba) {
    if (uVar1 == 0xe041e0b9) {
      bVar2 = 1;
      goto LAB_000904e9;
    }
    if (uVar1 == 0x1533eb6f) {
      bVar2 = 3;
      goto LAB_000904e9;
    }
    if (uVar1 == 0x18712765) {
      bVar2 = 2;
      goto LAB_000904e9;
    }
  }
  else if ((uVar1 != 0xe3012d9e) && (uVar1 == 0xeb63b2e3)) {
    bVar2 = 4;
    goto LAB_000904e9;
  }
  bVar2 = 0;
LAB_000904e9:
  if (in_EDX == 0) {
    *(byte *)(in_ECX + 8) = *(byte *)(in_ECX + 8) ^ (*(byte *)(in_ECX + 8) ^ bVar2) & 0xf;
    return;
  }
  *(byte *)(in_ECX + 8) = *(byte *)(in_ECX + 8) & 0xf | bVar2 << 4;
  return;
}
