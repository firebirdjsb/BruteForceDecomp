/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7918F01B8B042D39A30F1DF47C832D85474A9E513C54187D90715B63FEC43D83
 * Entry: 0x00035740, Ghidra index: 349, label: FUN_00035740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_0014d680(int param_1,uint param_2);

void FUN_00035740(void)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int unaff_EDI;
  
  iVar2 = FUN_000120f0();
  if (-1 < unaff_EDI) {
    iVar2 = *(int *)(iVar2 + 0x2e8);
    cVar1 = FUN_0014d680(unaff_EBX,unaff_EDI);
    if (cVar1 != '\0') {
      *(undefined4 *)(iVar2 + 0x1c0) = unaff_EBX;
      *(int *)(iVar2 + 0x1c4) = unaff_EDI;
    }
  }
  return;
}
