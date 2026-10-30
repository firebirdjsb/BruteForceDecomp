/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 308A841C3D55345B3F5451EFC523A8380A818F236F2BD2617F8073A0A4468B4C
 * Entry: 0x0001ff70, Ghidra index: 171, label: FUN_0001ff70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001ff70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_EAX + 6) = *(undefined1 *)(in_ECX + 7);
  in_EAX[0x14] = in_ECX[9];
  in_EAX[0x15] = in_ECX[10];
  in_EAX[0x16] = in_ECX[8];
  in_EAX[0x17] = in_ECX[0xb];
  in_EAX[6] = in_EAX[6] ^ ((uint)*(byte *)(in_ECX + 6) << 8 ^ in_EAX[6]) & 0x100;
  in_EAX[0x18] = in_ECX[0xe];
  in_EAX[0x19] = in_ECX[0xf];
  in_EAX[0x1a] = in_ECX[0x10];
  in_EAX[0x1b] = in_ECX[0x11];
  in_EAX[0x1c] = in_ECX[0x15];
  in_EAX[0x1d] = in_ECX[0x16];
  in_EAX[0x1e] = in_ECX[0x17];
  in_EAX[8] = in_ECX[0x12];
  in_EAX[7] = in_ECX[0x14];
  in_EAX[6] = in_EAX[6] ^ ((uint)*(byte *)(in_ECX + 0x13) << 0xe ^ in_EAX[6]) & 0x4000;
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = in_ECX[4];
  in_EAX[5] = in_ECX[5];
  in_EAX[6] = in_EAX[6] ^ (in_ECX[0xc] << 9 ^ in_EAX[6]) & 0x3e00;
  in_EAX[0x13] = in_ECX[0xd];
  in_EAX[0x1f] = in_ECX[0x26];
  in_EAX[0x20] = in_ECX[0x22];
  in_EAX[0x21] = in_ECX[0x23];
  in_EAX[9] = in_ECX[0x18];
  in_EAX[10] = in_ECX[0x19];
  in_EAX[0xb] = in_ECX[0x1a];
  in_EAX[0xc] = in_ECX[0x1b];
  in_EAX[0xd] = in_ECX[0x1d];
  in_EAX[0xe] = in_ECX[0x1c];
  in_EAX[0xf] = in_ECX[0x1e];
  in_EAX[0x10] = in_ECX[0x1f];
  in_EAX[0x12] = in_ECX[0x21];
  in_EAX[0x11] = in_ECX[0x20];
  in_EAX[0x22] = in_ECX[0x24];
  in_EAX[0x23] = in_ECX[0x25];
  return;
}
