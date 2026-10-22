/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC2C05C5682F397A064AA3ACC9431F19DC2C69539B106BD2759E2C35CAD58A63
 * Entry: 0x002242a0, Ghidra index: 7616, label: FUN_002242a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002242a0(void)

{
  int iVar1;
  undefined4 in_ECX;
  byte *unaff_ESI;
  byte local_1;
  
  local_1 = (byte)((uint)in_ECX >> 0x18);
  unaff_ESI[0x48] = 0;
  unaff_ESI[0x49] = 0;
  unaff_ESI[0x4a] = 0;
  unaff_ESI[0x4b] = 0;
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x51] = 0;
  unaff_ESI[0x52] = 0;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x58] = local_1;
  iVar1 = FUN_0025ae60(unaff_ESI + 0x58);
  *(int *)(unaff_ESI + 0x5c) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(unaff_ESI + 0x5c) + 4) = *(int *)(unaff_ESI + 0x5c);
  *(undefined4 *)*(undefined4 *)(unaff_ESI + 0x5c) = *(undefined4 *)(unaff_ESI + 0x5c);
  *(int *)(*(int *)(unaff_ESI + 0x5c) + 8) = *(int *)(unaff_ESI + 0x5c);
  unaff_ESI[0x60] = 0;
  unaff_ESI[0x61] = 0;
  unaff_ESI[0x62] = 0;
  unaff_ESI[99] = 0;
  unaff_ESI[0x6c] = 0;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6e] = 0;
  unaff_ESI[0x6f] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *unaff_ESI = *unaff_ESI & 0xc0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x54] = 0;
  unaff_ESI[0x55] = 0;
  unaff_ESI[0x56] = 0;
  unaff_ESI[0x57] = 0;
  unaff_ESI[100] = 0;
  unaff_ESI[0x65] = 0;
  unaff_ESI[0x66] = 0;
  unaff_ESI[0x67] = 0;
  unaff_ESI[0x40] = 0xff;
  unaff_ESI[0x41] = 0xff;
  unaff_ESI[0x42] = 0xff;
  unaff_ESI[0x43] = 0xff;
  return;
}
