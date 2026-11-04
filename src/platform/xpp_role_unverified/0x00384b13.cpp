/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4630B726C7FF2C3B5B21BE5DE61676085539FE8E366972FC8D1EE26C5F541326
 * Entry: 0x00384b13, Ghidra index: 13658, label: FUN_00384b13
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern int FUN_00384afd(void);
void FUN_00384b13(byte param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 in_EDX;
  byte bStack00000007;
  
  if (param_1 < 0x20) {
    bStack00000007 = 0;
    bVar1 = param_1 * '\x02' + 1;
    do {
      iVar2 = (uint)bVar1 * 0x10 + 0xc + in_ECX;
      if (*(int *)(iVar2 + 8) == 0) {
        FUN_00384b13(bVar1);
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc) = in_EDX;
      }
    } while (((param_1 & 0x7f) != 0) &&
            (bStack00000007 = bStack00000007 + 1, bVar1 = param_1 << 1, bStack00000007 < 2));
  }
  else {
    iVar2 = FUN_00384afd();
    *(undefined4 *)(*(int *)(in_ECX + 8) + iVar2 * 4) = in_EDX;
  }
  return;
}
