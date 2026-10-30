/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F4C562D218F93A9C64C0E60D383B3B8EE8C782F70856C4DEFF44E22EFEAEB02
 * Entry: 0x002e7730, Ghidra index: 10515, label: FUN_002e7730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7730(undefined1 param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  *(undefined1 *)(in_ECX + 7) = param_1;
  bVar3 = 0;
  piVar5 = (int *)(in_ECX + 0x14);
  iVar4 = 4;
  do {
    bVar2 = bVar3 & 0x1f;
    iVar1 = *piVar5;
    bVar3 = bVar3 + 1;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    *(bool *)(iVar1 + 4) = (*(byte *)(in_ECX + 7) & (byte)(1 << bVar2)) != 0;
  } while (iVar4 != 0);
  return;
}
