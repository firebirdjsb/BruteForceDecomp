/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9AE0C893DC6D69ACCE86DE9B595C357976FC941DA29C56AA49AA58ED1C70FE9
 * Entry: 0x001548f0, Ghidra index: 4450, label: FUN_001548f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394858;
extern uint32_t PTR_FUN_0039afb4;
extern uint32_t PTR_LAB_0039af90;
extern uint32_t PTR_LAB_0039afb0;
void FUN_001548f0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_0039af90;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0xffffffff;
  unaff_ESI[2] = *in_EAX;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  *(byte *)(unaff_ESI + 3) = *(byte *)(unaff_ESI + 3) | 1;
  unaff_ESI[6] = &PTR_FUN_00394858;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  *unaff_ESI = &PTR_FUN_0039afb4;
  unaff_ESI[6] = &PTR_LAB_0039afb0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  puVar1 = unaff_ESI + 0x37;
  iVar3 = 8;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_ESI[0x47] = 0;
  unaff_ESI[0x48] = 0;
  uVar2 = FUN_001fad20(unaff_ESI + 0x51);
  unaff_ESI[0x52] = uVar2;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x4f] = 0;
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x4c] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[1] = 2;
  unaff_ESI[0x2a] = unaff_ESI[0x2a] & 0xfffffb10 | 0x3100;
  return;
}
