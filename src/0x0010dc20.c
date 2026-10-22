/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84C20334BEEF2BFA8C5F11BE1F1A7128C42A404706412B0476AB12A6820ED3C3
 * Entry: 0x0010dc20, Ghidra index: 3502, label: FUN_0010dc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010dc20(uint param_1)

{
  char cVar1;
  undefined4 in_ECX;
  
  cVar1 = FUN_0010dbb0(param_1);
  if (cVar1 == '\0') {
    if ((param_1 & 1) != 0) {
      FUN_0010d9d0(in_ECX);
      return;
    }
    if ((param_1 & 2) != 0) {
      FUN_0010d870();
    }
  }
  return;
}
