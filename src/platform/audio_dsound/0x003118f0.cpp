/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 911C24313B7B2BA13B294400F7B5ABA58E718427257DB4E3ED30D8D12061D863
 * Entry: 0x003118f0, Ghidra index: 11898, label: FUN_003118f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003118f0(void)

{
  undefined1 uVar1;
  undefined1 *in_ECX;
  int unaff_FS_OFFSET;
  
  *(uint *)(in_ECX + 4) = (uint)(*(byte *)(unaff_FS_OFFSET + 0x24) < 2);
  if (*(int *)(in_ECX + 4) != 0) {
    uVar1 = KfRaiseIrql();
    *in_ECX = uVar1;
  }
  return;
}
