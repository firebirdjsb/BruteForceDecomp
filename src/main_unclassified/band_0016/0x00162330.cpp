/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B7CF4969720B3EBA3C2C7F6B42A7A2971894F4D957266A371CB6DD88CCA6A53
 * Entry: 0x00162330, Ghidra index: 4634, label: FUN_00162330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x00162290 accesses guest EAX implicitly.
 * Original guest register/object ABI_UNVERIFIED. */
extern void FUN_00162290(void);
void FUN_00162330(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_00162290();
  *(undefined4 *)(unaff_ESI + 0x140) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x13c) = 0;
  *(undefined1 *)(unaff_ESI + 300) = 0;
  *(undefined4 *)(unaff_ESI + 0x15c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x158) = 0;
  *(undefined1 *)(unaff_ESI + 0x148) = 0;
  *(undefined4 *)(unaff_ESI + 0x174) = 0;
  *(undefined4 *)(unaff_ESI + 0x17c) = 0;
  *(undefined4 *)(unaff_ESI + 0x180) = 0;
  *(undefined4 *)(unaff_ESI + 0x184) = 0;
  *(undefined4 *)(unaff_ESI + 0x188) = 0;
  *(undefined4 *)(unaff_ESI + 0x18c) = 0;
  *(undefined4 *)(unaff_ESI + 400) = 0;
  *(undefined4 *)(unaff_ESI + 0x194) = 0;
  *(undefined4 *)(unaff_ESI + 0x19c) = 0;
  *(undefined4 *)(unaff_ESI + 0x1a0) = 0;
  *(undefined4 *)(unaff_ESI + 0x1a4) = 0;
  *(undefined4 *)(unaff_ESI + 0x1a8) = 0;
  *(undefined4 *)(unaff_ESI + 0x1ac) = 0;
  *(undefined4 *)(unaff_ESI + 0x204) = 0;
  *(undefined4 *)(unaff_ESI + 0x208) = 0;
  *(undefined4 *)(unaff_ESI + 0x20c) = 0;
  *(undefined4 *)(unaff_ESI + 0x210) = 0;
  *(undefined4 *)(unaff_ESI + 0x214) = 0;
  *(undefined4 *)(unaff_ESI + 0x218) = 0;
  *(undefined4 *)(unaff_ESI + 0x21c) = 0;
  *(undefined4 *)(unaff_ESI + 0x220) = 0;
  *(undefined4 *)(unaff_ESI + 0x224) = 0;
  *(undefined4 *)(unaff_ESI + 0x228) = 0;
  *(undefined4 *)(unaff_ESI + 0x22c) = 0;
  *(undefined4 *)(unaff_ESI + 0x230) = 0;
  *(undefined4 *)(unaff_ESI + 700) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c0) = 0;
  puVar1 = (undefined4 *)(unaff_ESI + 0x2c8);
  iVar2 = 6;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(unaff_ESI + 0x2f8) = 0;
  *(undefined4 *)(unaff_ESI + 0x2fc) = 0;
  *(undefined4 *)(unaff_ESI + 0x30c) = 0;
  *(undefined4 *)(unaff_ESI + 0x310) = 0;
  *(undefined4 *)(unaff_ESI + 0x314) = 0;
  *(undefined4 *)(unaff_ESI + 0x318) = 0;
  *(undefined4 *)(unaff_ESI + 800) = 0;
  *(undefined4 *)(unaff_ESI + 0x324) = 0;
  *(undefined4 *)(unaff_ESI + 0x328) = 0;
  *(undefined4 *)(unaff_ESI + 0x334) = 0;
  *(undefined4 *)(unaff_ESI + 0x338) = 0;
  *(undefined4 *)(unaff_ESI + 0x33c) = 0;
  *(undefined4 *)(unaff_ESI + 0x340) = 0;
  *(undefined4 *)(unaff_ESI + 0x358) = 0;
  *(undefined4 *)(unaff_ESI + 0x38c) = 0;
  *(undefined4 *)(unaff_ESI + 0x390) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x37c) = 0;
  *(undefined4 *)(unaff_ESI + 0x3a0) = 0;
  *(undefined4 *)(unaff_ESI + 0x3a4) = 0;
  *(undefined4 *)(unaff_ESI + 0x3a8) = 0;
  return;
}
