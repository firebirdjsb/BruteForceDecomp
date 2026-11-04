/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDCCF47A1794EA92A1AD8301BCCE0ACFF97DD87C18720162D3DAF87197AF0CEE
 * Entry: 0x0005e1e0, Ghidra index: 980, label: FUN_0005e1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x0005E20A CALL 0x0005EB60 (RET 8), with a four-byte
 * caller-owned output word. Declaration is source-matched only;
 * guest ESI and host linkage remain ABI_UNVERIFIED. */
extern int *FUN_0005eb60(int *guest_output_word, int guest_element_address);
undefined4 FUN_0005e1e0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  int local_4; /* original four-byte guest stack output slot */
  
  iVar1 = *(int *)(in_EAX + 8);
  iVar3 = *(int *)(in_EAX + 4);
  uVar2 = 0;
  if (iVar3 != iVar1) {
    do {
      if (*(int *)(iVar3 + 4) == unaff_EDI) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar1);
    if (iVar3 != iVar1) {
      FUN_0005eb60(&local_4,iVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}
