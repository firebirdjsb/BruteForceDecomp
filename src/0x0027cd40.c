/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A45112F6410EF4DBFBCE9DC5C3612C5E1F8281541FE4E2D3FD0586C996EBABB
 * Entry: 0x0027cd40, Ghidra index: 8995, label: FUN_0027cd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027cd40(void)

{
  undefined2 *puVar1;
  int iVar2;
  int in_EDX;
  
  puVar1 = (undefined2 *)(in_EDX + 0x8c);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_EDX + 0x980);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_EDX + 0xa74);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EDX + 0x16a4) = 0;
  *(undefined4 *)(in_EDX + 0x16a0) = 0;
  *(undefined4 *)(in_EDX + 0x16a8) = 0;
  *(undefined4 *)(in_EDX + 0x1698) = 0;
  *(undefined2 *)(in_EDX + 0x48c) = 1;
  return;
}
