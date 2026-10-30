/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E02BCEA5BFF166DD273082CEBBF162CE83EAE64D13C6DA3757E5C1D93A459BD
 * Entry: 0x00371a00, Ghidra index: 13382, label: FUN_00371a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_0037ec8c;
uint FUN_00371a00(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *unaff_ESI;
  
  iVar2 = MmAllocateContiguousMemoryEx(DAT_0037ec8c,0,0x7ffffff,0,0x404);
  unaff_ESI[9] = iVar2;
  uVar1 = DAT_0037ec8c;
  if (iVar2 == 0) {
    return 0x8007000e;
  }
  unaff_ESI[10] = iVar2 + (DAT_0037ec8c & 0xfffffffc);
  uVar3 = DAT_0037ec88;
  *unaff_ESI = iVar2;
  unaff_ESI[1] = iVar2 + -0x204 + (uVar3 & 0xfffffffc);
  unaff_ESI[0xb] = 5;
  *(undefined4 *)unaff_ESI[0xc] = 3;
  uVar3 = (uVar1 - 1) / uVar3;
  unaff_ESI[0x11] = 3;
  bVar4 = 0;
  do {
    uVar3 = uVar3 >> 1;
    bVar4 = bVar4 + 1;
  } while (uVar3 != 0);
  iVar2 = 1 << (bVar4 & 0x1f);
  unaff_ESI[0xe] = iVar2 + -1;
  iVar2 = XAPILIB__LocalAlloc(0x40,iVar2 * 0xc);
  unaff_ESI[0x12] = iVar2;
  return (iVar2 != 0) - 1 & 0x8007000e;
}
