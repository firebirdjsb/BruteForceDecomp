/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B57DCB360896A8B63261D834B619C450886425CB467EDA8EAB0331810B7D292
 * Entry: 0x0031c561, Ghidra index: 12335, label: FUN_0031c561
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c561(void)

{
  byte bVar1;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x24);
  if (bVar1 == 0) {
    return;
  }
  *(int *)(in_ECX + 4) =
       *(int *)(in_ECX + 4) +
       (*(uint *)(*(int *)(in_ECX + 0x18) + 4 + (uint)*(byte *)(in_ECX + 0x25) * 8) & 0xffff);
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    if (bVar1 < 3) {
      FUN_0031c3c9(0);
      goto LAB_0031c5a0;
    }
    bVar1 = bVar1 - 1;
  }
  FUN_0031c161(*(byte *)(in_ECX + 0x25) + 1,bVar1,0,0);
LAB_0031c5a0:
  if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
    (**(code **)(in_ECX + 0x10))(*(undefined4 *)(in_ECX + 0x14));
  }
  return;
}
