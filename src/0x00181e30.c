/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15D431543A085EC7480F5D90065B9A98EF353A3F8CD7B37321E621D600FAC00B
 * Entry: 0x00181e30, Ghidra index: 5169, label: FUN_00181e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399bec;
void FUN_00181e30(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(unaff_ESI + 8);
  iVar2 = 4;
  do {
    uVar1 = FUN_00061500(puVar3 + -2);
    puVar3[-1] = uVar1;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = FUN_00061500(unaff_ESI + 0x30);
  *(undefined4 *)(unaff_ESI + 0x34) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined1 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 100) = 0x3f800000;
  *(undefined ***)(unaff_ESI + 0x50) = &PTR_LAB_00399bec;
  *(undefined ***)(unaff_ESI + 0x68) = &PTR_LAB_00399bec;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined1 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0x3f800000;
  *(undefined ***)(unaff_ESI + 0x80) = &PTR_LAB_00399bec;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined1 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x90) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x94) = 0x3f800000;
  *(undefined ***)(unaff_ESI + 0x98) = &PTR_LAB_00399bec;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined1 *)(unaff_ESI + 0xa4) = 0;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xac) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0xb0) = 0;
  FUN_0001b650();
  return;
}
