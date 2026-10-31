/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C13E61AF89479C11536159D797B62B2A43E0CFB7754E57AD3476414CED18833
 * Entry: 0x00179ba0, Ghidra index: 4992, label: FUN_00179ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_00179c00(void);
void FUN_00179ba0(void)

{
  byte bVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 4);
  FUN_00179c00();
  *(undefined4 *)(unaff_ESI + 0x74) = *(undefined4 *)(unaff_EDI + 0x74);
  *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(unaff_EDI + 0x78);
  *(undefined1 *)(unaff_ESI + 0x7c) = *(undefined1 *)(unaff_EDI + 0x7c);
  bVar1 = *(byte *)(unaff_ESI + 0x7d) ^
          (*(byte *)(unaff_ESI + 0x7d) ^ *(byte *)(unaff_EDI + 0x7d)) & 1;
  *(byte *)(unaff_ESI + 0x7d) = bVar1;
  bVar1 = (*(byte *)(unaff_EDI + 0x7d) ^ bVar1) & 2 ^ bVar1;
  *(byte *)(unaff_ESI + 0x7d) = bVar1;
  *(byte *)(unaff_ESI + 0x7d) = (*(byte *)(unaff_EDI + 0x7d) ^ bVar1) & 4 ^ bVar1;
  return;
}
