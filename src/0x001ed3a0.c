/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7F7821705DD89618C232CA2164E8468D8606564E3707C66D8232100FE36273D
 * Entry: 0x001ed3a0, Ghidra index: 6929, label: FUN_001ed3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ed3a0(void)

{
  int in_EAX;
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(in_EAX + 0x2e30);
  puVar1 = (undefined1 *)(in_EAX + 0x15c);
  iVar4 = 8;
  do {
    *(undefined4 *)(puVar1 + 0x510) = 0xffffffff;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 0x514) = 0;
    *(undefined4 *)(puVar1 + 0x594) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    puVar3 = (undefined4 *)(puVar1 + 0x10);
    iVar5 = 0x20;
    do {
      *puVar3 = 0xffffffff;
      *puVar2 = 0xffffffff;
      puVar3 = puVar3 + 10;
      puVar2 = puVar2 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar1 = puVar1 + 0x598;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}
