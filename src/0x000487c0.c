/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 084495AED4615489B23662E39A646A76ED4BA917969530C9EAE69FCC8E2BE75F
 * Entry: 0x000487c0, Ghidra index: 576, label: FUN_000487c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000487c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  *(undefined1 *)(unaff_ESI + 1) = *(undefined1 *)(unaff_EDI + 1);
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[3] = unaff_EDI[3];
  unaff_ESI[4] = unaff_EDI[4];
  unaff_ESI[5] = unaff_EDI[5];
  FUN_0010bc40();
  uVar1 = unaff_EDI[0xc];
  uVar2 = unaff_EDI[0xb];
  unaff_ESI[10] = unaff_EDI[10];
  unaff_ESI[0xb] = uVar2;
  unaff_ESI[0xc] = uVar1;
  unaff_ESI[0xe] = unaff_EDI[0xe];
  bVar3 = *(byte *)(unaff_ESI + 0xf) ^ (*(byte *)(unaff_ESI + 0xf) ^ *(byte *)(unaff_EDI + 0xf)) & 1
  ;
  *(byte *)(unaff_ESI + 0xf) = bVar3;
  bVar3 = (*(byte *)(unaff_EDI + 0xf) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(unaff_ESI + 0xf) = bVar3;
  *(byte *)(unaff_ESI + 0xf) = (*(byte *)(unaff_EDI + 0xf) ^ bVar3) & 4 ^ bVar3;
  unaff_ESI[0x10] = unaff_EDI[0x10];
  *(undefined1 *)(unaff_ESI + 0x11) = *(undefined1 *)(unaff_EDI + 0x11);
  unaff_ESI[0x12] = unaff_EDI[0x12];
  *(undefined1 *)(unaff_ESI + 0x13) = *(undefined1 *)(unaff_EDI + 0x13);
  uVar1 = unaff_EDI[0x16];
  uVar2 = unaff_EDI[0x14];
  unaff_ESI[0x15] = unaff_EDI[0x15];
  unaff_ESI[0x16] = uVar1;
  unaff_ESI[0x14] = uVar2;
  unaff_ESI[0x18] = unaff_EDI[0x18];
  bVar3 = *(byte *)(unaff_ESI + 0x19) ^
          (*(byte *)(unaff_ESI + 0x19) ^ *(byte *)(unaff_EDI + 0x19)) & 1;
  *(byte *)(unaff_ESI + 0x19) = bVar3;
  bVar3 = (*(byte *)(unaff_EDI + 0x19) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(unaff_ESI + 0x19) = bVar3;
  *(byte *)(unaff_ESI + 0x19) = (*(byte *)(unaff_EDI + 0x19) ^ bVar3) & 4 ^ bVar3;
  unaff_ESI[0x1a] = unaff_EDI[0x1a];
  unaff_ESI[0x1b] = unaff_EDI[0x1b];
  unaff_ESI[0x1c] = unaff_EDI[0x1c];
  unaff_ESI[0x1e] = unaff_EDI[0x1e];
  bVar3 = *(byte *)(unaff_ESI + 0x1f) ^
          (*(byte *)(unaff_ESI + 0x1f) ^ *(byte *)(unaff_EDI + 0x1f)) & 1;
  *(byte *)(unaff_ESI + 0x1f) = bVar3;
  bVar3 = (*(byte *)(unaff_EDI + 0x1f) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(unaff_ESI + 0x1f) = bVar3;
  *(byte *)(unaff_ESI + 0x1f) = (*(byte *)(unaff_EDI + 0x1f) ^ bVar3) & 4 ^ bVar3;
  unaff_ESI[0x20] = unaff_EDI[0x20];
  unaff_ESI[0x21] = unaff_EDI[0x21];
  unaff_ESI[0x22] = unaff_EDI[0x22];
  unaff_ESI[0x23] = unaff_EDI[0x23];
  unaff_ESI[0x24] = unaff_EDI[0x24];
  unaff_ESI[0x25] = unaff_EDI[0x25];
  return;
}
