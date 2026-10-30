/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8CC2DD6F8067A2687DCB27E4629759A5E596213211892581DC919B970B94370
 * Entry: 0x001d1cd0, Ghidra index: 6290, label: FUN_001d1cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1cd0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0001f4f0(unaff_EDI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
  *(undefined1 *)(unaff_ESI + 0x21) = *(undefined1 *)(unaff_EDI + 0x21);
  *(undefined1 *)(unaff_ESI + 0x22) = *(undefined1 *)(unaff_EDI + 0x22);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined4 *)(unaff_ESI + 0x30) = *(undefined4 *)(unaff_EDI + 0x30);
  *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(unaff_EDI + 0x34);
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  FUN_0001f4f0(unaff_EDI + 0x3c,0,0xffffffff);
  FUN_000b0db0();
  return;
}
