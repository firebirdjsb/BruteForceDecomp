/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68A4DA37E9741CAEC71D51D3A2ADB32B75C4BBD72F7E1E4E67B70EF17AF81643
 * Entry: 0x001d23b0, Ghidra index: 6297, label: FUN_001d23b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d23b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  *(undefined1 *)(unaff_ESI + 3) = *(undefined1 *)(unaff_EDI + 3);
  *(undefined1 *)((int)unaff_ESI + 0xd) = *(undefined1 *)((int)unaff_EDI + 0xd);
  FUN_001d3300();
  unaff_ESI[0x24] = unaff_EDI[0x24];
  unaff_ESI[0x25] = unaff_EDI[0x25];
  unaff_ESI[0x26] = unaff_EDI[0x26];
  unaff_ESI[0x27] = unaff_EDI[0x27];
  unaff_ESI[0x28] = unaff_EDI[0x28];
  unaff_ESI[0x29] = unaff_EDI[0x29];
  unaff_ESI[0x2a] = unaff_EDI[0x2a];
  *(undefined1 *)(unaff_ESI + 0x2b) = *(undefined1 *)(unaff_EDI + 0x2b);
  *(undefined1 *)((int)unaff_ESI + 0xad) = *(undefined1 *)((int)unaff_EDI + 0xad);
  *(undefined1 *)((int)unaff_ESI + 0xae) = *(undefined1 *)((int)unaff_EDI + 0xae);
  *(undefined1 *)((int)unaff_ESI + 0xaf) = *(undefined1 *)((int)unaff_EDI + 0xaf);
  *(undefined1 *)(unaff_ESI + 0x2c) = *(undefined1 *)(unaff_EDI + 0x2c);
  unaff_ESI[0x2d] = unaff_EDI[0x2d];
  unaff_ESI[0x2e] = unaff_EDI[0x2e];
  unaff_ESI[0x2f] = unaff_EDI[0x2f];
  *(undefined1 *)(unaff_ESI + 0x30) = *(undefined1 *)(unaff_EDI + 0x30);
  unaff_ESI[0x31] = unaff_EDI[0x31];
  unaff_ESI[0x32] = unaff_EDI[0x32];
  *(undefined1 *)(unaff_ESI + 0x33) = *(undefined1 *)(unaff_EDI + 0x33);
  *(undefined1 *)((int)unaff_ESI + 0xcd) = *(undefined1 *)((int)unaff_EDI + 0xcd);
  *(undefined1 *)((int)unaff_ESI + 0xce) = *(undefined1 *)((int)unaff_EDI + 0xce);
  *(undefined1 *)((int)unaff_ESI + 0xcf) = *(undefined1 *)((int)unaff_EDI + 0xcf);
  *(undefined1 *)(unaff_ESI + 0x34) = *(undefined1 *)(unaff_EDI + 0x34);
  uVar1 = unaff_EDI[0x37];
  uVar2 = unaff_EDI[0x36];
  unaff_ESI[0x35] = unaff_EDI[0x35];
  unaff_ESI[0x36] = uVar2;
  unaff_ESI[0x37] = uVar1;
  unaff_ESI[0x38] = unaff_EDI[0x38];
  FUN_001d3950(uVar2);
  FUN_001d3a90();
  FUN_001d3bc0();
  FUN_0024a450();
  return;
}
