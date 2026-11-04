/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 461CC6E210C939B3336C39B6346766226C93C473698E79345C2F06F73A6AF367
 * Entry: 0x00109a00, Ghidra index: 3414, label: FUN_00109a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern undefined4 FUN_001095b0(void);
undefined4 FUN_00109a00(void)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  
  FUN_001095b0();
  bVar1 = *(byte *)(in_ECX + 0xa0);
  bVar2 = *(byte *)(in_ECX + 0x28) >> 2 & 1;
  if (bVar2 != (bVar1 >> 2 & 1)) {
    *(byte *)(in_ECX + 0xa0) = (bVar2 << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*(int *)(in_ECX + 0x78) + 0x28))();
  }
  return 1;
}
