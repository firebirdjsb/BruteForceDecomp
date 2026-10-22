/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C44AC21706795E98F00A3540D5ADA7B0708C044DAB179CE41C63CDB38DDBDACE
 * Entry: 0x000da680, Ghidra index: 2688, label: FUN_000da680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000da680(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 *puVar4;
  int unaff_EDI;
  
  cVar3 = FUN_000da400(unaff_EDI,in_EAX);
  if (cVar3 != '\0') {
    FUN_000a4a60(10);
    FUN_000a4d00();
    iVar1 = *(int *)(unaff_EDI + 0x98c);
    uVar2 = *(undefined4 *)(unaff_EDI + 0x8c);
    for (puVar4 = (undefined4 *)(unaff_EDI + 0x18c);
        puVar4 != (undefined4 *)(unaff_EDI + 0x18c + iVar1 * 4); puVar4 = puVar4 + 1) {
      FUN_001f4240(*puVar4,uVar2);
    }
    FUN_00238630();
  }
  return;
}
