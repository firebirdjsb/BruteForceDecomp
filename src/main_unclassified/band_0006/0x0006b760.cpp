/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80FEC8CCA0823DABF2BFCF67822D86AD70EDCAF27F50EA6D7F1718E70E77EED2
 * Entry: 0x0006b760, Ghidra index: 1213, label: FUN_0006b760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a27a0;
void FUN_0006b760(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EDI;
  
  unaff_EDI[0xf] = 0x3f800000;
  unaff_EDI[7] = 0x3f800000;
  unaff_EDI[9] = 0x3f800000;
  unaff_EDI[0x16] = 1;
  *unaff_EDI = &PTR_LAB_003a27a0;
  unaff_EDI[0xe] = 0xbf800000;
  unaff_EDI[8] = 0x47c35000;
  unaff_EDI[0xb] = 0x3faaaaab;
  unaff_EDI[10] = 0x3f400000;
  FUN_0006ab30();
  FUN_0006ad00();
  FUN_0006ad90();
  iVar1 = FUN_002ea01d(0x78);
  if (iVar1 != 0) {
    uVar2 = FUN_00235a30(0,0);
    unaff_EDI[0x17] = uVar2;
    *(undefined1 *)(unaff_EDI + 0x24) = 1;
    return;
  }
  unaff_EDI[0x17] = 0;
  *(undefined1 *)(unaff_EDI + 0x24) = 1;
  return;
}
