/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 064A5C1D2C2ACBD2A3B8434D61CCA3B4767061DE10EF6E2570C4D7EC955CA851
 * Entry: 0x002ec1cd, Ghidra index: 10654, label: FUN_002ec1cd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
int FUN_002ec1cd(int param_1,uint param_2)

{
  int iVar1;
  int iStack_8;
  
  if ((((uint16_t)(param_2 >> 16)) & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      iStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      iStack_8 = 2;
    }
    return iStack_8;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)CONCAT26(((uint16_t)(param_2 >> 16)),CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}
