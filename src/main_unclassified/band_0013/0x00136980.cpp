/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B2F0466FC2E463EF2E19912AC63DBAAD14159EE2FA7A0B3E7121281DC389E5E
 * Entry: 0x00136980, Ghidra index: 3893, label: FUN_00136980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039db68;
void FUN_00136980(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_ESI = PTR_FUN_0039db68;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  *(undefined1 *)(unaff_ESI + 0xf) = local_1;
  iVar1 = FUN_00138fe0(unaff_ESI + 0xf);
  unaff_ESI[0x10] = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(undefined4 *)(unaff_ESI[0x10] + 4) = unaff_ESI[0x10];
  *(undefined4 *)unaff_ESI[0x10] = unaff_ESI[0x10];
  *(undefined4 *)(unaff_ESI[0x10] + 8) = unaff_ESI[0x10];
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[1] = 100;
  unaff_ESI[0x16] = 0x1409c600;
  *(byte *)(unaff_ESI + 0x12) = *(byte *)(unaff_ESI + 0x12) & 0xf9 | 0x19;
  return;
}
