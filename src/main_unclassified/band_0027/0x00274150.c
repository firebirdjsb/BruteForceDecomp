/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33A2A3F348B93C1FA8F720001BDF74278CC7A3079E4490EC8F609989658BA5C4
 * Entry: 0x00274150, Ghidra index: 8873, label: FUN_00274150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046988c;
extern uint32_t PTR_FUN_00392450;
void FUN_00274150(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[3] = DAT_0046988c;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[1] = 0;
  DAT_0046988c = DAT_0046988c + 1;
  unaff_ESI[5] = 0xffffffff;
  unaff_ESI[6] = 0xffffffff;
  unaff_ESI[0x13] = 0;
  *(undefined1 *)(unaff_ESI + 0x17) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5d) = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x14] = 1;
  unaff_ESI[0x15] = 5;
  unaff_ESI[0x16] = 0x3f800000;
  unaff_ESI[0x18] = 0x3f800000;
  unaff_ESI[0x12] = unaff_ESI + 8;
  *unaff_ESI = &PTR_FUN_00392450;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2e] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x29) = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x35] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x30) = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0xd] = 0xffffffff;
  unaff_ESI[0xf] = 0xffffffff;
  unaff_ESI[0x10] = 0xffffffff;
  FUN_002742a0(param_1);
  unaff_ESI[0xd] = unaff_ESI[3];
  return;
}
