/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D71E7305BC27737C1879CFF57A3DBB2918062B29156C06B8E917C335F61C0218
 * Entry: 0x0005e600, Ghidra index: 987, label: FUN_0005e600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x0005E62A and 0x0005E65A CALL 0x0005EB60 (RET 8).
 * The first pushed word points to a four-byte local output slot.
 * Declaration follows the existing callee draft only; guest ESI and
 * native linkage remain ABI_UNVERIFIED. */
extern int *FUN_0005eb60(int *guest_output_word, int guest_element_address);
void FUN_0005e600(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  int local_4; /* original four-byte guest stack output slot */
  
  iVar1 = *(int *)(in_EAX + 8);
  iVar2 = *(int *)(in_EAX + 4);
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == unaff_EDI) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
    if (iVar2 != iVar1) {
      FUN_0005eb60(&local_4,iVar2);
    }
  }
  iVar1 = *(int *)(in_EAX + 0x18);
  iVar2 = *(int *)(in_EAX + 0x14);
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == unaff_EDI) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
    if (iVar2 != iVar1) {
      FUN_0005eb60(&local_4,iVar2);
    }
  }
  return;
}
