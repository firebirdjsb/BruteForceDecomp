/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35CC9D75597808C255BF6BE027B415592F5D6C4D2E6A8A3ACBD76A213E5466BB
 * Entry: 0x001ca9e0, Ghidra index: 5850, label: FUN_001ca9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ca9e0(int param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x14);
  iVar1 = 2;
  do {
    puVar2[1] = 0xf;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + -4) = 0;
    FUN_0001f4f0(in_EAX,0,0xffffffff);
    puVar2 = puVar2 + 7;
    in_EAX = in_EAX + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}
