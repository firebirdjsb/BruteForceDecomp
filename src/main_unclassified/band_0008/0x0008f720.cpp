/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E31A7180ECFCF09F86AFD80B3FFD6246B372E11FB4EEE5A2D6B244F67C2C6167
 * Entry: 0x0008f720, Ghidra index: 1757, label: FUN_0008f720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_00469b24;
void FUN_0008f720(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_ESI;
  
  puVar3 = (undefined4 *)(&DAT_00414da0 + (unaff_ESI * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
  iVar4 = 0;
  iVar2 = DAT_00469b24;
  for (puVar1 = (undefined4 *)*puVar3; DAT_00469b24 = iVar2, puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar4 = iVar4 + 1;
    if (puVar1[1] == unaff_ESI) {
      puVar1[1] = 0;
    }
    else {
      *puVar3 = puVar1;
      puVar3 = puVar1;
    }
    iVar2 = DAT_00469b24;
  }
  *puVar3 = 0;
  if (iVar2 < iVar4) {
    DAT_00469b24 = iVar4;
  }
  return;
}
