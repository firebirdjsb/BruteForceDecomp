/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDCEFB148ABDB244EF99236B7655CEA0053BAF312F2D678294136E94AE033318
 * Entry: 0x00274d00, Ghidra index: 8879, label: FUN_00274d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046988c;
extern uint32_t PTR_LAB_003926e8;
void FUN_00274d00(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[3] = DAT_0046988c;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = PTR_LAB_003926e8;
  DAT_0046988c = DAT_0046988c + 1;
  unaff_ESI[5] = 0xffffffff;
  unaff_ESI[6] = 0xffffffff;
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
  FUN_00274d70(param_1);
  unaff_ESI[0xd] = unaff_ESI[3];
  return;
}
