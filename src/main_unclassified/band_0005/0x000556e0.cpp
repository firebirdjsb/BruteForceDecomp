/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DE870BA74B876E5E781F1DC678CC912AB73ACBFD96EF0113688181BC56356E2
 * Entry: 0x000556e0, Ghidra index: 814, label: FUN_000556e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000556e0(void)

{
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x5c) = 0;
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  *(undefined4 *)(unaff_EDI + 100) = 0xbf800000;
  *(undefined4 *)(unaff_EDI + 0x70) = 0;
  *(undefined4 *)(unaff_EDI + 0x6c) = 0;
  *(undefined4 *)(unaff_EDI + 0x68) = 0;
  *(undefined4 *)(unaff_EDI + 0x7c) = 0;
  *(undefined4 *)(unaff_EDI + 0x78) = 0;
  *(undefined4 *)(unaff_EDI + 0x74) = 0;
  *(undefined4 *)(unaff_EDI + 0x80) = 0;
  *(undefined1 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 4) = 0;
  if (*(int *)(unaff_EDI + 0x14) != 0) {
    FUN_0008f6a0(0);
  }
  *(uint *)(unaff_EDI + 0x88) = *(uint *)(unaff_EDI + 0x88) & 0xffffdffe | 0x1000;
  *(undefined4 *)(unaff_EDI + 0x84) = 0xbf800000;
  *(undefined4 *)(unaff_EDI + 0x8c) = 0xbf800000;
  *(undefined4 *)(unaff_EDI + 0x90) = 0xbf800000;
  *(undefined4 *)(unaff_EDI + 0x98) = 0;
  *(undefined4 *)(unaff_EDI + 0x9c) = 0xfe4bc988;
  *(undefined1 *)(unaff_EDI + 0x19) = 0;
  *(undefined4 *)(unaff_EDI + 0x94) = 0;
  *(uint *)(unaff_EDI + 0x88) = *(uint *)(unaff_EDI + 0x88) & 0xffffb401 | 0x7f8400;
  return;
}
