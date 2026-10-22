/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A513426689C40FC7259926F8AF8847BD5CF0FA5840A567D3E19AC8F527740F84
 * Entry: 0x0003db50, Ghidra index: 461, label: FUN_0003db50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0003db50(void)

{
  int iVar1;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_000388b0(unaff_ESI);
  if (iVar1 != 0) {
    FUN_0003eee0();
    return 1;
  }
  return 0;
}
