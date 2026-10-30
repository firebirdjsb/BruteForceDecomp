/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9899B7018FF901083A53582AD72F10686D735DE965FF86591FAADFE3ADD13F42
 * Entry: 0x0008bf70, Ghidra index: 1694, label: FUN_0008bf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00074210(int param_1);

extern uint32_t PTR_DAT_003a2108;
extern uint32_t PTR_FUN_003a25e4;
void FUN_0008bf70(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_DAT_003a2108;
  iVar2 = 8;
  puVar1 = unaff_ESI;
  do {
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = unaff_ESI + 0x19;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = unaff_ESI + 0x25;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2f] = 0;
  puVar1 = unaff_ESI + 0x32;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x12] = param_1;
  *(byte *)(unaff_ESI + 0x11) = *(byte *)(unaff_ESI + 0x11) | 1;
  puVar1 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_003a25e4;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  unaff_ESI[0x13] = puVar1;
  FUN_00074210(puVar1);
  puVar1 = unaff_ESI + 0x20;
  iVar2 = 4;
  do {
    puVar1[-0xc] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(byte *)(unaff_ESI + 0x11) = *(byte *)(unaff_ESI + 0x11) & 0xfd;
  unaff_ESI[0x30] = 0;
  return;
}
