/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A76A09115CAAEAE3551125D65299E0CEF8BCF1E2E8DBFBE9F9C9A9B30A14C430
 * Entry: 0x00234f00, Ghidra index: 7814, label: FUN_00234f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00234f00(void)

{
  uint uVar1;
  uint *in_EAX;
  uint *in_ECX;
  
  uVar1 = *in_EAX;
  if (uVar1 < 0xe94eb66b) {
    if (uVar1 == 0xe94eb66a) {
LAB_00234f56:
      *in_ECX = in_EAX[0x12];
      return;
    }
    if (uVar1 == 0x1b0dc6c7) {
      *in_ECX = in_EAX[0x15];
      in_ECX[1] = in_EAX[0x16];
      in_ECX[2] = in_EAX[0x17];
      in_ECX[3] = in_EAX[0x18];
      return;
    }
    if (uVar1 == 0xe3be168e) {
      *in_ECX = in_EAX[0x12];
      in_ECX[1] = in_EAX[0x13];
      in_ECX[2] = in_EAX[0x14];
      return;
    }
  }
  else if (uVar1 == 0xf35d5b3c) {
    *in_ECX = in_EAX[0x12];
    in_ECX[1] = in_EAX[0x13];
    in_ECX[2] = in_EAX[0x14];
    in_ECX[3] = in_EAX[0x15];
    in_ECX[4] = in_EAX[0x16];
    in_ECX[5] = in_EAX[0x17];
    in_ECX[6] = in_EAX[0x18];
  }
  else if (uVar1 == 0xfd8f670c) goto LAB_00234f56;
  return;
}
