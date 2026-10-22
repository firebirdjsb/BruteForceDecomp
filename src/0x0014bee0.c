/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F480DFAED8DDA9DF757CCA45493C88776B7FE2A2924C8848C681D027C33BABF
 * Entry: 0x0014bee0, Ghidra index: 4330, label: FUN_0014bee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014bee0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_8;
  uint local_4;
  
  if (*(int *)(unaff_ESI + 0xb8) != 0) {
    local_8 = 0;
    local_4 = 0xffffffff;
    FUN_00149d30(&local_8,&local_4);
    if (local_8 == 0) {
      return *(undefined4 *)(unaff_ESI + 0xbc);
    }
    if (local_8 < 10) {
      iVar2 = *(int *)(local_8 * 0x10 + 0xc + unaff_ESI);
      iVar1 = local_8 * 0x10 + unaff_ESI;
      if ((iVar2 != 0) && (local_4 < (uint)(*(int *)(iVar1 + 0x10) - iVar2 >> 2))) {
        return *(undefined4 *)(*(int *)(iVar1 + 0xc) + local_4 * 4);
      }
    }
  }
  return 0;
}
