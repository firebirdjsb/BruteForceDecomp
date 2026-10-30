/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B1EF190677EB21BF0BEAE1DAE29179C03F67C0F5164FA7C92AC7204805020DE
 * Entry: 0x00273de0, Ghidra index: 8869, label: FUN_00273de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046988c;
extern uint32_t PTR_FUN_003924b8;
void FUN_00273de0(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[3] = DAT_0046988c;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = PTR_FUN_003924b8;
  DAT_0046988c = DAT_0046988c + 1;
  unaff_ESI[5] = 0xffffffff;
  unaff_ESI[6] = 0xffffffff;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x1d) = 0;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
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
  FUN_00273f00(param_1);
  unaff_ESI[0xd] = unaff_ESI[3];
  return;
}
