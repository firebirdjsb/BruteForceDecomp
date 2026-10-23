/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D37F8361533676677883E8774EFD9536BA07977D5BDC54AE1235DEBA0054314
 * Entry: 0x001473f0, Ghidra index: 4236, label: FUN_001473f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001473f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x1bc) & 2) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1c8) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0x59c);
    }
    cVar1 = FUN_00146d50(param_1,uVar2,0);
    if (cVar1 != '\0') {
      FUN_0014a170();
    }
  }
  return;
}
