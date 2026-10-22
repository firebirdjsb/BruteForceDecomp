/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7D8C442C10B9839E6686EDC68DEC3D18A7013321700579A613B81A57EF22CD0
 * Entry: 0x000868d0, Ghidra index: 1588, label: FUN_000868d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000868d0(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_00087940(param_1,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(unaff_EDI + 0x21);
  }
  return;
}
