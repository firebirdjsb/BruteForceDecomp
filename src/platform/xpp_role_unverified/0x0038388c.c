/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1751D4A9CC8634BD15447C7B76DE14D99DF8BCDA44FCAA352D49D640F6384714
 * Entry: 0x0038388c, Ghidra index: 13624, label: FUN_0038388c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038388c(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  *(char *)(in_EDX + 0x20) = *(char *)(in_EDX + 0x20) + '\x01';
  if ((*(byte *)(in_EDX + 0x10) & 0x20) == 0) {
    *(byte *)(in_EDX + 1) = *(byte *)(in_EDX + 1) | 0x40;
    iVar1 = FUN_00384f75();
    *(int *)(in_EDX + 0x1c) = iVar1 + 1;
    if (in_ECX[0x10e] != 0) {
      *(byte *)(in_EDX + 0x10) = *(byte *)(in_EDX + 0x10) | 0x40;
    }
    *(undefined4 *)(*in_ECX + 0xc) = 4;
    *(undefined4 *)(*in_ECX + 0x10) = 4;
    *(byte *)(in_EDX + 0x10) = *(byte *)(in_EDX + 0x10) | 0x20;
  }
  return;
}
