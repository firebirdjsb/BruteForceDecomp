/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9512E679AC69F048E419360DF694EFA38CE7AC4DD0D63695276E496FA03DB198
 * Entry: 0x00088f70, Ghidra index: 1638, label: FUN_00088f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003a219c;
extern uint32_t PTR_LAB_003a21bc;
void FUN_00088f70(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int *piVar3;
  
  *unaff_ESI = &PTR_LAB_003a21bc;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[1] = in_EAX;
  unaff_ESI[2] = *(undefined4 *)(in_EAX + 0xbec);
  *unaff_ESI = &PTR_DAT_003a219c;
  puVar1 = unaff_ESI + 0xc;
  iVar2 = 8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[5] = 0x1b74bab0;
  unaff_ESI[3] = 0xf4fe7eb7;
  unaff_ESI[4] = 0x7cc7be5;
  unaff_ESI[6] = 5;
  unaff_ESI[9] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[7] = 0;
  *(byte *)(unaff_ESI + 10) = *(byte *)(unaff_ESI + 10) & 0xf1 | 1;
  piVar3 = unaff_ESI + 0xc;
  iVar2 = 8;
  do {
    if (*piVar3 != 0) {
      FUN_0008f6e0();
      *piVar3 = 0;
    }
    piVar3[1] = 0;
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
