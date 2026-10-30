/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D3D88752DE484435CE2F355550334F5EF37B9BF2CC361A6F8B4A747285CE0B6
 * Entry: 0x001c9780, Ghidra index: 5832, label: FUN_001c9780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9780(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  puVar2 = unaff_ESI + 2;
  iVar1 = 8 - (int)puVar2;
  iVar3 = 4;
  do {
    *puVar2 = *(undefined4 *)((int)unaff_EDI + iVar1 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_ESI[0xc] = 0xf;
  unaff_ESI[0xb] = 0;
  *(undefined1 *)(unaff_ESI + 7) = 0;
  FUN_0001f4f0(unaff_EDI + 6,0,0xffffffff);
  unaff_ESI[0xd] = unaff_EDI[0xd];
  unaff_ESI[0xe] = unaff_EDI[0xe];
  unaff_ESI[0xf] = unaff_EDI[0xf];
  return;
}
