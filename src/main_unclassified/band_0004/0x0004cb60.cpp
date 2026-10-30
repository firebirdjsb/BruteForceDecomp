/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 178A164C335DD4818DECE7D6373B8222F0ECAA113404336CF66F478024776915
 * Entry: 0x0004cb60, Ghidra index: 640, label: FUN_0004cb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000e6e00(undefined4 *param_1);

undefined4 FUN_0004cb60(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *unaff_EDI;
  int local_4;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI[2] + 0xa70) + 0x118);
  iVar3 = *(int *)(*(int *)(unaff_EDI[2] + 0xa70) + 0x114);
  while( true ) {
    if (iVar3 == iVar1) {
      return 0;
    }
    local_4 = iVar3;
    (**(code **)(*unaff_EDI + 0x40))();
    cVar2 = FUN_000e6e00(&local_4);
    if (cVar2 != '\0') break;
    iVar3 = iVar3 + 0x24;
  }
  return 1;
}
