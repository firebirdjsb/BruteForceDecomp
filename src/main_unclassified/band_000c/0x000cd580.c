/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F6B12840CA28048FA3C945B3DDA1F876A22462ED21353243FE5E6A78FDD31F4
 * Entry: 0x000cd580, Ghidra index: 2534, label: FUN_000cd580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cd580(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(in_EAX + 4);
  iVar2 = 0x10;
  do {
    puVar1[-1] = 0;
    puVar1[9] = 0;
    *puVar1 = 0;
    puVar1[3] = 0x24;
    puVar1[4] = 0x40;
    puVar1[5] = 0x40;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1 = puVar1 + 0xb;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EAX + 0x2c0) = 0;
  return;
}
